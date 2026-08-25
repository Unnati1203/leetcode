class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n= capacity.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=capacity[i]-rocks[i];
        }
        sort(ans.begin(),ans.end());
        int x=0;
        for(int i=0;i<n;i++){
            if(additionalRocks>=ans[i]){
                additionalRocks-=ans[i];
                x++;
            }
            
        }
        return x;
}
};
