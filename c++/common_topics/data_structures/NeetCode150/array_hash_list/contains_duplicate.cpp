/******************************************************************************
@@@@@ Contains Duplicate @@@@@

Given an integer array nums, return true if any value appears more than once in the array,
otherwise return false.

Example 1:
Input: nums = [1, 2, 3, 3]
Output: true

Example 2:
Input: nums = [1, 2, 3, 4]
Output: false
*******************************************************************************/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int, int> my_map;

        for(int i=0; i<nums.size();i++)
        {
            if(my_map.find(nums[i]) != my_map.end())
            {
                return true;
            }
            else
            {
                my_map[nums[i]];
            }
        }
        return false;
    }
};

int main()
{
    vector<int> nums = {1,2,3,4};
    Solution S;
    bool result{false};
    result = S.hasDuplicate(nums);
    std::cout<< result<< endl;
    std::cout<<"Hello World";

    return 0;
}