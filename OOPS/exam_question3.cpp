#include<iostream>
#include <string.h>
using namespace std;

int findSubstring(char *str, char *substring);
int main(){
char str[100] = "y,e,l,l,o,w";
char substr[40]= "y,e,l,l";

   int flag =findSubstring(str, substr);
   if (flag==1){
       std::cout << "Substring Found! "<< std::endl;
   }
   else {
       cout<<"Substring not Found!";
   }
   return 0;

}
int findSubstring(char *str, char *substr)
{
    int i = 0, j = 0;
    while ((str[j] != '\0')||(substr[i] != '\0')) {
        if (substr[i] != str[j]) {
            j++;
            i = 0;
        }
        else {
            i++;
            j++;
        }
    }
    if (substr[i] == '\0')
        return 1;
    else
        return -1;
}
