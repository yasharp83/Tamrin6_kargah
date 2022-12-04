//a^b 
// O(log(b))
#include <stdio.h>

long long poww(long long a , long long b){
    if (!b)
        return 1 ; 
    long long x = poww(a , b/2) ; 
    if (b%2)
        return x*x*a ; 
    return x*x ; 
}


int main(){
    long long a , b ; 
    scanf("%lld %lld" , &a , &b) ; 
    printf("%lld" , poww(a , b)) ; 
}