// homework_up_8.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::cout << "[IN:]  ";

    std::vector<int> v = { 1, 1, 2, 5, 6, 1, 2, 4 };

    for(auto element : v)
    {
        std::cout << element << " ";
    }

    std::sort(begin(v), end(v));

    std::cout << " " << std::endl;
    std::cout << "[OUT:]  ";

    auto result = std::unique(begin(v), end(v));

    std::for_each(std::begin(v), result, [](int a)
        {
            std::cout << a << " ";
        });

    return 0;
}
