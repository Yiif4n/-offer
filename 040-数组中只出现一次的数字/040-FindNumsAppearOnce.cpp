class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        int sum=0;
        for(auto val:data){
            sum^=val;
        }
        int idx=0;
        while ((sum&1)!=1){
            sum>>=1;
            idx++;
        }
        *num1=0;
        *num2=0;
        for(auto val:data){
            auto temp=val>>idx;
            if(temp&1==1){
                *num1^=val;
            }
            else{
                *num2^=val;
            }
        }
    }
};
