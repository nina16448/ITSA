//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=29336
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int f(int n);
int g(int n);

int g(int n){
    if(n == 1) return -6;
    return -f(n - 1) + g (n - 1);
}

int f(int n){
    if(n == 1) return 2;
    return 3 * f(n - 1) + g(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d %d\n", f(n), g(n));
    return 0;
}