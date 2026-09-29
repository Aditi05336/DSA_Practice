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
    vector<double> medianSlidingWindow(vector<int>& a, int k) {
        int n = a.size();
        vector<double> res;

        multiset<int> window(a.begin(), a.begin() + k);
        auto mid = next(window.begin(), k / 2);   // upper median

        for (int i = k; ; i++) {
            // median of current window
            if (k % 2) res.push_back(*mid);
            else res.push_back(((double)*mid + (double)*prev(mid)) / 2.0);

            if (i == n) break;

            // add new element
            window.insert(a[i]);
            if (a[i] < *mid) mid--;

            // remove old element (a[i-k])
            if (a[i - k] <= *mid) mid++;
            window.erase(window.lower_bound(a[i - k]));
        }
        return res;
    }
};