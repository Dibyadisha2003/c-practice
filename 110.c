//int to char conversion
#include <stdio.h>
char intToChar(int num) {
    return (char)(num + '0'); 
}
int main() {
    int num;
    printf("Enter an integer (0-9): ");
    scanf("%d", &num); 
    if (num >= 0 && num <= 9) {
        char ch = intToChar(num);
        printf("Integer as character: %c\n", ch);
    } else {
        printf("Invalid input! Enter a single digit (0-9).\n");
    }
    return 0;
}