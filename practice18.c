#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z')|| (ch >= 'A' && ch <= 'Z')){
        if(ch == 'a'|| ch == 'e' || ch== 'i' || ch== 'o'|| ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("It is Vowel.\n");
        else
        printf("It is a constant.\n");
    } else if (ch >= 0 && ch <= 9){
    printf("It is a digit.\n");
    } else {
        printf("It is a special character.\n");
    }
    return 0;
}