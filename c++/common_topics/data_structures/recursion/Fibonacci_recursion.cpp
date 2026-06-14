/******************************************************************************
@@@@@@ Fibonacci Series @@@@@
*******************************************************************************/

#include <iostream>

using namespace std;

int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return (fib(n-2)+ fib(n-1));
    }
    return 0;
}

int main()
{
    int res = fib(7);
    std::cout<< "Hello World " <<res << endl;
    return 0;
}