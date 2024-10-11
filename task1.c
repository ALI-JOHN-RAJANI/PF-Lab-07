#include <stdio.h>
int main() {
    int input,sum=0;
    printf("Enter Length of array: ");
    scanf("%d",&input);
    int a[input];
    for(int i=0;i<input;i++){
        printf("Enter Num: %d\n",i+1);
        scanf("%d",&a[i]);
        sum = sum + a[i];
        
    }
    printf("The sum of array is: %d",sum);
    return 0;
}