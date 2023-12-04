#pragma once
#include <vector>

class Foo2
{
public:
    Foo2(const std::vector<int> &v) : v(v) {}
    void print()
    {
        for (size_t vv : v)
        {
            std::cout << vv << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<int> v;
};