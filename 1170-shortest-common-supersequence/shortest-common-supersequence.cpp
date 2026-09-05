class Solution {
public:
    string lcs(string &s1, string &s2, int n , int m ){
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));

        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }

        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]= 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        string temp="";

        int i=n, j=m;

        while(i>0 && j>0){
            if(s1[i-1]==s2[j-1]){
                temp.push_back(s1[i-1]);
                i--;
                j--;
            }
            else{
                if(dp[i][j-1]>dp[i-1][j]){
                    j--;
                }
                else{
                    i--;
                }
            }

        }
        reverse(temp.begin(),temp.end());

        return temp;
       

    }
    string shortestCommonSupersequence(string s1, string s2) {
        int n= s1.length();
        int m = s2.length();

        string ans = lcs(s1,s2,n,m);

       string res="";
       int i=0;
       int j=0;
       for(char c:ans){
            while(i<n && s1[i]!=c){
                res+=s1[i];
                i++;

            }
            while (j<m && s2[j]!=c){
                res+=s2[j];
                j++;
            }
            res+=c;
            i++;
            j++;

        
       }
       res+=s1.substr(i);
       res+=s2.substr(j);

       return res;

        
    }
};