class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
       int n = a.size();
       map<int,int>mapp;
       for(int i=0;i<n;i++){
        int more_needed= t-a[i];
        if(mapp.find(more_needed)!=mapp.end()){
            return {mapp[more_needed],i};
        }
        mapp[a[i]]=i;
       }
       return {-1,-1};
        
    
        
    }
};