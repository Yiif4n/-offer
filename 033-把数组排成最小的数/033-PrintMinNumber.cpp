template<class T>
string ToString(const T& t)
{

    ostringstream oss;  //  创建一个流

    oss <<t;            //  把值传递如流中
    return oss.str( );  //  获取转换后的字符转并将其写入result
}
class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        string res = "";
        string str;

        vector<string> strNum;

        ///  将整数转换成字符串
        for(unsigned int i = 0; i < numbers.size( ); i++)
        {
            str = ToString(numbers[i]);
            strNum.push_back(str);
        }
         ///  对字符串按照拼接后的大小进行排序
        sort(strNum.begin( ), strNum.end( ), Compare);

        ///  拼接结果
        for(unsigned int i = 0; i < strNum.size( ); i++)
        {
            res += strNum[i];
        }
        return res;
    }
    static bool Compare(const string &left, const string &right)
    {
        string leftright = left + right;
        string rightleft = right + left;
        return leftright < rightleft;
    }
};
