class Solution {
public:
    bool isNStraightHand(vector<int>& a, int s) {
        int n = a.size();
        sort(a.begin(),a.end());

        if(n%s!=0){
            return false;
        }

        map<int,int>mapp;

        for(int x:a){
            mapp[x]++;
        }

        for(int i=0;i<n;i++){

            if(mapp[a[i]]==0){
                continue;
            }
            int freq= mapp[a[i]];

            for(int j=a[i];j<a[i]+s;j++){
                if(mapp[j]<freq){
                    return false;
                }
                mapp[j]-=freq;
            }
        }

        return true;

        
        
    }
};