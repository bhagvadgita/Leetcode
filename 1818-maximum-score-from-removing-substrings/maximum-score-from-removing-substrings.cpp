class Solution {
public:

    int pairs(string& s, char first, char second, int score){
        int ans = 0;
        string temp;
        for (char c: s){
            if (!temp.empty() && temp.back()==first && c==second){
                temp.pop_back();
                ans+= score;
            }
            else{
                temp+=c;
            }
        }
        s = temp;
        return ans;
    }

    int maximumGain(string s, int x, int y) {
        char first = 'a';
        char second = 'b';
        int first_score = x;
        int second_score = y;
        if (x<y){
            swap(first,second);
            swap(first_score,second_score);
        }
        int score = 0;
        score+= pairs(s,first,second,first_score);
        score+= pairs(s,second,first,second_score);
        return score;
    }
};