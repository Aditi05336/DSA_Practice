class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        queue<int>q;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            q.push(i);

        }
        int i=0;
        while(!q.empty()){
            int pos= q.front();
            q.pop();
            ans[pos]= a[i];
            i++;

            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};