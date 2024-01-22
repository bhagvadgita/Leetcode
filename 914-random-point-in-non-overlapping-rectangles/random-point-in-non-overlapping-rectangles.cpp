class Solution {
public:
    vector<vector<int>> rects;
    vector<int> areas;
    int totalArea = 0;

    Solution(vector<vector<int>>& rects) {
        this->rects = rects;
        for (auto& rect : rects) {
            int area = (rect[2] - rect[0] + 1) * (rect[3] - rect[1] + 1);
            totalArea += area;
            areas.push_back(totalArea);
        }
    }
    
    vector<int> pick() {
        int rnd = rand() % totalArea;
        int idx = upper_bound(areas.begin(), areas.end(), rnd) - areas.begin();
        
        vector<int>& rect = rects[idx];
        int x = rand() % (rect[2] - rect[0] + 1) + rect[0];
        int y = rand() % (rect[3] - rect[1] + 1) + rect[1];
        return {x, y};
    }
};


/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(rects);
 * vector<int> param_1 = obj->pick();
 */