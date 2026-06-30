#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
    int arr_size = nums.size()-1;
    int left = 0;
    int right = arr_size;
    while(left<=right)
    {
        int mid = left + (right - left)/2;
        if(nums[mid] == target)
        {
            return mid;
        }
        // If the target is less than the middle element, search in the left half
        else if(nums[mid] > target)
        {
            right = mid -1;
        }
        // If the target is greater than the middle element, search in the right half
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    cout << search(nums, target);
    return 0;
}