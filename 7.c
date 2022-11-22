#include<stdio.h>
#include<stdlib.h>
void demo(){
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
        scanf("%d",(ptr+i));
    for(int i=0;i<5;i++)
        printf("%d ",*(ptr+i));   
    ptr=NULL;
}
int main(){
    demo();
    return 0;
}
