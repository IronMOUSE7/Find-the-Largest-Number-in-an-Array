#include<stdio.h>

int main(){
    int a;
    int arr[10];
    printf("enter the number of elements (1-10) = ");
    scanf("%d",&a);
    
    for(int i=0;i<a;i++){
        printf("enter the number %d ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<a;i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("the largest number is %d",arr[0]);
    
    return 0;
}