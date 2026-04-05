#include <stdio.h>

int main()
{
    float length, width, height, volume;

    printf("Enter length, width and height: ");
    scanf("%f %f %f", &length, &width, &height);

    volume = length * width * height;

    printf("Volume of cuboid = %f", volume);

    return 0;
}