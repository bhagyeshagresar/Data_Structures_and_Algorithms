class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> mp;
        int n = nums.size();
        vector<vector<int>> bucket(n+1);

        for(auto& num: nums)
        {
            mp[num]++;
        }

        for(auto& it:mp)
        {
            bucket[it.second].push_back(it.first);
        }

        for(int i = n; i >= 0; i--)
        {
            if(result.size() >= k)
            {
                break;
            }

            if(!bucket[i].empty())
            {
                result.insert(result.end(), bucket[i].begin(), bucket[i].end());
            }
        }

        return result;
    
    }
};
