class Solution {
public:
    int maxArea(vector<int>& height) {
        int b = height.size()-1;
        int i = 0;
        int j = b;
        int ans = 0;
        while (i<j){
            int water = min(height[i],height[j]) * b;
            ans = max(ans,water);
            b-=1;
            if (height[i]>height[j]) j--;
            else i++;
        }
        return ans;
    }
};