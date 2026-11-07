class Solution {
public:
    long long countValidSubstrings(string s) {
        int n = s.length();
        long long total = 1LL * n * (n + 1) / 2;
        long long invalid = 0;
        int last = -1;
        for (int j = 2; j < n; j++) {
            if (s[j - 2] == 'a' &&
                s[j - 1] == 'b' &&
                s[j] == 'c') {
                last = j - 2;
            }
            if (last != -1) {
                invalid += last + 1;
            }
        }
        return total - invalid;
        
        
    }
};