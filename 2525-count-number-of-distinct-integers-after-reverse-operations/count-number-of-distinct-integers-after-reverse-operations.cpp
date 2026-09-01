class Solution {
public:
    int countDistinctIntegers(vector<int>& a) {
        int n =a.size();
        set<int>st(a.begin(),a.end());
        for(int i=0;i<n;i++){
            int num= a[i];
            int sum=0;
            while(num>0){
                int c= num%10;
                sum=sum*10+c;
                num = num/10;

            }
            st.insert(sum);

        }
        return st.size();
        
    }
};