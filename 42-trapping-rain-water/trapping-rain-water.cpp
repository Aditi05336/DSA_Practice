class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
      /*  int i=0;
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
        */
        vector<int>leftmax(n);
        vector<int>rightmax(n);
        leftmax[0]=h[0];
        rightmax[n-1]=h[n-1];

        for(int i=1;i<n;i++){
            leftmax[i]= max(leftmax[i-1],h[i]);
        }
        for(int i=n-2;i>=0;i--){
            rightmax[i]= max(rightmax[i+1],h[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int ht= min(leftmax[i],rightmax[i]);
            if(ht-h[i]>=0){
                ans+=ht-h[i];
            }
        }
        return ans;
    }
};