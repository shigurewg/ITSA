#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,k,flag;
while(scanf("%d",&a)!=EOF){
flag=0;
for(k=1;k<=a;k++){
if(a%k==0){
if(flag==1)
printf(" ");
printf("%d",k);
flag=1;
}
}
printf("\n");
}
return 0;
}