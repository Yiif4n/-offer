class Solution {
    vector<string> ans;
public:
    vector<string> Permutation(string str) {
        if(str.empty()){
            return ans;
        }
        permute(str,0);
        sort(ans.begin( ), ans.end( ));
        return ans;
    }
    void permute(string str,int begin){
        if(begin==str.size()){
            ans.push_back(str);
        }
        else{
            for(int i =begin;i<str.size();i++){
                if(!HasDuplicate(str,begin,i)){
                    swap(str[i],str[begin]);
                    permute(str,begin+1);
                    swap(str[i],str[begin]);
                }
            }
        }
    }
    bool HasDuplicate(string& str, int k, int i) const {
		for (int p = k; p < i; p++)
			if (str[p] == str[i]) return true;

		return false;
	}
};
