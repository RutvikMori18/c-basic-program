class Solution {
public:
    int fib(int n) {
        int num1 = 0;
        int num2 = 1;
        int sum =0;
        if(n == 0){
            return 0;
        }
        else if(n ==1 || n == 2){
            return 1;
        }
         else{
        for(int i =2;i<=n;i++){
            sum = num1 + num2;
            num1 = num2;
            num2 = sum;
        }
            
    }
        return sum;
    }
};
