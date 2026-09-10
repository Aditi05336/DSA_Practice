class Solution {
public:
    vector<int> dailyTemperatures(vector<int>&a) {
        int n = a.size();
        stack<pair<int,int>>st;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first<=a[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=0;
            }
            else{
                ans[i]= st.top().second-i;
            }
            st.push({a[i],i});
        }
        return ans;
        
    }
};