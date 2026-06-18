#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int trap(vector<int>& height) {
    if(height.empty()) return 0;
    
    int left = 0;
    int right = height.size() -1;
    int leftMax = height[left];
    int rightMax = height[right];
    int res{0};
    while(left < right)
    {
        // if leftMax is less than rightMax, then we can be sure that the amount of water trapped at left index is determined by leftMax, and we can move the left pointer to the right
        if(leftMax < rightMax)
        {
            left++;
            // update the leftMax and calculate the trapped water at left index
            leftMax = max(leftMax, height[left]);
            // the amount of water trapped at left index is determined by leftMax, so we can calculate the trapped water at left index and add it to the result
            res = res + (leftMax - height[left]);
        }
        else
        {
            right--;
            // update the rightMax and calculate the trapped water at right index
            rightMax = max(rightMax, height[right]);
            // the amount of water trapped at right index is determined by rightMax, so we can calculate the trapped water at right index and add it to the result
            res = res + (rightMax - height[right]);
        }
    }
    return res;
}

int main()
{
    vector<int> nums = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(nums) << endl;
    return 0;
}