// https://leetcode.com/problems/power-of-two

class Solution {
public:
    bool isPowerOfTwo(int n) {

        

 int y=0,output;
        if(n < 1){
            return false;
        }
        else if( n == 1){
            return true;
        }
        
             while(n!=1) {
              y = n % 2;
             if(y != 0){
                  output = 0;
                  break;
              }
              n = n/2;
              if(n==1){
                  return true;
              }
            }
            if(output == 0){
                return false;
            }
            else{
                return true;
            }
            
       
        
        
    }
};