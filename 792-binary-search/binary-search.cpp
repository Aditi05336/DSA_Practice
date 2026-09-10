class Solution {
public:
    int bs(vector<int>&a, int low, int high, int target){
        if(low>high){
            return -1;
        }
        int mid= low+(high-low)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid]>target){
            return bs(a,low,mid-1,target);
        }
        else{
            return bs(a,mid+1,high,target);
        }
        
    }
    int search(vector<int>&a, int target) {
        int  n = a.size();
        int low=0;
        int high = n-1;
        return bs(a,low,high,target);
        
    }
};