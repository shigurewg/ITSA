#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,k,j;
while(scanf("%d",&a)!=EOF){
for(k=a-1;k>=1;k--){
    for(j=k-1;j>=2;j--)
    if(k%j==0)
    break;
    if(j==1)
    break;
}
printf("%d\n",k);
}
return 0;
}