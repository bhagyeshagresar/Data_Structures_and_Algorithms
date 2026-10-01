class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        //Time complexity - O(n)
        //Space complexity - O(1)

        while(start < end)
        {
            // Move start forward until it hits an alphanumeric char
            while(!isalnum(s[start]) && start < end) {
                start++;
            }
            // Move end backward until it hits an alphanumeric char
            while(!isalnum(s[end]) && start < end) {
                end--;
            }
            
            // Now compare, but convert to lowercase first
            if(tolower(s[start]) != tolower(s[end])) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
