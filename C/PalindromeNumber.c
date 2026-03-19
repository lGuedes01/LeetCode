#include <stdbool.h>
bool isPalindrome(int x) {
    if(x<0){return false;}
    int i = x;
    long int result = 0;
    while(i!=0){
        result = i%10 + result*10;
        i /= 10;
    }
    return result == x;
}
