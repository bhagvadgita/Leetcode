class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int maxi = INT_MIN;
        while (i<j){
            int mini = min(height[i],height[j]);
            int diff = mini*(j-i);
            maxi = max(diff,maxi);
            if (height[i]<height[j]) i++;
            else j--;
        }
        return maxi;
    }
};