class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int pair=0;
        for(auto it:nums){
            pair=pair+mp[it];
            mp[it]++;

        }
        return pair;
    }


};