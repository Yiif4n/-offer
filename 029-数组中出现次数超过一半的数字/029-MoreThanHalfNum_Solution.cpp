class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        map<int,int> hmap;
        for(auto i :numbers){
            if(hmap.find(i)!=hmap.end()){
                hmap[i]+=1; 
            }
            else{
                hmap[i]=1;
            }
        }
        for(auto it=hmap.begin();it!=hmap.end();it++){
            if((it->second) > (numbers.size()/2)){
                return it->first;
            }
        }
        return 0;
    }
};
