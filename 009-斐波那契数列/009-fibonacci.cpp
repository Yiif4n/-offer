class Solution {
public:
    int Fibonacci(int n) {
        if(n<=1){
            return n;
        }
        int a=0;
        int b=1;
        while(n>0){
            int temp=a;
            a=b;
            b=temp+b;
            n--;
        }
        return a;
    }
};
