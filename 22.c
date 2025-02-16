// print alphabets from a to z and A to Z using loop
#include<stdio.h>
int main(){
    char a;
    printf("alphabets from a to z are:\n");
    for(a='a';a<='z';a++){
        printf("%c\n",a);
    }
    printf("alphabets from A to Z are:\n");
    for(a='A';a<='Z';a++){
        printf("%c\n",a);
    }
    return 0;
}