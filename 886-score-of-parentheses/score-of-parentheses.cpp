class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.length();
        int ans=0;
        int dpth=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                dpth++;
            }
            else{
                dpth--;
                if(s[i-1]=='('){
                    ans+= pow(2,dpth);
                }
            }
        }
        return ans;
        
    }
};