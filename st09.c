#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int col,row,k;
scanf("%d%d",&col,&row);
for(;row!=0;row--){
    for(k=col;k!=0;k--){
        printf("*");
    }
printf("\n");
}
return 0;
}