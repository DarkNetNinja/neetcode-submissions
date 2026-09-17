class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start{0};
        int end{static_cast<int>(numbers.size())- 1};
        std::vector<int> final_vec {};
        int sum{};
        while (start < end)
        {
            sum = numbers[start] + numbers[end];
            if (sum < target)
            {
                start++;
            }
            else if( sum > target)
            {
                end--;
            }
            else
            {
                return { start + 1,end + 1};

            }

        }

        return final_vec;

    }
};
