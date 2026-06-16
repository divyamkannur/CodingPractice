/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;

    // sort the input array
    sort(nums.begin(), nums.end());

    for(int i=0; i<nums.size(); i++)
    {
        //skip the duplicate values
        if((i>0) && (nums[i] == nums[i-1])) continue;

        // to skip duplicates we have to start left from i+1
        int left = i+1;
        int right = nums.size()-1;

        while(left < right)
        {
            //calculate three sum
            int threesum = nums[i] + nums[left] + nums[right];

            if(threesum < 0)
            {
                //threesum is less than 0, shift left ptr
                left++;
            }
            else if(threesum > 0)
            {
                //threesum is right than 0, shift right ptr
                right--;
            }
            else
            {
                //threesum is 0, push the 3 values into result vector
                result.push_back({nums[i], nums[left], nums[right]});
                //move the pointers
                left++;
                right--;
                //skip duplicates on left
                while((left<right) && (nums[left] == nums[left-1])) left++;
                //skip duplicates on right
                while((left<right) && (nums[right] == nums[right+1])) right--;
            }
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = threeSum(nums);
    for(auto vec: result)
    {
        for(auto elem:vec)
        {
            cout << elem << endl;
        }
    }
    return 0;
}