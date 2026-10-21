/*class Solution {
public:
    void permutation(vector<int>&a, vector<vector<int>>&ans, int i){
        if(i==a.size()){
            ans.push_back(a);
            return ;
        }
        for(int j= i;j<a.size();j++){
            swap(a[i],a[j]);
            permutation(a,ans,i+1);
            swap(a[j],a[i]);
        }
       




    }

    vector<vector<int>> permute(vector<int>& a) {
        int n = a.size();
        vector<vector<int>>ans;
        permutation(a,ans,0);
        return ans;
          
        
    }
};
*/
class Solution {
public:
    vector<vector<int>>res;
    void solve(vector<int>&a,int n ,int idx, vector<int>&curr,vector<int>&vis){
        if(curr.size()==n){
            res.push_back(curr);
            return ;
        }
        for(int i=0;i<n;i++){
            if(vis[i]==1){
                continue;
            }
            curr.push_back(a[i]);
            vis[i]=1;
            solve(a,n,i+1,curr,vis);
            curr.pop_back();
            vis[i]=0;

        }

       



    }

    vector<vector<int>> permute(vector<int>& a) {
        int n = a.size();
        vector<int>curr;
        int idx=0;
        vector<int>vis(n,0);
        solve(a,n,idx,curr,vis);
        return res;
       
          
        
    }
};