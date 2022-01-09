//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=639
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        if(n & 1) printf("odd\n");
        else printf("even\n");
    }
    return 0;
}