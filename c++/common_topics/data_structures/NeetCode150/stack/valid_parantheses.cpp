#include <iostream>
#include <unordered_map>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s) {
    unordered_map<char, char> my_map = {
    {')', '('},
    {'}', '{'},
    {']', '['}
    }; 
    stack<char> st;
    for(char c: s)
    {
        if(my_map.count(c))
        {
            cout << "st.top() " << st.top() << endl;
            cout << "my_map[c]" << my_map[c] << endl;
            if(st.empty() || st.top() !=my_map[c])
            {
                return false;
            }
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }  
    return st.empty();
    }



int main()
{
    string s = "()[]{}";
    cout << isValid(s);
    return 0;
}