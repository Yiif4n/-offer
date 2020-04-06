class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if(sequence.size()==0){
            return false;
        }
        return verify(sequence,0,sequence.size()-1);
    }
    bool verify(vector<int> &sequence,int start,int end) {
        if(start>=end){
            return true;
        }
        int idx=-1;
        for(int i=start;i<end;i++){
            if(sequence[i]>sequence[end])
            {
                idx=i;
                break;
            }
        }
        if(idx==-1){
            return true;
        }
        for(int i=idx;i<end;i++){
            if(sequence[i]<sequence[end]){
                return false;
            }
        }
        return verify(sequence,start,idx-1) && verify(sequence,idx,end-1);
        
    }
};
