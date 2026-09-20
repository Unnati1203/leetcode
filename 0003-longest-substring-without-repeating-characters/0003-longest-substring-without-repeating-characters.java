class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n=s.length();
        int start=0;
        int end=0;
        int max_length=0;
        List<Character> arr= new ArrayList<Character>();
        while(end<n){
            if(!arr.contains(s.charAt(end))){
                arr.add(s.charAt(end));
                end++;
                max_length=Math.max(max_length,arr.size());
            }
            else{
                arr.remove(Character.valueOf(s.charAt(start)));
                start++;
            }
        }
        return max_length;
    }
}