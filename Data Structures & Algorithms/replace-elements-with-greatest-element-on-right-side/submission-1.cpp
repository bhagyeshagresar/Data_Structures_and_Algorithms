class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        //vector<int> ans(n);
        int rightmax = -1;
        for(int i = n - 1; i >= 0; i--)
        {
            int temp = arr[i];
            arr[i] = rightmax;
            rightmax = max(rightmax, temp);
        }
        return arr;
    }
};