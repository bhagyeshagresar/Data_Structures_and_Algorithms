class Solution {
public:
    void reverseWords(vector<char>& s) {

        //reverse the entire string
        reverse(s.begin(), s.end());

        int start = 0;
        int end = 0;
        int n = s.size();

        while(start < n)
        {   
            //keep incrementing end until a space is reached
            while(end < n && s[end]!= ' ')
            {
                end++;
            }

            reverse(s.begin() + start, s.begin() + end);

            //move to the next word
            end++;
            start = end;

        }
        
    }
};
