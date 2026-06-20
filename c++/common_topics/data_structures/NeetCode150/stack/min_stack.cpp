#include <iostream>
#include <stack>

using namespace std;

class MinStack {
private:
    stack<int> st;
    stack<int> minst;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        // If the new value is smaller than or equal to the current minimum, push it onto the minst stack
        if(minst.empty() || (val <= minst.top()))
        {
            minst.push(val);
        }
    }
    
    void pop() {
    // If the top of the main stack is the same as the top of the minst stack, pop from minst as well
      if(st.top() == minst.top())
      {
        minst.pop();
      }
      st.pop();
    }
    
    int top() {
        // Return the top of the main stack
        return st.top();
    }
    
    int getMin() {
        // Return the top of the minst stack, which is the minimum element
        return minst.top();  
    }
};


int main() {
    MinStack ms;

    ms.push(5);
    cout << "Min: " << ms.getMin() << endl;  // 5

    ms.push(3);
    cout << "Min: " << ms.getMin() << endl;  // 3

    ms.push(7);
    cout << "Top: " << ms.top() << endl;     // 7
    cout << "Min: " << ms.getMin() << endl;  // 3

    ms.pop();
    cout << "Top after pop: " << ms.top() << endl;  // 3
    cout << "Min: " << ms.getMin() << endl;         // 3

    ms.pop();
    cout << "Top after pop: " << ms.top() << endl;  // 5
    cout << "Min: " << ms.getMin() << endl;         // 5

    return 0;
}
