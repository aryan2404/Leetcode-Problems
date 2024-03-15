class Solution {
public:
    bool isPalindrome(int x) {
unsigned int rev =0;
 unsigned int temp = x;
 if(x<0){
    return false;
 }
 while(temp !=0)
 {
    int remainder = temp %10;
    rev =rev * 10 + remainder;
    temp = temp/10;
 }
 return rev == x;
    }
};