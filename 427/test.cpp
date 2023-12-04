#include <iostream>
#include "Foo.h"

int main()
{
    std::vector<int> v = {1, 3, 4};
    Foo2 foo2{v};

    Foo2 *ptr_foo2 = &foo2;

    {
        std::shared_ptr<Foo> ptr_foo = std::make_shared<Foo>(&foo2, 1);
        ptr_foo->print();
    }

    // 这里 ptr_foo 不应该已经把 foo2 销毁了吗？为什么后面还能执行
    ptr_foo2->print();
}