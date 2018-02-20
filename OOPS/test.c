#include<stdio.h>

#include<stdlib.h>

#include<string.h>

int main()

{
char *arr = "Happy Valentine's Day!\n";
char *arr1 = "I love you kushki\n";
char *arr2 = "Gussa ni krte";

int b = 0,a=0,c=0;

printf("Keep pressing any button and roothte ni\n");


while(a < strlen(arr)) {

getch();

printf("%c", arr[a++]);

}

while(b < strlen(arr1)) {

getch();

printf("%c", arr1[b++]);

}

while(c < strlen(arr2)) {

getch();

printf("%c", arr2[c++]);

}
return 0;

}
