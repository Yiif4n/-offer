class Solution {
public:
    string ReverseSentence(string str) {
        string result;
        while (str.rfind(" ") != -1)
        {
            unsigned long position = str.rfind(" ");
            string temp = str.substr(position + 1);
            result = result + temp + ' ';
            str = str.substr(0, position);
        }
        result = result + str;

        return result;
    }
};
