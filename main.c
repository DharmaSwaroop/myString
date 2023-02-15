#include<stdio.h>
#include<stdlib.h>
#include "mystring.h"

int main()
{
    printf("..............STRING CONCAT.............\n");
    printf("Enter string 1(source): ");
    char *str1;
    str1 = getInD(str1);
    printf("Enter string 2(dest): ");
    char *str2;
    str2 = getInD(str2);
    strcat1(str1, str2);
    printf("The string after concat is: %s\n",str1);

    printf("..............STRCPY......................\n");
    // printf("Enter the source string: ");
    // char *src1;
    // src1 = getInD(src1);
    // printf("This line is executed\n");
    // char *dest1;
    // dest1 = (char*)malloc(getlen(dest1)*sizeof(char));
    strcpy1(str2,str1);
    printf("The destination string is: %s\n",str2);

    printf("..............STRNCPY   .......................\n");
    // printf("Enter the source string: ");
    // char *src2;
    // src2 = getInD(src2);
    // printf("Enter the destination string: ");
    // char *dest2;
    // dest2 = getInD(dest2);
    printf("Enter the size: ");
    int s1;
    scanf("%d",&s1);
    while(getchar()!='\n'); //
    strncpy1(str2, str1, s1);
    printf("The destination string after copy is: %s\n",str2);

    printf(".................STRCHR..........................\n");
    char c1;
    char *str3;
    printf("Enter a character: ");
    scanf("%c",&c1);
    while(getchar()!='\n');
    str3 = strchr1(str1,c1);
    printf("The string after 1st occurence is: %s\n",str3);

    printf("..................STRREV...........................\n");
    strrev1(str1);
    printf("The reversed string str1 is: %s\n",str1);

    printf("..................MEMCPY.............................\n");
    int n2;
    printf("Enter the size u want to copy: ");
    scanf("%d",&n2);
    memcpy1(str2,str1,n2);
    printf("The destination string is: %s\n",str2);

    printf("...................MEMMOVE.............................\n");
    int n3;
    printf("Enter the size u want to copy: ");
    scanf("%d",&n3);
    memmove1(str2,str1,n3);
    printf("The destination string is: %s\n",str2);
    
   


    
    return 0;
}