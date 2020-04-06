class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        if(n<=0){
            return 0;
        }
        int op=1;
        int count=0;
        while(n/op){
            int cur=n%(op*10)/op;
            int high=n/(op*10);
            int low=n%op;
            if(cur==1){
                count+=high*op+low+1;
            }
            else if (cur==0){
                count+=high*op;
            }
            else if(cur>1){
                count+=(high+1)*op;
            }
            op*=10;
        }
        return count;
    }
};
