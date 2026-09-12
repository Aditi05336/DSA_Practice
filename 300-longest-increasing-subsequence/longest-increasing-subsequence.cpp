class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n = a.size();
        vector<int>ans(n+1,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[j]<a[i]){
                    ans[i]=max(ans[i],ans[j]+1);
                }
            }
        }
        return *max_element(ans.begin(),ans.end());
        

        
    }
};