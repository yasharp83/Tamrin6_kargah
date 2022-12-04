//a^b 
// O(b) version
#include <stdio.h>


int main(){
    long long a , b , ans = 1 ; 
    scanf("%lld %lld" , &a , &b) ; 
    for (int i = 1 ; i <= b ; i++)
        ans = ans * a ; 
    printf("%lld" , ans) ; 
}