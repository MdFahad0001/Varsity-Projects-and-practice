#include<graphics.h>
int main(){
    int gd = DETECT, gm;


    initwindow(1000,1200,"Flag");
    setcolor(GREEN);
    rectangle(200,610,855,300);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(201,301,GREEN);


    setcolor(RED);
    circle(500,460,100);
    setfillstyle(SOLID_FILL, RED);
    floodfill(500,460,RED);

    setcolor(WHITE);
    rectangle(180,850,200,300);
    setfillstyle(2,3);
    floodfill(181,310,WHITE);



    getch();
    closegraph();
    return 0;
}
