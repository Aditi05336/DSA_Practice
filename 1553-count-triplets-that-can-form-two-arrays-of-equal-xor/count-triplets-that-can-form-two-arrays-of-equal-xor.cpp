class Solution {
public:
    int countTriplets(vector<int>& a) {
        int n = a.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int xr=0;
            for(int k=i;k<n;k++){
                xr^=a[k];

                if(xr==0){
                    ans+=(k-i);
                }
            }
        }
        return ans;
        
    }
};