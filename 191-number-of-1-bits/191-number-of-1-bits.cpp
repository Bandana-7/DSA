class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int oneCount=0;
        
        while(n>0){
            
            oneCount++;
            n = n & (n-1);
        }
        
        return oneCount;
        
    }
};