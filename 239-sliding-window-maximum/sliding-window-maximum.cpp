class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        int n = a.size();
        int left=0;
        int right=0;
        multiset<int>ans;
        vector<int>res;
        while(right<n){
           // ans.push_back(a[right]);
           ans.insert(a[right]);
            if(right-left+1==k){
               // int max_ele= *max_element(ans.begin(),ans.end());
                res.push_back(*ans.rbegin());
               // ans.pop_front();
               ans.erase(ans.find(a[left]));
                left++;
            }
            right++;
        }
        return res;
        
    }
};