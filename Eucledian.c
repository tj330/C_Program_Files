#include <stdio.h>

struct Point {
    int x;
    int y;
};

void main() {
    struct Point p1,p2,p3;

    printf("Enter the first point(x1,y1): ");
    scanf("%d%d",&p1.x,&p1.y);

    printf("Enter the second point(x2,y2): ");
    scanf("%d%d",&p2.x,&p2.y);

    p3.x=p1.x+p2.x;

    p3.y=p1.y+p2.y;

    printf("New point after addition: ");
    printf("(%d,%d)\n",p3.x,p3.y);
}