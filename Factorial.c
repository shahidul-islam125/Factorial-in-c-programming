#include<stdio.h>
int main(){
    int fact, i, result = 1;
    printf("Enter a Number :");
    scanf("%d", &fact);
    
    for(i=1; i<=fact; i++){
       result = result * i;
    }
    printf("The factorial value is : %d\n", result);
    
  return 0;  
}