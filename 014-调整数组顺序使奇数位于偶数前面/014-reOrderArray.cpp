class Solution {
public:
    void reOrderArray(vector<int> &array) {
        for(int i=0;i<array.size();i++){
            bool tag=false;
            for(int j=0;j<array.size()-i-1;j++){
                if (array[j]%2==0 && array[j+1]%2==1){
                    swap(array[j],array[j+1]);
                    tag=true;
                }
            }
            if (!tag){
                break;
            }
        }
    }
};
