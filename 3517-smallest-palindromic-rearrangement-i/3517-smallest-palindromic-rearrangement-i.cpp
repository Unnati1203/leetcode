class Solution {
public:
    string smallestPalindrome(string s) {

        // Step 1: Create a frequency array for 26 lowercase letters
        vector<int> cnt(26, 0);

        // Count the frequency of each character
        for (char c : s) {
            cnt[c - 'a']++;
        }

        // This will store the left half of the palindrome
        string left = "";

        // This will store the middle character (if any)
        char mid = 0;

        // Step 2: Traverse from 'a' to 'z'
        for (int i = 0; i < 26; i++) {

            // Add half of the occurrences to the left half
            // Example:
            // count = 6 -> add 3 characters
            // count = 5 -> add 2 characters
            left.append(cnt[i] / 2, 'a' + i);

            // If frequency is odd, this character becomes the middle
            if (cnt[i] % 2 == 1) {
                mid = 'a' + i;
            }
        }

        // Step 3: Right half is the reverse of the left half
        string right = left;
        reverse(right.begin(), right.end());

        // Step 4: Return the final palindrome
        if (mid != 0) {
            return left + mid + right;
        }

        return left + right;
    }
};