#include "Function.h"
#include "FunctionDecorator.h"

int main(int argc, char const *argv[])
{
    Function * function = new MainFunction();

    function = new LogDecorator(function);

    /* 相当于 function->operator()()， -> 本身就要解引用 */
    /* 多态：在使用 指针 和 引用的时候，编译器 将 函数的调用 从 vptr 中 拿函数地址 */
    (*function)();

    delete function;


    // error => 引用只能初始化一次

    // MainFunction mainfunc;
    // Function & function = mainfunc;

    return 0;
}
