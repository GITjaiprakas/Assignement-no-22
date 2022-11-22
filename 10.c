#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,j=1,i=0,x,y,n;
    ptr=(int *)calloc(j,sizeof(int));
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    while(i!=n){
        scanf("%d",&x);
        j++;
        ptr=(int *)realloc(ptr,sizeof(int)*j);
        *(ptr+i)=x;
        i++;
    } 
    x=ptr[0];
    y=ptr[0];
    for(j=1;j<i;j++){
        if(x<ptr[j]){
            x=ptr[j];
        }
        if(y>ptr[j]){
            y=ptr[j];
        }
    }
    printf("%d is the maximum and %d is the minimum",x,y);
    free(ptr);
    return 0;
}
