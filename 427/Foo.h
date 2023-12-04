#pragma once
#include "Foo2.h"

class Foo
{
public:
    Foo(const Foo2 &foo2, const int tmp) : foo2(foo2), tmp(tmp) {}

    void print()
    {
        foo2.print();
        std::cout << tmp << std::endl;
    }

private:
    Foo2 foo2;
    int tmp;
};