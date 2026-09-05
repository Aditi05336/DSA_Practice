class Solution {
public:
    int solve(string s1, string s2, int n , int m ){
         vector<vector<int>>dp(n+1,vector<int>(m+1,0));
         for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i== 0 || j==0){
                    dp[i][j]= 0;
                }
            }
         }
         for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]= max(dp[i-1][j] , dp[i][j-1]);
                }
            }
         }

         return dp[n][m];


      
    }
    int longestCommonSubsequence(string s1, string s2) {
        
           int n = s1.length();
           int m = s2.length();

           //vector<vector<int>>dp(n+1,vector<int>(m+1,0));
           return solve(s1,s2,n,m);
        
       

        
    }
};