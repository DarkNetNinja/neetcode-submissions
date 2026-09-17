class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;

        for(int i{0};i <= static_cast<int>(nums.size()) - 1;i++)
        {
            int current = nums[i];
            int needed = target - current;

            if(seen.find(needed) != seen.end())
            {
                return {seen[needed],i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};
