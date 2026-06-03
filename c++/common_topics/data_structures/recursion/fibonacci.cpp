
/*
    Fibonacci series using recursion
*/
#include <iostream>

using namespace std;


int fibonacci(int n)
{
    if(n==0)
    {
        return 1;        
    }
    return fibonacci(n-1)*n;
}

int main()
{
    cout<< fibonacci(5) <<endl;
    return 0;
}