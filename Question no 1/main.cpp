/*
Find the Duplicate Number
Approach :
    - [1, 3, 4, 2, 2]
    - [3, 1, 4, 2, 2]
    - [2, 1, 4, 3, 2]
    - [4, 1, 2, 3, 2]
    - [2, 1, 2, 3, 4]
*/


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
      while(nums[0]!=nums[nums[0]]) // given range (1,n) always
      {
        swap(nums[0],nums[nums[0]]);
      }
      return nums[0];
    }
};
