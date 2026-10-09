class Solution {
public:
    double ans=1;
    double calculate(double x, long long  i){
        if(i==0){
            return ans;
        }
        if(i%2==1){
            ans*=x;
        }
        x=x*x;
        return calculate(x,i/2);

}
    double myPow(double x, int n) {
         ans = 1;
        long long i = n;
        if (n < 0) {
            i = -i;            // only flip the exponent, keep x as is
        }
        calculate(x, i);
        if (n < 0) {
            return 1.0 / ans;  // invert once at the end
        }
        return ans;
        
    }
};