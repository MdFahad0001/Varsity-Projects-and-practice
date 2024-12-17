#include<iostream>
#include<conio.h>
#include<graphics.h>

int main()
{
    int gd = DETECT,gm;
    initwindow(600,600,"Emoji");



        rectangle(70,80,100,180);
        circle(85,95,12);

        circle(85,125,12);

        circle(85,155,12);



            while(1)//for(i=0;i<50;i++)
            {
                  setfillstyle(1,RED);
            floodfill(86,96,WHITE);

            delay(1000);

            setcolor(WHITE);
            setfillstyle(1,BLACK);
            floodfill(86,96,WHITE);
            setfillstyle(1,YELLOW);
            floodfill(86,126,WHITE);

            delay(1000);

            setcolor(WHITE);
            setfillstyle(1,BLACK);
            floodfill(86,126,WHITE);
            setfillstyle(1,GREEN);
            floodfill(86,156,WHITE);

            delay(1000);

            setfillstyle(1,BLACK);
            floodfill(86,156,WHITE);


            getch();
            closegraph();
            }

}
