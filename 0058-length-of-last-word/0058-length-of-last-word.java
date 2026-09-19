class Solution {
    public int lengthOfLastWord(String s) {
         String a=s.trim();
        int n=a.length();
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(a.charAt(i)!=' '){
              count++;
            }
            else{
                break;
            }
        }
        return count;
    }
}