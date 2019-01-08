#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,k,b,c,d,tt,hr,min,sum=0;
scanf("%d%d%d%d",&a,&b,&c,&d);
hr=c-a;
min=d-b;
tt=60*hr+min;
if(tt>=120){
sum+=120;
tt-=120;
    if(tt>=120){
        sum+=160;
        tt-=120;
        k=tt/30;
        sum+=k*60;
        }
    else {
        k=tt/30;
        sum+=k*40;
        }
}
else{k=(tt/30);
sum+=k*30;
}
printf("%d\n",sum);
return 0;
}