class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n = a.size();
        int freq=n/2;
        map<int,int>mapp;
        for(int x:a){
            mapp[x]++;
        }
        for(auto it:mapp){
            if(it.second>freq){
                return it.first;
            }
        }
        return -1;
        
    }
};