class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        long int left = 0, right = n - 1, result = 0;
        while(left != right){
            long int local_result = min(height[left], height[right]) * (right - left);
            result =  local_result > result ? local_result : result;
            if(height[left] > height[right])
                right--;
            else
                left++;
        }
        return result;
    }
};