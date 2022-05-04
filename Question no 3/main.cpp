//remove duplicates

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        //set<int>s;
      int p=1;
        for(int i=1;i<n;i++)
        {
         if(nums[i]!=nums[i-1])
         {
           nums[p] = nums[i];
           p++;
         }
        }
      //   int k = s.size();
      // //cout<<k;
      // nums.clear();
      // for(auto i:s)
      // {
      //   nums.push_back(i);
      // }
      return p;
    }
};
