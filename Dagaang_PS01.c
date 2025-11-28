/* INPUT: Enter the Legth and Width of a Rectangle.

   PROCESS: Compute the area using area = length * width.
            Compute the perimeter using perimeter = 2 * (length + width).

   OUTPUT: Display the area & Perimeter of the rectangle.
*/


#include<stdio.h>

int main(){
    float length, width, area, perimeter;

    //INPUT
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    //PROCESS
    area = length * width;
    perimeter = 2 * (length + width);

    //OUTPUT
    printf("\nArea of a rectangle = %.2f\n", area);
    printf("\nPerimeter of a rectangle = %.2f\n", perimeter);

    return 0;
}
