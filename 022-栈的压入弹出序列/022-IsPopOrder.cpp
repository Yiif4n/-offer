class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if(pushV.size()!=popV.size()){
            return false;
        }
        stack<int> f;
        int idx=0;
        for(auto v:pushV){
            f.push(v);
            while(!f.empty() && f.top()==popV[idx]){
                f.pop();
                idx++;
            }
        }
        return f.empty();
    }
};
