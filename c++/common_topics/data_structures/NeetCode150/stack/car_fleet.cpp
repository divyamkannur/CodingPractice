

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int carFleet(int target, vector<int>& position, vector<int>& speed) {
    vector<pair<int, int>> cars;

    // Create a vector of pairs to store the position and speed of each car
    for (int i = 0; i < position.size(); i++) {
        cars.push_back({position[i], speed[i]});
    }
    // Sort the cars based on their position in ascending order
    sort(cars.begin(), cars.end());
    stack<double> st;
    // Iterate through the cars in reverse order to calculate the time taken for each car to reach the target
    for(int i=cars.size()-1; i>=0; i--){
        int pos = cars[i].first;
        int spd = cars[i].second;
        // Calculate the time taken for the current car to reach the target
        double timetaken = (double)(target - pos) / spd;
        // If the stack is empty or the time taken for the current car is greater than the time taken for the car at the top of the stack, push the current time onto the stack
        if (st.empty() || timetaken > st.top()) {
            st.push(timetaken);
        }
    }
    // The size of the stack represents the number of car fleets
    return st.size();
}

int main()
{
    int target = 10;
    vector<int> position = {4,1,0,7};
    vector<int> speed = {2,2,1,1};
    cout << carFleet(target, position, speed);
    return 0;
}