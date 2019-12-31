#include<stdio.h>
#include<string.h>
int main()
{

     int abc;
    char c[100];
    printf("Enter a character: ");

    // Reads character input from the user
    scanf("%s", &c);
    abc=c;
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %s = %d", abc, abc);
    return 0;





}
