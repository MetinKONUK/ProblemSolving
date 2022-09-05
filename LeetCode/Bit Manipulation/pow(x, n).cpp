class Solution {
public:
    double myPow(double a, long int b) {
        if(a == 0) return 0;
        if(a == 1 || b == 0) return 1;
        bool flag = b < 0 ? true : false;
        b = abs(b);
        long double ans = 1;
        while(b != 0){
            if((b & 1)){
                ans *= a;
            }
            a *= a;
            b >>= 1;
        }
        return flag ? 1/ans : ans;
    }
};
