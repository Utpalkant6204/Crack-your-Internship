// Cholocate distribution problem


class Solution{
  public:
    long long findMinDiff(vector<long long>a, long long n, long long m)
    {
      sort(a.begin(),a.end());
    long long mini = INT_MAX;
   
    long long k=0, l = m-1;
    while(l<n)
    {
        mini = min(mini,a[l]-a[k]);
        k++;
        l++;
    }
    
    return mini;
    }
};
