#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int k,len;
char str[257];
while(fgets(str,257,stdin)!=NULL){
len=strlen(str)-1;
for(k=0;k!=len;k++){
    printf("%c",str[k]);
    if((k+1)!=len)printf("   ");
}
printf("\n");
}

return 0;
}