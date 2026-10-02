class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        int n = a.size();
        map<int,int>mapp;
        for(int x:a){
            mapp[x]++;
        }
       /* vector<pair<int,int>>v;
        for(auto it:mapp){
            v.push_back({it.second,it.first});
        }
        sort(v.rbegin(),v.rend());
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(v[i].second);
        }
        return res;
        
        vector<pair<int,int>>v;
        for(auto it:mapp){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(v[i].second);

        }
        return res;

        */

        priority_queue<pair<int,int>>q;

        for(auto it:mapp){
            q.push({it.second,it.first});
        }
        vector<int>res;

        for(int i=0;i<k;i++){
            res.push_back(q.top().second);
            q.pop();
        }
        return res;



        
    }
};