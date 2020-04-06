class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> ans;
        if(matrix.size()==0){
            return ans;
        }
        int up=-1;
        int down=matrix.size();
        int left=-1;
        int right=matrix[0].size();
        int direction=1;
        int i=0;
        int j=0;
        int size=down*right;
        for(int n =0;n<size;n++){
            ans.push_back(matrix[i][j]);
            if (direction==1 && j<right){
                j++;
                if (j==right){
                    j--;
                    i++;
                    direction=2;
                    up++;
                }
                continue;
            }
            if (direction==2 && i<down){
                i++;
                if (i==down){
                    i--;
                    j--;
                    direction=3;
                    right--;
                }
                continue;
            }
            if (direction==3 && j>left){
                j--;
                if (j==left){
                    j++;
                    i--;
                    direction=4;
                    down--;
                }
                continue;
            }
            if (direction==4 && i>up){
                i--;
                if (i==up){
                    i++;
                    j++;
                    direction=1;
                    left++;
                }
                continue;
            }
        }
        return ans;
    }
};
