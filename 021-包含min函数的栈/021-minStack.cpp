class Solution {
public:
    stack<int> stack1;
    int minmum=0;
    void push(int value) {
        if(stack1.empty()){
            minmum=value;
            stack1.push(0);
        }
        else{
            int diff=value-minmum;
            stack1.push(diff);
            minmum= diff<0?value:minmum;
        }
    }
    void pop() {
        int diff=stack1.top();
        stack1.pop();
        minmum=  diff<0?minmum-diff:minmum;
    }
    int top() {
        return stack1.top()+minmum;
    }
    int min() {
        return minmum;
    }
};
