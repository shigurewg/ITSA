#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,b,c,d,e;
while(scanf("%d",&a)!=EOF){
b=a%60;
a=(a-b)/60;
c=a%60;
a=(a-c)/60;
d=a%24;
a=(a-d)/24;
e=a;
printf("%d days\n",e);
printf("%d hours\n",d);
printf("%d minutes\n",c);
printf("%d seconds\n",b);
}
return 0;
}