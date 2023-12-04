#pragma once
#include "Foo2.h"

class Foo
{
public:
    Foo(Foo2 *fo2, int t)
    {
        foo2.reset(fo2);
        this->tmp = t;

        std::cout << "参数传递的 foo2" << fo2 << std::endl;
        std::cout << "Foo 内部的 foo2" << this->foo2.get() << std::endl;
    }

    void print()
    {
        foo2->print();
        std::cout << tmp << std::endl;
    }

private:
    std::shared_ptr<Foo2> foo2;
    int tmp;
};