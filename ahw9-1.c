#include <stdio.h>

int main() {
    int r, g, b;

    scanf("%d %d %d", &r, &g, &b);

    
    int d_red   = (r - 255)*(r - 255) + g*g + b*b;
    int d_green = r*r + (g - 255)*(g - 255) + b*b;
    int d_blue  = r*r + g*g + (b - 255)*(b - 255);

    int min = d_red;
    char *nearest = "Red";

    if (d_green < min) {
        min = d_green;
        nearest = "Green";
    }
    if (d_blue < min) {
        min = d_blue;
        nearest = "Blue";
    }

    printf("Nearest color = %s\n", nearest);
    return 0;
}


