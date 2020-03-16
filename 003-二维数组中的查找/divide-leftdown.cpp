class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int h=array.size();
        int w=array[0].size();
        int i=h-1;
        int j=0;
        while(i>=0 && j<=w-1)
        {
            if(array[i][j]==target){
                return true;
            }
            else if (array[i][j]<target){
                j++;
            }
            else{
                i--;
            }
        }
        return false;
    }
};
