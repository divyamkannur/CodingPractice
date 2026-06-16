#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& heights) {
    int left = 0;
    int right = heights.size() - 1;
    int max_store{0};
    while (left < right) {
        // The area is determined by the shorter line and the distance between the lines
        int height = (heights[left] < heights[right]) ? heights[left] : heights[right];
        // Calculate the current area and update max_store if it's larger
        int curr_store = height * (right - left);
        // Update max_store if the current area is larger
        if (curr_store > max_store) {
            max_store = curr_store;
        }
        // Move the pointer of the shorter line inward to potentially find a taller line
        if(heights[left]<heights[right]){left++;}
        else{right--;}
    }
    return max_store;
}

int main()
{
    vector<int> heights = {2,2,2};
    int res = maxArea(heights);
    cout << "res " << res << endl;
    return 0;
}
