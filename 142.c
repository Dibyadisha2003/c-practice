//switch case to perform all arithmetic operations
#include <stdio.h>
void main()
{
    char ch;
    float a,b,result;
    printf("enter an operation:");
    scanf("%c",&ch);
    printf("enter two numbers:");
    scanf("%f %f",&a,&b);
    switch(ch){
        case'+':
            result=a+b;
            printf("%d+%d=%d \n",a,b,result);
            break;
        case'-':
            result=a-b;
            printf("%d-%d=%d \n",a,b,result);
            break;
        case'*':
            result=a*b;
            printf("%d*%d=%d \n",a,b,result);
            break;
        case'/':
            result=a/b;
            printf("%d+/%d=%d \n",a,b,result);
            break; 
        default:
            printf("error:invalid operation \n");          
    }
}