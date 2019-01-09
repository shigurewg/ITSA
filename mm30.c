#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,k;
while(scanf("%d",&a)!=EOF){
for(k=2;k<a;k++){
if(a%k==0){
printf("NO");
break;
}
}
if(k==a)
printf("YES");
printf("\n");
}
return 0;
}