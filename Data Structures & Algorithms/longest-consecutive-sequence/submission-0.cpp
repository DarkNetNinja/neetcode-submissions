class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers;
        for(int i{0};i < nums.size();i++)
        {
            numbers.insert(nums[i]);
        }
        int longest{};
        for(int num:numbers)
        {
            if(numbers.find(num - 1) == numbers.end())
            {
                int current{num};
                int length{1};
                while(numbers.find(current + 1) != numbers.end())
                {
                    current++;
                    length++;
                }
                longest = max(longest,length);

        }
        
        
    }
    return longest;
    }
};

