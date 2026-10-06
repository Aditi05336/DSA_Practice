class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();
        int open =0;
        int ans=0;

        for(char c:s){
            if(c=='('){
                open++;
            }
            else if(c==')'){
                if(open>0){

                    open--;
                }
                else{
                    ans++;
                }
            }
        }
        return open+ans;
        
    }
};