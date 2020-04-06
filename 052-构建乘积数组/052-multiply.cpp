class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        vector<int> ans(A.size(),1);
        for(int i=1;i<A.size();i++){
            ans[i]=ans[i-1]*A[i-1];
        }
        int temp=1;
        for(int i=A.size()-1;i>=0;i--){
            ans[i]*=temp;
            temp*=A[i];
        }
        return ans;
    }
};
