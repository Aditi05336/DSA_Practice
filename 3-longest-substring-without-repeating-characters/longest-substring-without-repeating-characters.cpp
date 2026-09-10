class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n==0){
            return 0;
        }
        map<int,int>mapp;
        int r=0;
        int l=0;
        int ans = INT_MIN;
        while(r<n){
            mapp[s[r]]++;
            while(mapp[s[r]]>1){
                mapp[s[l]]--;
                l++;
            }
            ans= max(ans,r-l+1);

            r++;

        }
        return ans;
        
    }
};