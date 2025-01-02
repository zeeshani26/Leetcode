class Solution {
public:
    int smallestEvenMultiple(int n) {
      for(int i = 2; i <= n;i += 2){
        if(i%n==0 && i%2==0){
            return i;
        }
      }
      return n*2;  // when answer is not found smaller than n, multiply n by 2
    }
};