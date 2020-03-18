class Solution
{
public:
    void push(int node) {
        stack1.push(node);
        
    }

    int pop() {
        int top=-1;
        if(!stack2.empty()){
            top=stack2.top();
            stack2.pop();
            return top;
        }
        if(!stack1.empty()){
            while(!stack1.empty()){
                top=stack1.top();
                stack2.push(top);
                stack1.pop();
            }
            stack2.pop();
            return top;
        }

    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
