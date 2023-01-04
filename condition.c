#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int max(int num1, int num2){

    int result;
    if( num1 > num2){
        return result = num1;
    }else {
        return result = num2;
    }
}

main()
{   int num1;
    int num2;
    printf("===== Welcome to Comparing Software =====\n");

    printf("Enter your first number: ");
    scanf("%d", num1);
    printf("Enter your second number: ");
    scanf("%d", num2);

    printf("The maximum number is: %d", max(num1, num2));

    return 0;

}
