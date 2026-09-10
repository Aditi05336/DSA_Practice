class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
        int n=a.size();
        int l=0;
        int h=n-1;
        int ans=n;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(a[mid]>=t){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }

            
        }
        return ans;
        
    }
};