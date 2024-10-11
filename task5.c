#include <stdio.h>
int main() {
    int a[10] = {4,1,6,8,10,21,8,9,2,6};
    int max = a[0];
    int min = a[0];
    for(int i=0;i<10;i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    printf("The Largest is: %d\n",max);
    printf("The Smallest is: %d\n",min);
    return 0;
}