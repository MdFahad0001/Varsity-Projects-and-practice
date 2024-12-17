#include<iostream>
#include<graphics.h>



int main()
{
    int gd = DETECT, gm;
    initwindow(1000,1200,"Moon & star");

    //moon

    setcolor(YELLOW);
    arc(400,400,100,320,100);
    arc(400,400,120,300,80);
    line(383,302,360,330);
    line(439,469,473,465);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(359,327,YELLOW);


    //star

    setcolor(WHITE);
    line(430,350,380,420);
    line(430,350,480,420);
    line(380,380,480,380);
    line(380,380,480,420);
    line(380,420,480,380);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(430,351,WHITE);

    setfillstyle(SOLID_FILL,BLUE);
    floodfill(430,385,WHITE);

    setfillstyle(SOLID_FILL,RED);
    floodfill(388,382,WHITE);

    setfillstyle(SOLID_FILL,RED);
    floodfill(472,382,WHITE);

    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(472,410,WHITE);

    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(388,410,WHITE);








    getch();
    closegraph();
    return 0;
}
