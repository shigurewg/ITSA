#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,b,k;
scanf("%d%d",&a,&b);
for(;a!=b;){
    for(k=0;k!=a;k++){
        printf("*");
    }
    if(a>b)a--;
    else if(a<b)a++;
printf("\n");
}
for(k=0;k!=a;k++){
        printf("*");
    }
printf("\n");

return 0;
}