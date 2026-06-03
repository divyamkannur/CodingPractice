// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;
int main() {
    // Write C++ code here
    //dollar = 100 cents
    //1 quarter = 25 cents
    // 1dime = 10 cents
    // 1 nickel = 5 cents
    //1 penny = 1 cent
    
    // example 92 cents
    int cents{0};
    int dollar{0};
    int quarter{0};
    int dime{0};
    int nickel{0};
    int penny{0};
    int rem{0};
    
    cout << "enter the amount in cents :" ;
    cin >> cents;
    
    if(cents!=0)
    {
        dollar = cents/100;
        rem = cents %100;
        
        if(rem!=0)
        {
            quarter = rem/25;
            rem = rem % 25;
        }
        if(rem!=0)
        {
            dime = rem/10;
            rem = rem % 10;
        }
        if(rem!=0)
        {
            nickel = rem/5;
            rem = rem%5;
        }
        if(rem!=0)
        {
            penny = rem;
        }
    }
    cout << "dollar: " << dollar << endl;
    cout << "quarter: " << quarter << endl;
    cout << "dime: " << dime << endl;
    cout << "nickel: " << nickel << endl; 
    cout << "penny: " << penny << endl;
}