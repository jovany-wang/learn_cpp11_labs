#include <iostream>
#include <vector>

int main() {
    {
        std::vector<int> vec = {1, 2, 3};
        int total = 0;
        for (auto val : vec) {
            if (val == 1) {
                vec.push_back(100);
            }
            total += val;
        }

        std::cout << "total = " << total << std::endl;
        return 0;
    }
}
