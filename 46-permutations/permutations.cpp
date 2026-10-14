class Solution {
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