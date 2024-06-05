class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int minCount = INT_MAX;
            for (int i = 0; i < words.size(); i++) {
                string str = words[i];
                int count = 0;
                for (char c : str) {
                    if (c == ch) {
                        count++;
                    }
                }
                minCount = min(minCount, count);
            }
            for (int i = 0; i < minCount; i++) {
                string an = "";
                an+=ch;
                ans.push_back(an);
            }
        }
        return ans;
    }
};