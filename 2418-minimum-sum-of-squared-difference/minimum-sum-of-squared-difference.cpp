class Solution {
public:
    long long minSumSquareDiff(vector<int>& a, vector<int>& b, int k1, int k2) {
        int n = a.size();
        long long  k = (long long)k1+k2;
         int maxDiff = 0;

        for (int i = 0; i < n; i++) {
            maxDiff = max(maxDiff, abs(a[i] - b[i]));
        }


        vector<int>countdiff(maxDiff+1,0);
        for(int i=0;i<n;i++){
            int d= abs(a[i]-b[i]);
            countdiff[d]++;
        }
        for(int diff= maxDiff;diff>0 && k>0; diff--){
            int countops= min((long long)countdiff[diff],k);
            countdiff[diff]-=countops;
            countdiff[diff-1]+=countops;
            k-=countops;
        }
        long long res=0;

        for(int d=0;d<=maxDiff;d++){
            res+=(1LL*d*d*countdiff[d]);
        }
        return res;
        
    }
};