#include <stdio.h>
#include <stdlib.h>

int area()
{
int height;
int width;
char input;
printf("Enter whose Area you want to see: s for square r for rectangle");
scanf("%c",input);
 printf("Enter the height: ");
 scanf("%d",height);
 printf("enter the width: ");
 scanf("%d",width);
 printf("The area of square is: ",height*height);
 printf("the area of rectangle is: ",height*width);
 if(input == "s"){
    printf("The area of square is: ",height*height);
 }
else{printf("the area of rectangle is: ",height*width);
}


return 0;
}

