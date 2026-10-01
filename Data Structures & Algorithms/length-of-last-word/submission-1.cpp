class Solution {
public:
    int lengthOfLastWord(string s) {
        //take the index of hte end of the string
        int index = s.size() - 1;
        int count = 0;
        while(s[index] == ' ')
        {
            index--;
        }

        while(index >= 0 && s[index] != ' ')
        {
            index--;
            count++;
        }

        return count;



    }
};