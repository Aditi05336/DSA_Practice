class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string>a;
        stringstream ss(s);
        string w;
        while(ss>>w){
            a.push_back(w);
        }
        for(int i=0;i<a.size();i++){
            reverse(a[i].begin(),a[i].end());
        }
        string temp="";
        for(int i=0;i<a.size();i++){
            temp+=a[i];
           

            if(i!=a.size()-1){
                 temp+=" ";
            }
        }
        return temp;
        
        
    }
};