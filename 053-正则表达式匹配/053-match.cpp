class Solution {
public:
    bool match(char* s, char* p)
    {
        if (*p == '\0')         //  正则p到底末尾时
        {
            return !(*s);       //  如果串s页到达末尾，则匹配成功
        }

        int slen = strlen(s), plen = strlen(p);

        if (plen == 1           //  如果正则串只有一个长度
        || *(p + 1) != '*')     //  如果匹配*
        {
            //
            return slen && (p[0] == '.' || *s == *p)
                && match(s + 1, p + 1);
        }
        else
        {
            //  匹配一个字符
            while (*s != '\0' && (*p == '.' || *s == *p))
            {
                if (match(s++, p + 2))
                {
                    return true;
                }
            }
        }

        //  匹配0个字符
        return match(s, p + 2);
    }
};
