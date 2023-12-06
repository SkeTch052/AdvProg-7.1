#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void RemovingDuplicates(std::vector<T>& v) {

    std::sort(v.begin(), v.end());
    auto last = std::unique(v.begin(), v.end());
    v.erase(last, v.end());
}

int main()
{
    std::vector<int> vec { 1, 1, 2, 5, 6, 1, 2, 4 };

    std::cout << "[IN]: ";
    for (int elem : vec) { std::cout << elem << ' '; }
    std::cout << std::endl;

    RemovingDuplicates(vec);

    std::cout << "[OUT]: ";
    for (int elem : vec) { std::cout << elem << ' '; }
    std::cout << std::endl;

    return 0;
}