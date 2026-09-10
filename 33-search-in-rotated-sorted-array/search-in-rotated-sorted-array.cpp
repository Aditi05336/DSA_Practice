class Solution {
public:
    int search(vector<int>& a, int t) {
       /* int n = a.size();
        int low = 0;
        int high = n - 1;
        
        while(low<=high){
            int mid= low+(high-low)/2;
            if(a[mid]==t){
                return mid;
            }
            if(a[low]<=a[mid]){
                if(a[low]<=t && t<=a[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(a[mid]<=t && t<=a[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
        */
        int n = a.size();
        int pos=-1;
        for(int i=0;i<n;i++){
            if(a[i]==t){
                pos=i;
                break;
            }
        }
        return pos;
    }
};
