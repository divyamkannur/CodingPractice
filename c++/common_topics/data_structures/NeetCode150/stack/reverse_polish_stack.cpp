#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> st;
    for(string s: tokens)
    {
        if(s != "+" && s!= "-" && s!="*" && s!="/")
        {
            st.push(stoi(s));
        }
        else
        {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            if(s == "+") st.push(a+b);
            else if(s == "-") st.push(a-b);
            else if(s == "*") st.push(a*b);
            else st.push(a/b);
        }
        
    }
    return st.top();
}

int main()
{
    vector<string> token = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    cout << evalRPN(token);

    return 0;
}