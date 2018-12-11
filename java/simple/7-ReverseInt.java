class Solution {
    public int abs(int x) {
        return x > 0 ? x : -x;
    }
    public int reverse(int x) {
        int result = 0;
        int int_max = 0x7fffffff;
        int int_min = 0x80000000;
        while (x != 0) {
            result = result * 10 + x % 10;
            if (abs(x) >= 10 && abs(result) > (0x7fffffff / 10))
                return 0;
            x /= 10;
        }
        if (result > int_max || result < int_min)
            return 0;
        return result;
    }
}
