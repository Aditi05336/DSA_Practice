class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        vector<int>ans(a.begin(),a.end());
        ans.insert(ans.end(),b.begin(),b.end());
        sort(ans.begin(),ans.end());
       int size= n+m;
        double res=0;
        if(size%2==0){
            //even
            int mid= size/2; 
            res= (ans[mid-1]+ans[mid])/2.0;
        }
        else{
            //odd
            int mid=size/2;
            res= ans[mid];

            
        }
        return res;

        
    }
};