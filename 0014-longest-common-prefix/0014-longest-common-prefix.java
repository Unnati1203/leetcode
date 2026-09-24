class Solution {
    public String longestCommonPrefix(String[] strs) {
            Arrays.sort(strs);
            String start=strs[0];
            String end=strs[strs.length-1];
            StringBuilder ans= new StringBuilder();
            for(int i=0;i<start.length();i++){
                if(start.charAt(i)==end.charAt(i)){
                    ans.append(start.charAt(i));

                }
                else{
                    break;
                }
            }
            return ans.toString();
    }
}