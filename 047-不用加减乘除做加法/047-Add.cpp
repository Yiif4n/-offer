class Solution {
public:
    int Add(int left, int right)
    {
        int temp;
        while(right != 0)
        {
            temp = left ^ right;
            right = (left & right) <<1;
            left = temp;
        }

        return left;
    }
};
