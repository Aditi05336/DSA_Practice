class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n = a.size();
        long long sum=0;
        long long max_sum=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=a[i];
            max_sum= max(max_sum,sum);
            if(sum<0){
                sum=0;
            }
        }
        return max_sum;
    }
};