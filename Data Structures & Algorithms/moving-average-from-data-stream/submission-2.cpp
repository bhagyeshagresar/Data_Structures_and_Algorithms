class MovingAverage {
public:
    std::queue<int> q;
    int maxSize = 0;
    double sum = 0;
    MovingAverage(int size) {
        maxSize = size;        
    }
    
    double next(int val) {
        sum += val;
        q.push(val);
        if(q.size() > maxSize)
        {
            int old = q.front();
            q.pop();
            sum -= old;
        }
        
        return sum/q.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
