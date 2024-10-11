#include <stdio.h>
int main() {
    int num;
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Enter Number You Want To Find: ");
    scanf("%d",&num);
    for(int i=0;i<10;i++){
    if (num==a[i]){
        printf("Your Number Exist in the array at place %d",i+1);
        return 0;
    }
}
    printf("Your Number doesn't Exist in the array");
    return 0;
}