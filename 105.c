//boolean to string conversion
#include <stdio.h>
#include <stdbool.h>  
void boolToString(bool value) {
    if (value)
        printf("Boolean as string: true\n");
    else
        printf("Boolean as string: false\n");
}
int main() {
    bool value1 = true;
    bool value2 = false;
    printf("For value1 (true): ");
    boolToString(value1);
    printf("For value2 (false): ");
    boolToString(value2);
    return 0;
}