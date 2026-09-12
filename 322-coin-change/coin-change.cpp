class Solution {
public:
    int coinChange(vector<int>& a, int t) {
       /* int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,1e9));
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<=sum;j++){
            dp[0][j]=1e9;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(coins[i-1]<=j){
                    dp[i][j]= min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]= dp[i-1][j];
                }
            }
        }
        if(dp[n][sum]==1e9){
            return -1;
        }
        return dp[n][sum];
        */
        int n = a.size();
        vector<vector<int>>dp(n+1,vector<int>(t+1,1e9));

        for(int i=0;i<n+1;i++){
            dp[i][0]=0;
        }

        for(int j=0;j<t+1;j++){
            dp[0][j]=1e9;
        }

        for(int i=1;i<n+1;i++){
            for(int j=1;j<t+1;j++){
                if(a[i-1]<=j){
                    dp[i][j]=min(1+dp[i][j-a[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        if(dp[n][t]==1e9){
            return -1;
        }
        return dp[n][t];
    }
};