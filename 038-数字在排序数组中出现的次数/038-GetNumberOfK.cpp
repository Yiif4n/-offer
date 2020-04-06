class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        if(data.size()==0){
            return 0;
        }
        return bisect(data,k+0.5)-bisect(data,k-0.5);
    }
    int bisect(vector<int> data,float k){
        int left=0;
        int right=data.size()-1;
        while (left<=right){
            int mid=(left+right)/2;
            if(data[mid]<k){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return left;
    }
};
