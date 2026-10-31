class Solution {
public:
int sum = 0;
    int addDigits(int num) {
         sum+= num%10;
        if(num<10){
            return sum;
            
        }
        addDigits(num/10);
        if(sum>=10){
            num = sum;
            sum  = 0;
           addDigits(num);
        }
            return sum; 
    }
};