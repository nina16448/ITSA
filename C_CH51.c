//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=36907
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n, m;
    scanf("%d", &n);

    while(n--){
        scanf("%d", &m);
        if(m >= 95) printf("Excellent");
        else if(m >= 85) printf("Very Good");
        else if(m >= 61) printf("Good");
        else printf("Careless");
        printf("\n");
    }

    return 0;
}