#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int choice;

    printf("Enter your favorite sports: press 1: Cricket, 2: Tennis, 3: Football, 4: Snooker : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            puts("\nCricket is my favorite sport");
            break;

        case 2:
            puts("\nTennis is my favorite sport");
            break;

        case 3:
            puts("\nFootball is my favorite sport");
            break;

        case 4:
            puts("\nSnooker is my favorite sport");
            break;

        default:
            puts("\nInvalid input");
    }

    exit(0);
}