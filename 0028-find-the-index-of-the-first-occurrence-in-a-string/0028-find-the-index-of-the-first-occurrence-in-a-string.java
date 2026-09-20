class Solution {
    public int strStr(String haystack, String needle) {
        int n=haystack.length();
        char ne=needle.charAt(0);
        for(int i=0;i<n-needle.length()+1;i++){
             char c = haystack.charAt(i);
             if(c==ne){
               String x=haystack.substring(i,i+needle.length());
               if(x.equals(needle)){
                return i;
               }
             }

        }
        return -1;
    }
}