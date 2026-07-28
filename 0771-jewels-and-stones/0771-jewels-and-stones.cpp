class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        vector<int> cnt(128, 0);

        for (char c : stones) {
            cnt[c]++;
        }

        int sum = 0;

        for (char c : jewels) {
            sum += cnt[c];
        }

        return sum;
    }
};