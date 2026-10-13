class Solution {
public:
     vector<vector<int>>res;
     void solve(vector<int>&a, int n , int i, int t , vector<int>&curr){
        if(t==0){
            res.push_back(curr);
            return ;
        }
        for(int j=i;j<n;j++ ){
            if(j>i && a[j]==a[j-1]){
                continue;
            }
            if (a[j] > t) {
                    break;
                }
        
            curr.push_back(a[j]);
            solve(a,n,j+1,t-a[j],curr);
            curr.pop_back();
        }

     }
    vector<vector<int>> combinationSum2(vector<int>& a, int t) {
        int n= a.size();
        sort(a.begin(),a.end());
        int i=0;
        vector<int>curr;
        solve(a,n,i,t,curr);
        return res;
        
        
        
    }
};