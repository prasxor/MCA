#ifndef MY_STRING_H
#define MY_STRING_H


int my_strLen(char str[]){
    int i = 0;

    while(str[i] != '\0'){
        i++;
    }
    return i;
}


void my_strCat(char str1[], char str2[]){
    int i = 0, j=0;

    while (str1[i] != '\0'){
        i++;
    }

    while(str2[j]!= '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    // return str1;
}


void my_strCpy(char str1[], char str2[]) {
    int i = 0;

    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }

    str1[i] = '\0';
}

#endif