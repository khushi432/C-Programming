#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        printf("Enter element: "); 
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0; i<10; i++){
        sum += arr[i];
    }
    printf("Sum: %d",sum);

}