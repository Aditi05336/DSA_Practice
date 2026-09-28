class Solution {
public:
    int numOfSubarrays(vector<int>& a, int k, int t) {
        int n =a.size();
        int r=0;
        int l=0;
        int cnt=0;
        int sum=0;
        vector<int>ans;
        while(r<n){
           sum+=a[r];
            if(r-l+1==k){
                //int avg = sum/k;
                if(sum>=k*t){
                    cnt++;
                }
                sum-=a[l];
                l++;

            }
            r++;

        }
        return cnt;
    }
};