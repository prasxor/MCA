#include <stdio.h>
#include "my_string.h"

int main(){
    char str1[100] = "Hello ";
    char str2[100] = "world";
    char str3[100];

    // finding string length :)
    printf("Length: %d\n", my_strLen(str1));

    // copy string 
    my_strCpy(str3,str2);
    printf("copied string: %s\n", str3);

    // concatenating string
    my_strCat(str1,str2);
    printf("concatenated string: %s\n", str1);

}