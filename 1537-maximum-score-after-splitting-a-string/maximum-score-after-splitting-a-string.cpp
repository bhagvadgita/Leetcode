class Solution {
public:
    int maxScore(string s) {
        int result=0;
        for (int i=1; i<s.size(); i++){
            string leftsub=s.substr(0,i);
            string rightsub=s.substr(i,s.size()-1);
            int zerocount=0;
            int onecount=0;
            for (int j=0; j<leftsub.size(); j++){
                if (leftsub[j]=='0'){
                    zerocount++;
                }
            }
            for (int j=0; j<rightsub.size(); j++){
                if (rightsub[j]=='1'){
                    onecount++;
                }
            }
            result=max(result,onecount+zerocount);
        }
        return result;
    }
};