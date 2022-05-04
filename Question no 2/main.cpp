// sort the color

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
      int red =0, black =0, blue =0;
      
      for(int i=0;i<n;i++)
      {
        if(nums[i]==0)
        {
          red++;
        }
        else if(nums[i]==1)
        {
          black++;
        }
        else{
          blue=0;
        }
      }
      for(int i=0;i<n;i++)
      {
        if(red!=0)
        {
          nums[i] = 0;
          red--;
          continue;
        }
        else if(red==0 && black!=0)
        {
          nums[i] = 1;
          black--;
          continue;
        }
        else{
          nums[i] = 2;
        }
      }

    }
};
