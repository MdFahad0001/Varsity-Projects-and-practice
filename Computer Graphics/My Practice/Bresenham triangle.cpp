#include <iostream>
#include <graphics.h>

using namespace std;

// Define screen dimensions
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

// Define the three vertices of the triangle
int vertices[3][2] = { {100, 100}, {300, 400}, {500, 100} };

// Define the line drawing function using Bresenham's algorithm
void bresenham_line(int x0, int y0, int x1, int y1) {
    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);
    int x = x0, y = y0;
    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;
    if (dx > dy) {
        int err = dx / 2;
        while (x != x1) {
            putpixel(x, y, WHITE);
            err -= dy;
            if (err < 0) {
                y += sy;
                err += dx;
            }
            x += sx;
        }
    }
    else {
        int err = dy / 2;
        while (y != y1) {
            putpixel(x, y, WHITE);
            err -= dx;
            if (err < 0) {
                x += sx;
                err += dy;
            }
            y += sy;
        }
    }
    putpixel(x, y, WHITE);
}

int main() {
    // Initialize graphics window
    initwindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Bresenham Triangle");

    // Draw the triangle
    for (int i = 0; i < 3; i++) {
        int x0 = vertices[i][0];
        int y0 = vertices[i][1];
        int x1 = vertices[(i+1)%3][0];
        int y1 = vertices[(i+1)%3][1];
        bresenham_line(x0, y0, x1, y1);
    }

    // Wait for the user to close the window
    getch();

    // Close the graphics window
    closegraph();
    return 0;
}
