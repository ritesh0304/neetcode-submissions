class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int ones = 0;
        for (char c : s) if (c == '1') ones++;   // right side mein shuru mein saare ones

        int zeroes = 0;      // left mein zeroes
        int ans = INT_MIN;

        for (int i = 0; i < n - 1; i++) {        // n-1 tak, right non-empty rakhne ke liye
            if (s[i] == '0') zeroes++;           // left mein aaya
            else ones--;                         // right se hata
            ans = max(ans, zeroes + ones);
        }
        return ans;
    }
};