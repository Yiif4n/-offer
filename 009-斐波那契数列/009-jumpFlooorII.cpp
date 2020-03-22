class Solution {
public:
    int jumpFloorII(int number) {
        int ans=1;
        while(number>1){
            number--;
            ans=ans*2;
        }
        return ans;

    }
};
