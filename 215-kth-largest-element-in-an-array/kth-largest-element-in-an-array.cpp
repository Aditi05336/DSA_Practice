class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        int n = a.size();
      /*  sort(a.begin(),a.end());
        return a[n-k];
        */
        priority_queue<int>q;
        for(int x:a){
            q.push(x);
        }
        int ans=-1;
        for(int i=0;i<k;i++){
            ans=q.top();
            q.pop();

        }
        
        return ans;
    }
};