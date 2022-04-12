class Solution {
public:
    bool isPowerOfTwo(int n) {
        
       

        int a=1;
        for(int i=0; i<=30; i++){
            
            if(a == n){
                return true;
            }
            
            if(a < INT_MAX/2 ){
              a= a*2;   
            }
                
            }
        
      return false;   
    }
};