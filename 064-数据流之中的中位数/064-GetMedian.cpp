class Solution {
    priority_queue<int> lo;                              // max heap
    priority_queue<int, vector<int>, greater<int>> hi;   // min heap
public:
    void Insert(int num)
    {
        lo.push(num);                                    // Add to max heap
        hi.push(lo.top());                               // balancing step
        lo.pop();
        if (lo.size() < hi.size()) {                     // maintain size property
            lo.push(hi.top());
            hi.pop();
        }
    }

    double GetMedian()
    { 
        return lo.size() > hi.size() ? lo.top() : ((double) lo.top() + hi.top()) * 0.5;
    }

};
