class Solution {
public:
    int StrToInt(string str) {
        string::iterator pstr = str.begin( );
        while (*pstr == ' ')
        {
            pstr++;
        }
        bool minus = false;
        if (*pstr == '+')
        {
            pstr++;
        }
        else if (*pstr == '-')
        {
            pstr++;
            minus = true;
        }

        long long int value = 0;
        for (; pstr != str.end( ); pstr++)
        {
            if ('0' <= *pstr && *pstr <= '9')
            {
                value *= 10;
                value += *pstr - '0';
            }
            else
            {
                break;
            }
            if((minus == true  && value > (unsigned long)(INT_MAX) + 1)
            || (minus == false && value > INT_MAX))
            {
                break;
            }

        }
        if(pstr != str.end( ))
        {
            return 0;
        }
        else
        {

            if (minus == true)
            {
                value = -value;
            }

            if (value >= INT_MAX)
            {
                value = INT_MAX;
            }
            else if (value <= INT_MIN)
            {
                value = INT_MIN;
            }

            return (int)value;

        }
    }
};
