#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,b,c,d;
scanf("%d%d",&a,&b);
c=a%b;
d=a/b;
printf("%d+%d=%d\n",a,b,(a+b));
printf("%d*%d=%d\n",a,b,(a*b));
printf("%d-%d=%d\n",a,b,(a-b));
if(a<0){
    c+=b;
    d--;
    }
printf("%d/%d=%d...%d\n",a,b,d,c);
return 0;
}