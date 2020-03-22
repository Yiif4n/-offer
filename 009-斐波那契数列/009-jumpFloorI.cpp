class Solution {
public:
    int jumpFloor(int number) {
        if (number<=2){
            return number;
        }
        int a =1;
        int b=1;
        while(number>0){
            int temp=a;
            a=b;
            b=temp+b;
            number--;
        }
        return a;
       
    }
};
