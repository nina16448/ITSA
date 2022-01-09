//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=645
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int cmp(const void* A, const void* B){
    return *((int*)B) - *((int*)A);
}

int main(){
    int arr[3];
    scanf("%d%d%d", arr, arr + 1, arr + 2);
    qsort(arr, 3, sizeof(int), cmp);
    printf("%d>%d>%d\n", arr[0], arr[1], arr[2]);
    return 0;
}