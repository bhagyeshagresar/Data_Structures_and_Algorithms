class Solution {
public:
    //Time Complexity - O(n)
    //Space Complexity - O(n)

    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        if(s.size() != t.size())
        {
            return false;
        }

        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }

        for(auto it:mp)
        {
            if(it.second)
            {
                return false;
            }
        }
        return true;
    }
};
