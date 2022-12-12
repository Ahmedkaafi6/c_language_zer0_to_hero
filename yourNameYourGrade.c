#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    char name[20];
    int grade;
    printf("Enter the name of the student: ");
    scanf("%s", name);
    printf("Enter the grade of the student : ");
    scanf("%d", &grade);
    if (strcmp(name, name) == 0 && grade < 50) 
    {
printf("students name is %s and his/her grade is %d, and he/she failed; try again.", name, grade);
    }
        
    else 
    {
printf("student's name is %s and his/her grade is %d and he/she passed", name, grade);
    } 
    
    return 0; 
}
