class Solution {
public:
    int maxProfit(vector<int>& a) {
       int n = a.size();
       int min_e = a[0];
       int ans= 0;
       for(int i=1;i<n;i++){
             min_e= min(a[i],min_e);
             int p = a[i]-min_e;
             ans= max(ans,p);
        
       }
       return ans;
        
    }
};