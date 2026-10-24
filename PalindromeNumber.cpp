class Solution {
public:
    long long reverse (int n) {
        long long result = 0;
        while (n>0) {
            int lastDig = n % 10;
            result = result * 10 + lastDig;
            n = n/10;
        }
        return result;
    } 
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        long long revx = reverse(x);
        return revx == x;
        }
};       