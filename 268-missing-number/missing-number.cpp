class Solution {
public:
    int missingNumber(vector<int>& a) {

        int n = a.size();
        /*int ans=n;
        for(int i=0;i<n;i++){
            ans = ans ^ i;
            ans = ans ^ a[i];
        }
        return ans;
        */

        int sum = n*(n+1)/2;
        int t_sum= 0;
        for(int i=0;i<n;i++){
            t_sum+=a[i];
        }
        return sum-t_sum;
    }
};