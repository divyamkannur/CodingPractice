/******************************************************************************

@@@@@ Two Sum @@@@@

Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.
You may assume that every input has exactly one pair of indices i and j that satisfy the condition.
Return the answer with the smaller index first.

Example 1:
Input: 
nums = [3,4,5,6], target = 7
Output: [0,1]

*******************************************************************************/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //iterate through the array and add in map
        // find the remainder
        // if remainder is present in map return indicies
        unordered_map<int, int> my_map;
        vector<int> result{};
        {
            for(int i=0; i<nums.size(); i++)
            {
                int remainder = target - nums[i];

                if(my_map.find(remainder)!= my_map.end())
                {
                    result.push_back(my_map[remainder]);
                    result.push_back(i);
                    return result;
                }
                my_map[nums[i]]=i;
            }
        } 
        return result;
    }
};


int main()
{
    Solution S;
    vector<int> nums = {3,4,5,6};
    vector<int> res;
    int target = 7;
    res = S.twoSum(nums, target);
    cout << res[0] << " " << res[1] <<endl;

    return 0;
}