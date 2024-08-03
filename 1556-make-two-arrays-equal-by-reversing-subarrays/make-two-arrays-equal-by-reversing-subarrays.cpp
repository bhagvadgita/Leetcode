class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if (target.size()<2) return target==arr;
        for (int i = 0; i<target.size(); i++){
            if (target[i]==arr[i]) continue;
            int j = i;
            while (j<arr.size() && target[i]!=arr[j]) j++;
            if (j<arr.size()) reverse(arr.begin()+i,arr.begin()+j+1);
            else return false;
        }
        return target==arr;
    }
};