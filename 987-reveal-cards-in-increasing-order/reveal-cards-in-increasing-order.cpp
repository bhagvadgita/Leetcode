class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> q;
        for (int i = 0; i<deck.size(); i++){
            q.push(i);
        }
        sort(deck.begin(),deck.end());
        vector<int> ans(deck.size());
        for (int i = 0; i<deck.size(); i++){
            int temp = deck[i];
            int idx = q.front();
            q.pop();
            if (!q.empty()){
                q.push(q.front());
                q.pop();
            }
            ans[idx] = temp;
        }
        return ans;
    }
};