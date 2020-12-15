#include <iostream>

template<class T>
class RangeIterator {
public:
    RangeIterator(const T &val, const T &step) :val_(val), step_(step) {}

    const T& operator*() {
        return val_;
    }

    RangeIterator &operator++() {
        std::cout << "------ operator++() callbed." << std::endl;
        val_ += step_;
        return *this;
    }

    bool operator!=(const RangeIterator &other) {
        std::cout << "------ operator!=() callbed." << std::endl;
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
        std::cout << "------ begin() callbed." << std::endl;
        return begin_;
    }

    RangeIterator<T> end() {
        std::cout << "------ end() callbed." << std::endl;
        return end_;
    }

private:
    RangeIterator<T> begin_;

    RangeIterator<T> end_;
};

int main() {
    Range<int> my_range = {/*begin=*/0, /*end=*/5, /*step=*/2};
    for (auto val : my_range) {
        std::cout << val << std::endl;
    }

    return 0;
 }
