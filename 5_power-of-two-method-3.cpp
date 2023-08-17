// https://leetcode.com/problems/power-of-two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=1;
        for(int x = 1; x <=31 ; x++){
            if(n == ans){
                return true;
            }
            if(ans < INT_MAX/2){
            ans = pow(2,x);
            }
        }
        return false;
    }
};