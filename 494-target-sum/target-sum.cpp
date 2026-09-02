class Solution {
public:
    int subset(vector<int>&a, int n , int t){
        vector<vector<int>>dp(n+1,vector<int>(t+1));
        dp[0][0]=1;
        for(int i=1;i<n+1;i++){
            for(int j=0;j<t+1;j++){
                if(i==0){
                    dp[i][j]=0;
                }
                if(j==0){
                    dp[i][j]=1;
                }
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<t+1;j++){
                if(a[i-1]<=j){
                    dp[i][j]= dp[i-1][j-a[i-1]]+dp[i-1][j];
                }
                else{
                    dp[i][j]= dp[i-1][j];
                }
            }
        }
        return dp[n][t];

    }
    int findTargetSumWays(vector<int>& a, int t) {
        int n = a.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        if(sum+t<0 || (sum+t)%2!=0){
            return 0;
        }
        int s1= (sum+t)/2;
        return subset(a,n,s1);
        
    }
};