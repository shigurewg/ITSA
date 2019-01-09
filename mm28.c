#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,k,j,flag;
while(scanf("%d",&a)!=EOF){
k=a/35;
    for(j=1,flag=0;j<=k;j++){
        if(flag==1)
        printf(" ");
        printf("%d",j*35);
        flag=1;
        }
printf("\n");
}
return 0;
}