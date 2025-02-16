// check character vowel or consonant
#include<stdio.h>
int main(){
    char b;
    printf("Enter a character:");
    scanf("%c",&b);
    if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'){
        printf("The character is a vowel");
    }
    else{
        printf("The character is a consonant");
    }
}