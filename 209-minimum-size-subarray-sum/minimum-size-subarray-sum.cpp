class Solution {
public:
    int minSubArrayLen(int t, vector<int>& a) {
        int n = a.size();
        int r=0;
        int l=0;
        int ans=INT_MAX;
        int sum=0;

        while(r<n){
            sum+=a[r];

            while(sum>=t){
                ans= min(ans,r-l+1);
                sum-=a[l];
                l++;
            }
            
            r++;

        }

        if(ans==INT_MAX)return 0;
        return ans;
        
    }
};