class Solution {
public:
vector<vector<int>>res;
void solve(int i, int t, vector<int>&curr, int k){
    if(curr.size()==k && t==0){
        res.push_back(curr);
        return ;
    }
    if(i>9 || curr.size()>k){
        return ;
    }

        for(int j=i;j<=9;j++){
            if(j>t){
                break;
            }
            curr.push_back(j);
            solve(j+1,t-j,curr,k);
            curr.pop_back();

        }
        
    }

    vector<vector<int>> combinationSum3(int k, int t) {
        int i=1;
        vector<int>curr;
        solve(i,t,curr,k);
        return res;

        
    }
};