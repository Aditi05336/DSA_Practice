class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
       int n= a.size();
       unordered_map<int,int>mapp;
       for(int i=0;i<n;i++){
        int needed= t-a[i];
        if(mapp.find(needed)!=mapp.end()){
            return {mapp[needed],i};
        }
        mapp[a[i]]=i;
       }
       return {-1,-1};
        
    }
};