class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left{0};
        int right{static_cast<int>(heights.size()) - 1};
        int max_water{};

        while(left < right)
        {
            int width{right - left};
            int height(min(heights[right],heights[left]));
            int water = width * height;
            if (water > max_water)
            {
                max_water = water;
            }
            if(heights[left] < heights[right])
            {
                left++;
            }
            else{
                right--;
            }

        }
        return max_water;
    }
};
