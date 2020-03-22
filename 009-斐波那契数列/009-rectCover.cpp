class Solution {
public:
    int rectCover(int number) {
        if (number<=2){
            return number;
        }
        int a=1;
        int b=2;
        while(number>=3){
            int temp=a;
            a=b;
            b=temp+b;
            number--;
        }
        return b;
    }
};
