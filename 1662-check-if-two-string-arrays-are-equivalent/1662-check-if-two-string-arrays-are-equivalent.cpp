class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s,u;
        for(int i=0;i<word1.size();i++){
            s= s+word1[i];
        }
        for(int i=0;i<word2.size();i++){
            u= u+word2[i];
        }
        if(s==u){
            return true;
        }
        else
        return false;
    }
};