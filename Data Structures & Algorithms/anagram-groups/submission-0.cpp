class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> groups;
        vector<vector<string>> answer;

        for(string str:strs)
        {
            string key = str;
            sort(key.begin(),key.end());

            groups[key].push_back(str);


        }
        for (auto group : groups)
        {
            answer.push_back(group.second);
        }
        return answer;
        
        
           
    }
};
