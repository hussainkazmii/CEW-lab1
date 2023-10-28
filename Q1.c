
#include <stdio.h>
#include <stdlib.h>

int employee()
{
    int ID;
    int TWH;
    float APH;
    printf("enter the employee id: ");
    scanf("%d",&ID);
    printf("enter total work hours: ");
    scanf("&d",&TWH);
    printf("enter amount recieved per hour: ");
    scanf("%f",&APH);
    printf("your employee ID: %d",ID);
    printf("\n your salary for this month: %.2f",TWH*APH);
    return 0;

}
