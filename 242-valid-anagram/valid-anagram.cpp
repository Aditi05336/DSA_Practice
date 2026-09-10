class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        if(n!=m){
            return false;
        }
        map<char,int>mapp1;
        map<char,int>mapp2;
        for(char c:s){
            mapp1[c]++;
        }

        for(char c:t){
            mapp2[c]++;
        }

        for(auto it:mapp1){
            if(it.second!=mapp2[it.first]){
                return false;
            }
        }
        return true;

        
    }
};