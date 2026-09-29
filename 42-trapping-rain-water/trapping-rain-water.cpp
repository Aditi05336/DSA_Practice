class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        int i=0;
        int j=n-1;
        int lmax=0;
        int rmax=0;
        int ans=0;
        while(i<j){
            lmax= max(lmax,h[i]);
            rmax= max(rmax, h[j]);
            if(lmax<rmax){
                ans+= lmax-h[i];
                i++;
            }
            else{
                ans+= rmax-h[j];
                j--;

            }
        }
        return ans;
        
    }
};