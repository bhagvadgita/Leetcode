class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        string ans = "";
        string word = "";
        for (int i = 0; i<sentence.size(); i++){
            if (sentence[i] == ' '){
                ans+=word;
                ans+=" ";
                word = "";
            }
            else{
                word+=sentence[i];
                if (find(dictionary.begin(),dictionary.end(),word)!=dictionary.end()){
                    while ((i+1)<sentence.size() && sentence[i+1]!=' ') i++;
                }
            }
        }
        ans+=word;
        return ans;
    }
};