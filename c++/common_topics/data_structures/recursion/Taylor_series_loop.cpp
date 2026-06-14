/******************************************************************************
@@@@@@ Fibonacci Series using Loop @@@@@
*******************************************************************************/

#include <iostream>

using namespace std;

int fib(int n)
{
    int t1=0, t2=1, s=0;
    if(n<=1)
    {
        return n;
    }
    for(int i=2; i<=n; i++)
    {
        s = t1+t2;
        t1= t2;
        t2 = s;
    }
    return s;
}

int main()
{
    int res = fib(7);
    std::cout<< "Hello World " <<res << endl;
    return 0;
}