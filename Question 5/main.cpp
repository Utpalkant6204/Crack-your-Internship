// Move zero to last

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
      
        int zero =0, i=0, j=0;
      
      while(i<n)
      {
        if(nums[i]==0)
        {
          zero++;
        }
        else{
          nums[j] = nums[i];
          j++;
        }
        i++;
      }
      
      while(j<n)
      {
        nums[j] = 0;
        j++;
      }
    }
};
