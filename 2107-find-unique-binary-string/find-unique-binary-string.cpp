class Solution {
public:
    string findDifferentBinaryString(vector<string>& a) {
        int n = a.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(a[i][i]=='1'){
                ans+='0';
            }
            else{
                ans+='1';
            }
        }
        return ans;
    }
};