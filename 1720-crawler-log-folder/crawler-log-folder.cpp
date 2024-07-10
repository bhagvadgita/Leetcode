#import <regex>

class Solution {
public:

    bool check(string& str ){
        regex pattern("^[a-zA-Z0-9]+/$");
        return regex_match(str,pattern);
    }

    int minOperations(vector<string>& logs) {
        int folder = 0;
        for (auto str: logs){
            if (check(str)){
                folder++;
            }
            else if (str == "../"){
                if (folder>0) folder--;
            }
        }
        return folder;
    }
};