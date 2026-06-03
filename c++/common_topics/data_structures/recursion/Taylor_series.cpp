/******************************************************************************
@@@@@@ Taylor Series @@@@@
*******************************************************************************/

#include <iostream>

using namespace std;

double e(int x, int n)
{
    static double s;
    if(n==0)
    {
        return s;
    }
    s = 1+ s* x/n;
    return e(x, n-1);
}

int main()
{
    int res = e(1, 10);
    std::cout<< "Hello World " <<res << endl;

    return 0;
}