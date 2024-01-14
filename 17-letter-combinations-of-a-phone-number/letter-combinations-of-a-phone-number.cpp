class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<vector<string>> a;
        vector<string> c;
        vector<string> ans;
        int n=digits.size();
        for (int i=0; i<n; i++){
            switch (digits[i]){
                case '2':
                    c.push_back("a");
                    c.push_back("b");
                    c.push_back("c");
                    break;
                case '3':
                    c.push_back("d");
                    c.push_back("e");
                    c.push_back("f");
                    break;
                case '4':
                    c.push_back("g");
                    c.push_back("h");
                    c.push_back("i");
                    break;
                case '5':
                    c.push_back("j");
                    c.push_back("k");
                    c.push_back("l");
                    break;
                case '6':
                    c.push_back("m");
                    c.push_back("n");
                    c.push_back("o");
                    break;
                case '7':
                    c.push_back("p");
                    c.push_back("q");
                    c.push_back("r");
                    c.push_back("s");
                    break;
                case '8':
                    c.push_back("t");
                    c.push_back("u");
                    c.push_back("v");
                    break;
                case '9':
                    c.push_back("w");
                    c.push_back("x");
                    c.push_back("y");
                    c.push_back("z");
                    break;
            }
            a.push_back(c);
            c.clear();
        }
        switch (n){
            case 0:
                return {};
            case 1:
                return a[0];
            case 2:
                for (int i=0; i<a[0].size(); i++){
                    string str="";
                    str+=a[0][i];
                    for (int j=0; j<a[1].size(); j++){
                        str+=a[1][j];
                        ans.push_back(str);
                        str.pop_back();
                    }
                }
                return ans;
            case 3:
                for (int i=0; i<a[0].size(); i++){
                    string str="";
                    str+=a[0][i];
                    for (int j=0; j<a[1].size(); j++){
                        str+=a[1][j];
                        for (int k=0; k<a[2].size(); k++){
                            str+=a[2][k];
                            ans.push_back(str);
                            str.pop_back();
                        }
                        str.pop_back();
                    }
                }
                return ans;
            case 4:
                for (int i=0; i<a[0].size(); i++){
                    string str="";
                    str+=a[0][i];
                    for (int j=0; j<a[1].size(); j++){
                        str+=a[1][j];
                        for (int k=0; k<a[2].size(); k++){
                            str+=a[2][k];
                            for (int l=0; l<a[3].size(); l++){
                                str+=a[3][l];
                                ans.push_back(str);
                                str.pop_back();
                            }
                            str.pop_back();
                        }
                        str.pop_back();
                    }
                }
                return ans;
        }
        return ans;
    }
};