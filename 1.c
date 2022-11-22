#include<stdio.h>
#include<stdlib.h>
void fun(){
    int i=0,j=1;
    char c,*str;
    str=(char*)malloc(sizeof(char));
    printf("Enter String : ");
    while(c!='\n'){
        j++;
        c=getc(stdin);
        str=(char*)realloc(str,j*sizeof(char));
        str[i]=c;
        i++;
    }
    str[i]='\0';
    printf("Entered string is %s",str);
    free(str);
}
int main(){
    fun();
    return 0;
}
