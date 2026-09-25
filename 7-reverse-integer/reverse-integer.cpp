class Solution {
public:
    int reverse(int x) {
        int rd = 0;

        while (x != 0) {
            int ld = x % 10;

            if (rd > INT_MAX / 10 || (rd == INT_MAX / 10 && ld > 7))
                return 0;

            if (rd < INT_MIN / 10 || (rd == INT_MIN / 10 && ld < -8))
                return 0;

            rd = (rd * 10) + ld;
            x = x / 10;
        }

        return rd;
    }
};