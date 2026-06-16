/******************************************************************************
Given an integer array nums and an integer k, return the k most frequent elements within the array.
The test cases are generated such that the answer is always unique.
You may return the output in any order.

Example 1:

Input: nums = [1,2,2,3,3,3], k = 2

Output: [2,3]

*******************************************************************************/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
        //iterate through the array
        map<int, int> my_map;
        for(auto elem : nums)
        {
            // use hash map to store the frequency of occurance
            my_map[elem]++;
        }

        vector<int> result;
        map<int, vector<int>> new_map;
        for(auto it : my_map)
        {
            int number = it.first;
            int freq = it.second;
            new_map[freq].push_back(number);
        }
        for(auto it = new_map.rbegin(); it!=new_map.rend(); ++it)
        {
            for(int val:it->second)
            {
                result.push_back(val);   
            }
            if(result.size()==k)
                return result;
        }
    return {};
}
    
int main()
{
    vector<int> nums={7,7};
    int k=1;
    vector<int> res;
    res= topKFrequent(nums,k);
    for (auto elem : res)
        std::cout<< elem << endl;

    return 0;
}