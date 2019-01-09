#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,k,sum;
while(scanf("%d",&a)!=EOF){
for(k=a,sum=0;k>2;k--){
    if(k%3==0)
    sum+=k;
}
printf("%d\n",sum);
}
return 0;
}