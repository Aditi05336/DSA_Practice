class Solution {
public:
    int largestRectangleArea(vector<int>& ht) {
        int n = ht.size();
        vector<int>prev(n),next(n);
        stack<int>st;

        for(int i=0;i<n;i++){
            while(!st.empty() && ht[st.top()]>=ht[i]){
                st.pop();
            }
            if(st.empty())prev[i]=-1;
            else
                prev[i]=st.top();
            st.push(i);
        }

        while(!st.empty())st.pop();


        for(int i=n-1;i>=0;i--){
            while(!st.empty() && ht[st.top()]>=ht[i]){
                st.pop();
            }

            if(st.empty())next[i]=n;

            else
                next[i]=st.top();

            st.push(i);
        }

        int ans= INT_MIN;

        for(int i=0;i<n;i++){
            int w= (next[i]-prev[i]-1);
           int  area= ht[i]*w;
            ans= max(ans,area);
        }

        return ans;


        
    }
};