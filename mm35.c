#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,k;
while(scanf("%d",&a)!=EOF){
if((a%4==0))
    if(a%100==0)
        if(a%400==0)
            printf("Bissextile Year\n");
        else
            printf("Common Year\n");
    else 
    printf("Bissextile Year\n");
else
printf("Common Year\n");
}
return 0;
}