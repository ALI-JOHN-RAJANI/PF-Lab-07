#include <stdio.h>
int main() {
    int temp[7];
int sum=0;
    for(int i=0;i<7;i++){
    printf("Enter Temperature of day %d: ",i+1);
    scanf("%d",&temp[i]);
    }
    for(int j=0;j<7;j++){
        sum=sum+temp[j];
        if(temp[j]>40 || temp[j]<0){
            printf("Extreme Temperature Of day %d\n",j+1);
        }
    }
float avg = sum/7;
printf("The Average of Temperature is: %f",avg);
return 0;
}
