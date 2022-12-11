// write the name of the person you like
// if the name is yours print(Hurra this is me)
// This is my bff. 

// Good Luck
#include <stdio.h>

int main()
{
    char NAME[50] = "AHMED";
    char name[50];
    printf("Enter a Name: ");
    scanf("%s", name);
    if(strcmp(name, NAME)== 0){
        printf("hurray this is me");
    }
        else{
            printf("this is my best friend");
        
    }

    return 0;
}
