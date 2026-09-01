class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>arr(26,0);
        for(char c:sentence){
            int i = c-'a';
            arr[i]++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]<=0){
                return false;
            }
        }
        return true;
    }
};