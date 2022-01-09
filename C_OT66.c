//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=36991
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int max(int a, int b){
    if(a > b) return a;
    return b;
}

int main(){
    int n, rec, maxn = 0;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &rec);
        maxn = max(maxn, rec);
    }
    printf("%d\n", maxn);
    return 0;
}