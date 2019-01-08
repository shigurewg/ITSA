#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int len,k;
char stra[257];
fgets(stra,257,stdin);
k=atoi(stra);
while(fgets(stra,257,stdin)!=NULL){
    len=strlen(stra);
    for(k=len-2;k>-1;k--){
        printf("%c",stra[k]);
    }
    printf("\n");
}
return 0;
}