class KthLargest {
public:
    priority_queue<int,vector<int>, greater<int>>pq;
    int kth;
    KthLargest(int k, vector<int>& a) {
        int n = a.size();
        kth = k;
        for(int x:a){
            pq.push(x);
            if(pq.size()>kth){
                pq.pop();
            }
        }        
    }
    
    int add(int val) {
         pq.push(val);

        //priority_queue<int, vector<int>, greater<int>>temp=pq;
        int ans=0;
        if(pq.size()>kth){
            pq.pop();
        }

        return pq.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */