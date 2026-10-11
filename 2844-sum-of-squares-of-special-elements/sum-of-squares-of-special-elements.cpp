class Solution {
public:
    int sumOfSquares(vector<int>& a) {
        int n = a.size();
       int  res=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                res+=a[i-1]*a[i-1];
            }
        }
        return res;
        
    }
};