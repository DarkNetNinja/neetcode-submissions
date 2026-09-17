class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> count;

            if(s.size() != t.size())
            {
                return false;
            }
            for(char chars : s )
            {
                count[chars] += 1;
            }
            for(char chars: t)
            {
                count[chars] -= 1;
                if(count[chars] < 0)
                {
                    return false;
                }
            }
            return true;
    
    }
};
