class Solution {
public:
    double Power(double base, int exponent) {
        if (exponent==0){
            return 1;
        }
        else if (exponent==1){
            return base;
        }
        int e=exponent;
        if (exponent<0){
            e=-e;
        }
        double ans=Power(base,e>>1);
        ans=ans*ans;
        if ((e & 1)==1)
        {
            ans*=base;
        }
        if (exponent>0){
            return ans;
        }
        else{
            return 1/ans;
        }
    }
};
