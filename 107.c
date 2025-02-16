//double to string conversion
#include <stdio.h>
void doubleToString(double num, char str[]) {
    sprintf(str, "%.6lf", num);
}
int main() {
    double num;
    char str[30]; 
    printf("Enter a double number: ");
    scanf("%lf", &num); 
    doubleToString(num, str);
    printf("Double as string: %s\n", str);   
    return 0;
}