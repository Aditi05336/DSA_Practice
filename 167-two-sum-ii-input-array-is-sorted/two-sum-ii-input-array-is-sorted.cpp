class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        int n = a.size();
        int i=0;
        int j=n-1;
       vector<int>ans{-1,-1};
       while(i<j){
        if(a[i]+a[j]>t){
            j--;
        }
       else  if(a[i]+a[j]<t){
            i++;
        }
        else{
            ans[0]=i+1;
            ans[1]=j+1;
            return ans;
        }
       }
       return ans;
        
    }
};