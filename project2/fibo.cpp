#include "fibo.h"

long long fibo(int n) {
    int f[n+1] ;
    f[0] =1 ;
    f[1] =1 ;
    for (int i =2 ; i <=n;i++) {
        f[i] = f[i-1] + f[i-2] ;
    }
    return f[n] ;
}