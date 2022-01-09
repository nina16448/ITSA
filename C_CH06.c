//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=671
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main(){
    char s[1000];
    while(fgets(s, 1000, stdin)){
        int flag = 0;
        int len = 0;
        for(int i = 0; s[i] != '\0'; i++){
            if(isspace(s[i])) continue;
            len++;
        }
        if(len == 1){
            if(isdigit(s[0])) printf("int\n");
            else printf("char\n");
            continue;
        }
        for(int i = 0; i < len; i++){
            if(isspace(s[i])) continue;
            if(i == 0 && s[i] == '-') continue;
            if(s[i] == '.' && (i != len - 1 && i != 0)) flag--;
            else if (!isdigit(s[i])) flag++;
        }
        if(s[0] == '-' && flag <= 0) flag = 0;
        if(flag > 0) printf("string\n");
        if(flag < 0) printf("float\n");
        if(flag == 0) printf("int\n");
    }
    return 0;
}