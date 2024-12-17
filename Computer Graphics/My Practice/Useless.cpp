
#include<stdio.h>
#include<graphics.h>

using namespace std;
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");

    line(70,30,70,100);
    arc(70,47.5,270,90,18);
    line(70,65,100,100);
    //arc(70,47.5,270,90,18);
    //line(70,100,120,100);
    //line(70,30,70,65);
    //line(70,65,120,65);
    //line(120,65,120,100);


    getch();
    closegraph();
    return 0;
}



// MD FAHAD  MH NAYEM MUUHIB HASAN OHI FARZANA AFRIN SHILA
