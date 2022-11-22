#include<stdio.h>
#include<stdlib.h>
void sum(){
    int size,*p,sum=0,i;
    printf("Enter the total no of numbers : ");
    scanf("%d",&size);
    p=(int *)malloc(size*sizeof(int));
    if(p==NULL){
        printf("memory allocation failed");
        return;
    }
    for(i=0;i<size;i++){
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    printf("the sum is %d",sum);
    free(p);
}
int main(){
    sum();
    return 0;
}
