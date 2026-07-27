class Solution {
public:
    bool isHappy(int n) {
        while(n != 1 && n != 4){
            n = digitSum(n);
        }
        return n == 1;
    }
    int digitSum(int n){
        int dS = 0;
        while(n > 0){
            int temp = n % 10;
            n = n / 10;
            dS += temp * temp;
        }
        return dS;
    }
};