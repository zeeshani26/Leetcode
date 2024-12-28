class Solution {
public:
    int smallestEvenMultiple(int n) {
      for(int i = 2; i <= 150;i += 2){
        if(i%n==0 && i%2==0){
            return i;
        }
      }
      return n*2;  
    }
};