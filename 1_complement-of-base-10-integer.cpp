// https://leetcode.com/problems/complement-of-base-10-integer

class Solution {
public:
    int bitwiseComplement(int n) {
        int reverse = ~n;
        if(n==0){
            return 1;
        }
        int mask=0,cal=0;
        while(n!=0){
            n= (n>>1);
            mask = (mask<<1);
            mask = (mask | 1);  
        } 
        int output = (reverse & mask); 
        return output;    
    }
};