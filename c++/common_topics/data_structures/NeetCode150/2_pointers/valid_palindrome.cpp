#include <iostream>

using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;

    while(left < right)
    {
        if((left < right) && !isalnum(s[left])){ left++;continue;}
        if((left < right) && !isalnum(s[right])){right--;continue;}
        if(tolower(s[left]) != tolower(s[right]))
        {
           return false; 
        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    string str{"A man, a plan, a canal: Panama"};
    string s2{"race a car"};
    cout << isPalindrome(str) << endl;
    cout << isPalindrome(s2) << endl;
    return 0;
}