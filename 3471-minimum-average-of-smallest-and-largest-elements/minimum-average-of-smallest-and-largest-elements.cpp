class Solution {
public:
    double minimumAverage(vector<int>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        double ans=INT_MAX;
        for(int i=0;i<n/2;i++){
            double  avg = (a[i]+a[n-i-1])/2.0;
            ans = min(ans,avg);
        }
        return ans;

        
    }
};