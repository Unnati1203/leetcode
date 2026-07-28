class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(char c: s){
            freq[c]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto x: freq){
            pq.push({x.second,x.first});
        }
        string ans="";
        while(!pq.empty()){
            auto top=pq.top();
            pq.pop();
            ans.append(top.first,top.second);
        }
        return ans;



    }
};