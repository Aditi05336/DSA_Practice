class Solution {
public:
    vector<string>res;

    map<string,priority_queue<string, vector<string>,greater<string>>>mapp;
    void dfs(string t){
        while(!mapp[t].empty()){
            string next= mapp[t].top();
            mapp[t].pop();
            dfs(next);
            

        }
        res.push_back(t);
    }
    vector<string> findItinerary(vector<vector<string>>& tc) {
        for(auto &it:tc){
          mapp[it[0]].push(it[1]);
        }
        dfs("JFK");
        reverse(res.begin(),res.end());
        return res;

        
    }
};