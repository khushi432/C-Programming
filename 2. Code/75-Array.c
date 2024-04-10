#include<stdio.h>
int main(){
int arr[10]= {2,5,6,2,8,3,7,5,3,8};
// printf("%d\n",arr[0]);
// printf("%d\n",arr[1]);
printf("Before\n");
for(int i = 0; i<10; i++){
    printf("%d ",arr[i]);
}
printf("\n");
arr[0] = 11;
printf("After\n");

for(int i = 0; i<10; i++){
    printf("%d ",arr[i]);
}


}