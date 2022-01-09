//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6976
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int f(int n){
    if(n <= 100) return f(f(n+11));
    return n - 10;
}

int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        printf("%d\n", f(n));
    }
    return 0;
}