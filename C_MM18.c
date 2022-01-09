//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6906
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int arr[8];

int main(){
    int n, flag = 0;
    scanf("%d", &n);
    if(n < 0) flag = 1;
    n = abs(n);
    for(int i = 0; i < 8; i++){
        arr[i] = n % 2;
        n /= 2;
    }
    if(flag){
        for(int i = 0; i < 8; i++){
            arr[i] = !arr[i];
        }
        int a = 0;

        while(1){
            arr[a] = !arr[a];
            if(arr[a] == 0)
                a++;
            else break;
        }
    }
    for(int i = 7; i >= 0; i--){
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}