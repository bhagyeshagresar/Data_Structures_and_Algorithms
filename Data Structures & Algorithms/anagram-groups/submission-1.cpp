class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //Time complexity - O(m*nlogn) because of sorting
        //Space Complexity - O(m*n) if each string is unique and there are no anagrams
        // m - number of strings in strs
        // n - max length of a string
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mp;

        for(int i = 0; i < strs.size(); i++)
        {
            string key = strs[i];
            sort(key.begin(), key.end());
            mp[key].push_back(strs[i]);
        }

        for(auto& pair:mp)
        {
            result.push_back(pair.second);
        }
        return result;
    }
};
