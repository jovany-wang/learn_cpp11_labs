#include <iostream>
#include <vector>

int main() {
    {
        std::vector<int> vec = {1, 2, 3};
        int total = 0;
        for (auto val : vec) {
            total += val;
        }

        std::cout << "total = " << total << std::endl;
        return 0;
    }

    {
        int arr[3] = {1, 2, 3};
        for (auto &val : arr) {
            val += 100;
        }

        for (auto val : arr) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}
