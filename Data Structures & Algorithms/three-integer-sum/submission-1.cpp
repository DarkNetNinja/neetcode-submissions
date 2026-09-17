class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> arr{};
        sort(nums.begin(),nums.end());
        for (int i{0};i <= static_cast<int>(nums.size()) - 1;i++)
        {
            if(i >  0 && nums[i-1]  == nums[i])
                {
                    continue;
                }
            int left{i + 1};
            int right{static_cast<int>(nums.size()) - 1};
            while(left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum < 0)
                {
                    left++;
                }
                else if(sum > 0)
                {
                    right--;
                }
                else
                {
                    vector<int> triplets{nums[i],nums[left],nums[right]};
                    arr.push_back(triplets);
                    left++;
                    right--;
                    while(left < right && left > 0 && nums[left] == nums[left - 1])
                    {
                        left++;
                    }
                    while(left < right && right < static_cast<int>(nums.size()) - 1  && nums[right] == nums[right + 1])
                    {
                        right--;
                    }
                }
            }
        }
        return arr;
        
    }
};
