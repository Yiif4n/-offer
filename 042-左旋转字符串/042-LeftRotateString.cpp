class Solution {
public:
    string LeftRotateString(string str, int n) {
        string ans(str.size(),'0');
        for(int i =0;i<str.size();i++){
            ans[i]=str[(i+n)%str.size()];
        }
        return ans;
    }
};
