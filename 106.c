//float to string conversion
#include <stdio.h>
void floatToString(float num, char str[]) {
    sprintf(str, "%.2f", num);
}
int main() {
    float num;
    char str[20]; 
    printf("Enter a float number: ");
    scanf("%f", &num); 
    floatToString(num, str);
    printf("Float as string: %s\n", str);   
    return 0;
}