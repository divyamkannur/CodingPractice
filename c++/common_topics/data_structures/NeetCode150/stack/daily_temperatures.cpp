/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector<int> res(temperatures.size(), 0);
    stack<int> st;
    for(int i=0; i<temperatures.size(); i++)
    {
        // If the current temperature is greater than the temperature at the index stored at the top of the stack
        // we pop from the stack and calculate the difference in indices to find how many days until a warmer temperature.
        while(!st.empty() && temperatures[i] > temperatures[st.top()])
        {
            // Get the index of the previous temperature that was less than the current temperature
            int prev = st.top();
            st.pop();
            // Calculate the number of days until a warmer temperature and store it in the result vector
            res[prev] = i-prev;
        }
        // Push the current index onto the stack
        st.push(i);
    }
    return res;
}

int main()
{
    vector<int> temp = {73,74,75,71,69,72,76,73};
    vector<int> result;
    result = dailyTemperatures(temp);
    for(auto elem: result)
    {
        cout << elem << endl;
    }

    return 0;
}