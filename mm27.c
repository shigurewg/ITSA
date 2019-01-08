#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,b,sum,k;
while(scanf("%d%d",&a,&b)!=EOF){
for(sum=0,k=a;k!=b;){
sum+=k;
if(a>b)k--;
else if(a<b)k++;
}
sum+=b;
printf("%d\n",sum);
}
return 0;

}