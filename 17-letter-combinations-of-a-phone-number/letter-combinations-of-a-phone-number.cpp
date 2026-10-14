class Solution {
public:
    vector<string>res;
   void solve(string &d, int n , int i, string&temp, unordered_map<char,string>&mapp){
    if(i==n){
        res.push_back(temp);
        return ;
    }
    char ch = d[i];
    string str = mapp[ch];

    for(int j=0;j<str.length();j++){
        temp.push_back(str[j]);
        solve(d,n,i+1,temp,mapp);
        temp.pop_back();
    }


    
   }
    
    vector<string> letterCombinations(string d) {
        int n = d.length();
        if(n==0){
            return {};
        }
        unordered_map<char,string>mapp;
        mapp['2']="abc";
        mapp['3']="def";
        mapp['4']="ghi";
        mapp['5']="jkl";
        mapp['6']="mno";
        mapp['7']="pqrs";
        mapp['8']="tuv";
        mapp['9']="wxyz";
        string temp="";
        solve(d,n,0,temp,mapp);
        return res;
        
       
    }
};