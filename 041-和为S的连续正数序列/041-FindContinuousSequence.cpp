class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int>> ans;
        if(sum<3){
            return ans;
        }
        int small=1;
        int big=2;
        int mid=(1+sum)/2;
        int csum=small+big;
        while (small<mid){
            if(csum==sum){
                vector<int> temp;
                for(int i=small;i<=big;i++)
                {
                    temp.push_back(i);
                }
                ans.push_back(temp);
                big++;
                csum+=big;
            }
            else if(csum<sum){
                big++;
                csum+=big;
            }
            else{
                csum-=small;
                small++;
            }
        }
        return ans;
    }
};
