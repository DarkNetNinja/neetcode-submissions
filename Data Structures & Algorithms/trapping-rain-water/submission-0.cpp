class Solution {
public:
    int trap(vector<int>& height) {
        int left{0};
        int right{static_cast<int>(height.size()) - 1};
        int leftMax{};
        int rightMax{};
        int water{};
        

        while(left < right)
        {
            if(height[left] < height[right])
            {
                if(leftMax < height[left])
                {
                leftMax = height[left];
                }
                else{
                    water += leftMax - height[left];
                }
                left++;
            }
            else
            {
                if(rightMax < height[right])
                {
                rightMax = height[right];
                }
                else{
                    water += rightMax - height[right];
                }
                right--;
            }
        

        } 
        return water;
    }  
};
