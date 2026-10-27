class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>winners;
        unordered_map<int,int>looser;
        for(auto match : matches){
            winners[match[0]]++;
            looser[match[1]]++;
        }
        vector<int>notlost;
        vector<int>onematch;
        for(auto it:winners){
            if(looser.find(it.first)==looser.end()){
                 notlost.push_back(it.first);
            }
        }
        for(auto it:looser){
            if(it.second==1){
                onematch.push_back(it.first);
            }
        }
        sort(notlost.begin(),notlost.end());
        sort(onematch.begin(),onematch.end());
        return {notlost,onematch};
    }
};