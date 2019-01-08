#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
double a;
while(scanf("%lf",&a)!=EOF){
if(a<=800)
printf("%.1lf\n",a*0.9);
else if(a<1500&&a>800)
printf("%.1lf\n",a*0.9*0.9);
else 
printf("%.1lf\n",a*0.9*0.79);
}
return 0;

}