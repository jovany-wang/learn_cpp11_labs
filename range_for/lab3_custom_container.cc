#include <iostream>

/**
* 1. 该类支持begin()和end()迭代器(缺一不可).
* 2. 该迭代器重载!=, ++, *方法.
*/

template<class T>
class RangeIterator {
public:
    RangeIterator(const T &val, const T &step) :val_(val), step_(step) {}

    const T& operator*() {
        return val_;
    }

    RangeIterator &operator++() {
        val_ += step_;
        return *this;
    }

    bool operator!=(const RangeIterator &other) {
        if (step_ > 0) {
            return val_ < other.val_;    
        }
        
        return val_ > other.val_;
    }

private:
    T val_;

    T step_;
};


template<class T>
class Range {
public:
    Range(const T &begin, const T &end, const T &step) 
        :begin_(begin, step), end_(end, step) {}

    RangeIterator<T> begin() {
        return begin_;
    }

    RangeIterator<T> end() {
        return end_;
    }

private:
    RangeIterator<T> begin_;

    RangeIterator<T> end_;
};

int main() {
    Range<int> my_range = {/*begin=*/0, /*end=*/5, /*step=*/2};
    for (auto val : my_range) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
 }
