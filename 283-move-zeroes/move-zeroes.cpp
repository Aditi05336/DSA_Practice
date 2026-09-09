class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n = a.size();
        vector<int>b;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                continue;
            }
            b.push_back(a[i]);

        }
        a.erase(a.begin(),a.end());
        for(int i=0;i<b.size();i++){
            a.push_back(b[i]);
        }
        for(int i=b.size();i<n;i++){
            a.push_back(0);
        }
       
        
    }
};