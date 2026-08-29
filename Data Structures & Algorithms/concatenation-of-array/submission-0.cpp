class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;

        for(int i = 0; i < nums.size(); i++)
        {
            result.push_back(nums[i]);
        }

        int i = 0;
        for(int j = nums.size(); j < (2*nums.size()); j++)
        {
            result.push_back(nums[i]);
            i++;
        }
        return result;

    }
};