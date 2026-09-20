class Solution {
    public int firstUniqChar(String s) {
        char[] arr= s.toCharArray();
        LinkedHashMap<Character,Integer> map=new LinkedHashMap<>();
        for(char c:arr){
            map.put(c,map.getOrDefault(c,0)+1);
        }
        for(Map.Entry<Character,Integer>entry:map.entrySet()){
            if(entry.getValue()==1){
                return s.indexOf(entry.getKey());
            }
        }
        return -1;
        
    }
}