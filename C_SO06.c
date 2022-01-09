//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=2271
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

struct stu{
    int ID;
    int mg;
    int eg;
};

int cmp(const void* a, const void* b){
    if(((struct stu*)a)->mg ==((struct stu*)b)->mg) return ((struct stu*)b)->eg - ((struct stu*)a)->eg;
    return ((struct stu*)b)->mg - ((struct stu*)a)->mg;
}

int main(){
    int n, ID, m, e;
    struct stu arr[101];
    scanf("%d", &n);
    for(int i = 0 ; i < n; i++)
        scanf("%d%d%d", &arr[i].ID, &arr[i].mg, &arr[i].eg);
    
    qsort(arr, n, sizeof(struct stu), cmp);

    for(int i = 0 ; i < n; i++)
        printf("%d %d %d\n", arr[i].ID, arr[i].mg, arr[i].eg);
    return 0;
}