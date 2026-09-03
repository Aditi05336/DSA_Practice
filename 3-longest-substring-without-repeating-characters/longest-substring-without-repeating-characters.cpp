class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n==0){
            return 0;
        }
        int right=0;
        int left=0;
        int ans = INT_MIN;
        unordered_map<char, int>mapp;
        while(right<n){
            mapp[s[right]]++;
            while(mapp[s[right]]>1){
                mapp[s[left]]--;
                left++;
            }
            ans = max(ans, right-left+1);

            right++;

        }
        return ans;
        
    }
};