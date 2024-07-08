class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> arr(n);
        for (int i = 0; i<n; i++){
            arr[i] = i+1;
        }
        int i = 0;
        int count = 1;
        while (arr.size()>1){
            if (count == k){
                arr.erase(arr.begin()+i);
                count = 1;
            }
            else{
                i++;
                count++;
            }
            if (i>=arr.size()) i=0;
        }
        return arr[0];
    }
};