#include<stdio.h>
int main(){
    char ch;
    printf("enter the character : ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
    case 'A' : case 'E' : case 'I' : case 'O' : case 'U' :
    printf("user is vowel!!\n");
        break;
    default:
    printf("user is constant!\n");
        break;
    }

}