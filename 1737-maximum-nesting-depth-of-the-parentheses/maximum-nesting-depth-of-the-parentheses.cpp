class Solution {
public:
    int maxDepth(string s) {
        int dpt=0;
        int ans=0;
        for(char c:s){
            if(c=='('){
                dpt++;
                ans= max(ans,dpt);
            }
            else if(c==')'){
                dpt--;
            }

        }

        return ans;
        
    }
};