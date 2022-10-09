// WAP to draw a circle, line and arc using graphics function
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main() {
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "");
    errorcode = graphresult();

    if (errorcode != grOk) {
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("Press any key to halt:");
        getch();
        exit(1);
    }

    // circle
    circle(50, 50, 100);
    // line
    line(0, 0, getmaxx(), getmaxy());
    // arc
    arc(100, 100, 0, 135, 50);

    getch();
    closegraph();
    return 0;
}
