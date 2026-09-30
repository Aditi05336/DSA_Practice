class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        int n = s.length();
        int dpt=0;
        vector<int>ans;
        for(char c:s){
            if(c=='('){
                dpt++;
                if(dpt%2==0)
                    ans.push_back(1);
                else
                    ans.push_back(0);

            }
            else{
                if(dpt%2==0){
                    ans.push_back(1);
                }
                else
                    ans.push_back(0);
                dpt--;
            }
        }
        return ans;
        
    }
};