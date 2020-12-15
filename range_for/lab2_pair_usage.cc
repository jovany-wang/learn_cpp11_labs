#include <iostream>
#include <vector>
#include <map>

int main() {
    std::map<int, int> mymap = {{1, 101}, {2, 102}, {3, 103}};

    for (auto &&[first, second] : mymap) {
        std::cout << first << ": " << second << std::endl;
    }

    return 0;
}
