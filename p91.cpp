//  auto use cases

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1
    auto x = 42;            // x is deduced as int
    auto pi = 3.1415926535; // pi is deduced as double

    // 2
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (auto it= numbers.begin(); it != numbers.end(); ++it)
    {
        // 'it' is automatically deduced as an iterator to int
        std::cout << *it << " ";
    }

    // 3
    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};
    for (auto name : names) 
    {
        std::cout << name << " ";
    }

    return 0;
}

//  cout<<<<endl;