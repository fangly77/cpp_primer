#pragma once
#include "Foo2.h"

class Foo
{
public:
    Foo(const Foo2 &fo2, const int t) : foo2(fo2), tmp(t)
    {
        std::cout << "参数传递的 foo2" << &(fo2) << std::endl;
        std::cout << "Foo 内部的 foo2" << &(this->foo2) << std::endl;
    }

    void print()
    {
        foo2.print();
        std::cout << tmp << std::endl;
    }

private:
    const Foo2 &foo2;
    const int tmp;
};