// This is a program to check whether a string is palindrome or not
#include <stdio.h>

int main() {
    char str[100];
    int i,j,len=0,flag=0;
    printf("Enter a string:");
    scanf("%s",str);
    i=0;
    while(str[i]!='\0'){
        len++;
        i++;
    }
    for(i=0,j=len-1;i<=(len/2);i++,j--){
        if(str[i]!=str[j]){
            flag=1;
            break;
        }
    }    
    if(flag==0){
        printf("%s is palindrome",str);
    }
    else{
        printf("%s is not palindrome",str);
    }
    return 0;
}
