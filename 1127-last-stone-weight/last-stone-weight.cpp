class Solution {
public:
    int lastStoneWeight(vector<int>& a) {
        int n = a.size();
        if(n==1){
            return a[0];
        }
        priority_queue<int>q;
        for(int x:a){
            q.push(x);

        }
        
        while(!q.empty()){
            if(q.size()==1){
                return q.top();
            }
           int  y=q.top();
            q.pop();
           int  x=q.top();
            q.pop();
            if(x!=y){
                q.push(abs(y-x));
            }
            
        }
        return 0;
    }
};