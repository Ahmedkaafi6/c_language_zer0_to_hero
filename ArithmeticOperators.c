

// Eksiklikleri gider, hatayi coz. 
#include <stdio.h>

int main()
{
    int x, y, c, choice;
    printf("Enter x and y: ");
    scanf("%d %d",&x,&y);
    printf("choice the operationyou want to perform between:\n 1: addition\n 2:subtaction\n 3: multiplication\n 4: division\n ");
    scanf("%d",&choice);
    if (choice == 1){
        c = x + y;
        printf("%d",c);
    }
    else if(choice == 2){
        c = x - y;
        printf("%d",c);
    }
    else if(choice == 3){
        c = x * y;
        printf("%d",c);
    }
    else if(choice == 4){
        c = x / y;
        printf("%d",c);
    }
    else{
        printf("YOU CHOSE THE WRONG OPERATION!!");
    }
    return 0;
}
