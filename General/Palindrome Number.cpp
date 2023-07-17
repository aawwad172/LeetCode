class Solution {
public:
    bool isPalindrome(int x) {
        // Checking for the negative values!
        if (x < 0) { return false; }

        int Old = x;
        int New = 0;
        while (x != 0) {
            int n = x % 10;
            New = ((New * 10) + n);
            x /= 10;
        }

        return New == Old;
    }
};