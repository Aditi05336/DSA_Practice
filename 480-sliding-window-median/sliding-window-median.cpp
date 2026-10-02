/*class Solution {
public:
    double find_median( multiset<int>&ans){
        int m = ans.size();
        sort(ans.begin(),ans.end());
        double r=0;
        if(m%2==0){
            int mid= m/2;
             r= ((double)ans[mid-1]+ans[mid])/2.0;
        }
        else{
            int mid= m/2;
            r= ans[mid];
        }

        return r;
        
    }
    
    vector<double> medianSlidingWindow(vector<int>& a, int k) {
        int n = a.size();
        vector<double>res;
        int r=0;
        int l=0;
        vector<int>ans;
         //multiset<int> ans;
        while(r<n){
            ans.push_back(a[r]);
           //ans.insert(a[r]);
            if(r-l+1==k){
                double  median = find_median(ans);
                res.push_back(median);
                ans.erase(find(ans.begin(),ans.end(),a[l]));
              // ans.erase(ans.find(a[l]));
                
                l++;

            }
            r++;
        }
        return res;

        
    }
};
*/

class Solution {
public:
    double find_median(vector<int>& ans) {
        int m = ans.size();
        if (m % 2 == 0) {
            int mid = m / 2;
            return ((double)ans[mid - 1] + ans[mid]) / 2.0;
        }
        return ans[m / 2];
    }

    double find_medain(multiset<int>&st){
        int m = st.size();
        auto mid= next(st.begin(),m/2);
        if(m%2==0){
            return ((double) *prev(mid)+*mid)/2.0;
        }
        return *mid;
    }
    vector<double> medianSlidingWindow(vector<int>& a, int k) {
        int n = a.size();
        vector<double> res;
        int r = 0, l = 0;
        vector<int> ans;   // always kept sorted

        while (r < n) {
            // insert a[r] at its sorted place
            ans.insert(lower_bound(ans.begin(), ans.end(), a[r]), a[r]);

            if (r - l + 1 == k) {
                res.push_back(find_median(ans));
                // erase a[l] from sorted place
                ans.erase(lower_bound(ans.begin(), ans.end(), a[l]));
                l++;
            }
            r++;
        }
        return res;
        
    }
};