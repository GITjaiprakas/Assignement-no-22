#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,j=1,i=0,sum=0,x;
    ptr=(int *)calloc(j,sizeof(int));
    printf("Enter the elements of the array (enter the last element as 0 to end enterin the elements): ");
    while(x!=0){
        scanf("%d",&x);
        j++;
        ptr=(int *)realloc(ptr,sizeof(int)*j);
        *(ptr+i)=x;
        i++;
        sum=sum+*(ptr+i);
    } 
    x=ptr[0];
    for(i=1;ptr[i]!=0;i++){
        if(x<ptr[i]){
            x=ptr[i];
        }
    }
    printf("%d",x);
    free(ptr);
    return 0;
}
