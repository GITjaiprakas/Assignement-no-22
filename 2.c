#include<stdio.h>
#include<stdlib.h>
void fun(){
    int *p,i,size,sum=0;
    printf("Enter the no of elements you want to store : ");
    scanf("%d",&size);
    p=(int *)calloc(size,sizeof(int));
    if(p=='\0'){
        printf("Memory not allocated");
        return;
    }
    for(i=0;i<size;i++){
        scanf("%d",(p+i));
        sum=sum+*(p+i);
    }
    printf("average is %d",sum/size);
    free(p);
}
int main(){
    fun();
    return 0;
}
