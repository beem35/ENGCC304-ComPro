
#include <stdio.h>

int main() {
    double x1, y1, x2, y2;
    
    printf("Input A Point :\n");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Input B Point :\n");
    scanf("%lf %lf", &x2, &y2);
    
    double midX = (x1 + x2) / 2.0;
    double midY = (y1 + y2) / 2.0;
    
    printf("Mid Point of A and B is ( %.1f, %.1f )\n", midX, midY);
    
    return 0;
}