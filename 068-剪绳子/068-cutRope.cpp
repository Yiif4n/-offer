class Solution {
public:
    int cutRope(int number) {
        if(number<=3){
            return number-1;
        }
        int q=number/3;
        int r=number%3;
        if(r==2){
            return pow(3,q)*2;
        }
        else if(r==1){
            return pow(3,q-1)*4;
        }
        else{
            return pow(3,q);
        }
        
    }
};
