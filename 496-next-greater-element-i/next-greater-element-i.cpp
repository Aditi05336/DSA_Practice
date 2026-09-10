class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
       int n1,n2;
       n1=a.size();
       n2=b.size();
       map<int,int>mapp;
       stack<int>st;
       for(int i=n2-1;i>=0;i--){
        while(!st.empty() && b[i]>st.top()){
            st.pop();
        
        }
        if(st.empty()){
            mapp[b[i]]=-1;
        }
        else{
            mapp[b[i]]=st.top();
        }
        st.push(b[i]);
       }

       vector<int>ans;

       for(int x:a){
            ans.push_back(mapp[x]);
       }
       return ans;
        
    }
};