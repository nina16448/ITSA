//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1295
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int a, b;
int rec[1000000];

int max(int a, int b){
    if(a > b) return a;
    return b;
}

int min(int a, int b){
    if(a > b) return b;
    return a;
}

int CC(int n, int times, int ori){
    if(rec[n] != 0){
        rec[ori] = times+ rec[n];
        return rec[ori];
    }
    if(n == 1){
        rec[ori] = times;
        return rec[ori];
    }
    if(n % 2) return CC(3 * n + 1, times + 1, ori);
    else return CC(n / 2, times + 1, ori);
}

int main(){
    while(scanf("%d%d", &a, &b)!= EOF && (a || b)){
        int maxx = 0;
        for(int i = min(a, b); i <= max(a, b); i++){
            maxx = max(maxx, CC(i, 0, i) + 1);
        }
        printf("%d %d %d\n",a, b, maxx);
    }
    return 0;
}