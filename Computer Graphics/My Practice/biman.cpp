#include<iostream>
#include<graphics.h>

using namespace std;
int main(){
///Airplane

int i;
    int gdrive=DETECT, gmode;
    initgraph(&gdrive,&gmode,"C\\TV\\bgi");
    initwindow(1000,1000, "nayem");

        line(30+i,416-i,10+i,357-i);
        line(10+i,357-i,54+i,396-i);
        line(54+i,396-i,259+i,341-i);
        line(54+i,396-i,191+i,327-i);
        line(191+i,327-i,203+i,355-i);
        line(30+i,416-i,282+i,343-i);
        line(191+i,327-i,282+i,343-i);
        line(107+i,382-i,73+i,454-i);
        line(73+i,454-i,157+i,369-i);
        line(105+i,370-i,43+i,351-i);
        line(43+i,351-i,142+i,351-i);

        getch();
    closegraph();
}
