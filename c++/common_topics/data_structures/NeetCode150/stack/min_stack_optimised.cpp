#include <iostream>
#include <stack>

using namespace std;

class MinStack {
private:
    stack<pair<int, int>> st;

public:
    MinStack() {}

    void push(int value) {
        // If the stack is empty, push the value along with itself as the minimum
        if (st.empty()) {
            st.push({value, value});
        } else {
            // Get the current minimum from the top of the stack
            int minVal = min(value, st.top().second);
            st.push({value, minVal});
        }
    }

    void pop() { st.pop(); }

    // Return the top value of the stack
    int top() { return st.top().first; }

    // Return the minimum value from the top of the stack
    int getMin() { return st.top().second; }

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