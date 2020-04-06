class Solution {
    int count[256];
public:
    int FirstNotRepeatingChar(string str) {
        if(str.length( ) == 0)
        {
            return -1;
        }
        unsigned int i;
        //  将计数器数组清0
        memset(count, '\0', sizeof(count));

        //  对字符串中出现的每个字符进行计数
        for(i = 0; i < str.length( ); i++)
        {
            count[(unsigned int)str[i]]++;
        }


        //  第一个只出现一次的字符
        for(i = 0; i < str.length( ); i++)
        {
            if(count[(unsigned int)str[i]] == 1)
            {
                return i;
            }
        }

        return -1;
    }
};
