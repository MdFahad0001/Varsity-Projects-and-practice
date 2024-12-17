#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main()
{

int gd=DETECT,gm;
initwindow(1000,1200,"Traffic light");


rectangle(500,400,700,800);



circle(600,470,60);


circle(600,600,60);


circle(600,730,60);

while(1){

    setfillstyle(1,RED);
            floodfill(601,471,WHITE);

            delay(1000);

            setcolor(WHITE);
            setfillstyle(1,BLACK);
            floodfill(601,471,WHITE);
            setfillstyle(1,YELLOW);
            floodfill(601,601,WHITE);

            delay(1000);

            setcolor(WHITE);
            setfillstyle(1,BLACK);
            floodfill(601,601,WHITE);
            setfillstyle(1,GREEN);
            floodfill(601,731,WHITE);

            delay(1000);

            setfillstyle(1,BLACK);
            floodfill(601,731,WHITE);
}



getch();
closegraph();
return 0;

}


