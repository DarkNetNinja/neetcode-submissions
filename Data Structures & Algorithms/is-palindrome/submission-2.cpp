class Solution {
public:
    bool isPalindrome(string s) {
        int start{};
        int end{static_cast<int>(s.size()) - 1};

        while(start < end)
        {
            while(start < end && !std::isalnum(s[start]))
            {
                start++;
            }
            while(end > start && !std::isalnum(s[end]) )
            {
                end--;
            }
            if(std::tolower(s[start])!= std::tolower(s[end]))
                return false;
            
            start++;
            end--;
        }
        return true;
        
        
    }
};
