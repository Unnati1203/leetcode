class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            return true;
        }
        return false;
    }

    bool halvesAreAlike(string s) {
        int n= s.size();
        int i=0;
        int j=n/2;
        int left=0;
        int right=0;
        while(i<n/2 && j<n){
            if(isVowel(s[i])){
                left++;
                
            }
            if(isVowel(s[j])){
                right++;
             }
                  i++;
                  j++;

        }
        if(left==right){
            return true;
        }
        else
          return false;
    }
};