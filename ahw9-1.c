#include <stdio.h>

int main() {
    int r, g, b;

    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    int d_black = r*r + g*g + b*b;
    int d_red   = (r - 255)*(r - 255) + g*g + b*b;
    int d_green = r*r + (g - 255)*(g - 255) + b*b;
    int d_blue  = r*r + g*g + (b - 255)*(b - 255);
    int d_white = (r - 255)*(r - 255) + (g - 255)*(g - 255) + (b - 255)*(b - 255); 

    int min = d_black;
    char *nearest = "Black";

    if (d_red < min) {
        min = d_red;
        nearest = "Red";
    }
    if (d_green < min) {
        min = d_green;
        nearest = "Green";
    }
    if (d_blue < min) {
        min = d_blue;
        nearest = "Blue";
    }
    if (d_white < min) {             
        min = d_white;
        nearest = "White";
    }

    printf("The nearest color is %s\n", nearest);
    return 0;
}
