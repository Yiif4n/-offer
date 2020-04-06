class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int> none;
        if (array.size()==0){
            return none;
        }
        vector<int> ans(2);
        bool tag=true;
        auto begin=array.begin();
        auto end=array.end();
        end--;
        while(begin<end){
            long long csum=(*begin)+(*end);
            if(csum==sum){
                if(tag||(ans[0]*ans[1]>(* begin) * (*end))){
                    ans[0]=*begin;
                    ans[1]=*end;
                    tag=false;
                }
                begin++;
            }
            else if (csum<sum){
                begin++;
            }
            else{
                end--;
            }
        }
        if (tag){
            return none;
        }
        return ans;
    }
};
