class Solution {
    boolean fun(int n){
        if(n==1){
            return true;
        }
        if(n%2!=0 || n==0){
            return false;
        }
        
        return fun(n/2);
    }
    public boolean isPowerOfTwo(int n) {
        return fun(n);
    }
}