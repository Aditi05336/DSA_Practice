class Solution {
public:
     void  solve(vector<int>&a, int i, vector<int>&temp,  vector<vector<int>>&ans){
        if(i==a.size()){
            ans.push_back(temp);
            return ;
        }
        temp.push_back(a[i]);
        solve(a,i+1,temp,ans);
        temp.pop_back();
        solve(a,i+1,temp,ans);

       

     }

    vector<vector<int>> subsets(vector<int>& a) {
        int n = a.size();
        vector<vector<int>>ans;
        vector<int>temp;
        solve(a,0,temp,ans);
        return ans;

       
        
    }
};