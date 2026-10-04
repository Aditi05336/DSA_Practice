class Solution {
public:
    int ladderLength(string s, string e, vector<string>& dict) {
       auto it = find(dict.begin(),dict.end(),e);
       if(it==dict.end()){
            return 0;
       }
       unordered_set<string>st(dict.begin(),dict.end());
       queue<pair<string,int>>q;
       q.push({s,1});
       st.erase(s);

       while(!q.empty()){
        string wrd= q.front().first;
        int levl = q.front().second;
        if(wrd==e){
            return levl;
        }
        q.pop();
        for(int i=0;i<wrd.size();i++){
            char curr_wrd=wrd[i];
            for(char c='a';c<='z';c++){
                wrd[i]=c;

                if(st.find(wrd)!=st.end()){
                    st.erase(wrd);
                    q.push({wrd,levl+1});
                 }
            }
            wrd[i]=curr_wrd;


        }

       }
       return 0;


        
    }
};