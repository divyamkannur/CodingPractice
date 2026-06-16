/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> nums = {100,4,200,1,3,2};

int longestConsecutive(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    // if array is empty return 0
    if (nums.size() == 0) {
        return 0;
    }
    // initialize length and max length
    int len = 1;
    int maxlen = 1;
    for (int i = 1; i < nums.size(); i++) {
        // if 2 consecutive numbers are same, skip
        if (nums[i] == nums[i - 1]) continue;

        // if numbers are consequitive increment len
        if (nums[i] - nums[i - 1] == 1) {
            len++;
        } else {  // else reset the length
            len = 1;
        }
        // compute max len
        if (len > maxlen) {
            maxlen = len;
        }
    }
    return maxlen;
}


int main()
{
    cout << longestConsecutive(nums);
    return 0;
}