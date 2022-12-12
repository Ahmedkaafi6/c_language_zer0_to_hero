include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    char name[20];
    int grade,n;
    printf("Enter number of the students in the class: \n");
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
    printf("Enter the name of the student no %d: " , i);
    scanf("%s", name);
    printf("Enter the grade of the student no %d: ", i);
    scanf("%d", &grade);
    
    if (strcmp(name, name) == 0 && grade > 50) 
    {
printf("student's name is %s and his/her grade is %d and he/she passed\n", name, grade);
    } 
        
    else 
    {
printf("student's name is %s and his/her grade is %d and he/she failed\n", name, grade);
    } 
    }
    
    return 0; 
}
