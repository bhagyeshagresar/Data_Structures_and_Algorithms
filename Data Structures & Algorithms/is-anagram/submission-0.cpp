class Solution {
public:
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
        //if mp.empty -> return true
        //else return false


        
    }
};
