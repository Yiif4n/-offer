class Solution {
public:
	void replaceSpace(char *str,int length) {
        int count=0;
        for(int i=0;i<length;i++){
            if (str[i]==' '){
                count++;
            }
        }
        int len=length+count*2;
        for (int i=length-1,j=len-1;i>=0&&j>=0;i--){
            if(str[i]==' '){
                str[j--]='0';
                str[j--]='2';
                str[j--]='%';
            }
            else{
                str[j--]=str[i];
            }
        }
        str[len]='0';
	}
};
