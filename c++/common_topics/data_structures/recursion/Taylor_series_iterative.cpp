/******************************************************************************
@@@@@@ Taylor Series @@@@@
*******************************************************************************/

#include <iostream>

using namespace std;

double e(int x, int n)
{
    static double s;
    int i;
    double numer =1;
    double den = 1; // remember to initialize, otherwise we get infinity
    
    for(int i =1; i<=n; i++)
    {
        numer= numer * x;
        den= den * i;
        s= s+ numer/den;
    }
    return s;
}

int main()
{
    double res = e(1, 10);
    std::cout<< "Hello World " <<res << endl;

    return 0;
}