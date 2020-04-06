class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> ans;
        deque<int> dq;
        if(size==0){
            return ans;
        }
        for(int i =0;i<num.size();i++){
            if(i>=size && i-size==dq.front()){
                dq.pop_front();
            }
            while(!dq.empty() && num[dq.back()]<=num[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if (i>=size-1){
                ans.push_back(num[dq.front()]);
            }
        }
        return ans;
    }
};
