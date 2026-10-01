class Solution {
public:
    int change(int t, vector<int>& c) {
        int n =c.size();
        vector<vector<unsigned long long>>dp(n+1,vector<unsigned long long >(t+1,0));
        for(int i=0;i<n+1;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<t+1;j++){
                if(c[i-1]<=j){
                    dp[i][j]=dp[i-1][j]+dp[i][j-c[i-1]];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return (int)dp[n][t];
        
    }
};