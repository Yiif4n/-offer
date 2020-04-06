class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        if(numbers.size()<5){
            return false;
        }
        int max=INT_MIN;
        int min=INT_MAX;
        vector<int> map(14,0);
        for(auto val:numbers){
            if (val!=0){
                if (map[val]==1){
                    return false;
                }
                else{
                    map[val]=1;
                }
                max=max>val?max:val;
                min=min<val?min:val;
            }
        }
        if((max-min) >4){
            return false;
        }
        return true;
    }
};
