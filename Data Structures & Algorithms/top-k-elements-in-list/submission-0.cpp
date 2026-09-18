class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;


        for(int i{0};i < nums.size();i++)
        {
            
            count[nums[i]] += 1;
        }
        vector<pair<int,int>> frequencies;
        for(auto element : count)
        {
            frequencies.push_back({element.first,element.second});
        }
        sort(frequencies.begin(),frequencies.end(),
        [](pair<int,int> a,pair<int,int>b)
        {
            return a.second > b.second;
        });

        vector<int> answer;
        for(int i{0}; i < k;i++)
        {
            answer.push_back(frequencies[i].first);
        }
        return answer;
    }
};
