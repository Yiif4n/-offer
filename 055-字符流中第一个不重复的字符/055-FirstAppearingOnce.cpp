class Solution
{
    string str = "";
    int count[256];
public:
    void Insert(char ch)
    {
        str += ch;
        count[(int)ch]++;
    }

    char FirstAppearingOnce()
    {
        int len = str.size( );
        for(int i = 0; i < len; i++)
        {
            if(count[(int)str[i]] == 1)
            {
                return str[i];
            }
        }
        return '#';
    }

};
