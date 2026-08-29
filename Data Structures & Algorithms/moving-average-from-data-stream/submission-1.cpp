class MovingAverage {
public:
    std::queue<int> q;
    int sum = 0;
    int maxSize = 0;
    MovingAverage(int size) {
         maxSize = size;
    }
    
    double next(int val) {
        sum += val;
        q.push(val);
        if(q.size() > maxSize)
        {
            int rem = q.front();
            q.pop();
            sum -= rem;
        }
        return (double)sum / q.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
