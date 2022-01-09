//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30757
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int GCD(int a, int b){
    return b? GCD(b, a % b) : a;
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", GCD(n, m));
    return 0;
}