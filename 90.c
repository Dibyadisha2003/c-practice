//add 2 binary strings
#include <stdio.h>
#include <string.h>
void addBinary(char str1[], char str2[], char result[]) {
    int i = strlen(str1) - 1;
    int j = strlen(str2) - 1;
    int carry = 0, k = 0;
    char temp[100];  
    while (i >= 0 || j >= 0 || carry) {
        int bit1 = (i >= 0) ? str1[i] - '0' : 0;
        int bit2 = (j >= 0) ? str2[j] - '0' : 0;
        int sum = bit1 + bit2 + carry;
        temp[k++] = (sum % 2) + '0';  
        carry = sum / 2; 
        i--; j--;
    }
    temp[k] = '\0';
    int len = k;
    for (int x = 0; x < len; x++) {
        result[x] = temp[len - x - 1];
    }
    result[len] = '\0';
}
int main() {
    char str1[100], str2[100], result[100];
    printf("Enter first binary string: ");
    scanf("%s", str1);
    printf("Enter second binary string: ");
    scanf("%s", str2);
    addBinary(str1, str2, result);
    printf("Binary Sum: %s\n", result);
    return 0;
}