#include <stdio.h>

#define WIDTH 10
#define HEIGHT 10

int screen[WIDTH][HEIGHT] = {
         0, 0, 0,-1,-1,-1,-1,-1,-1,-1,
        -1,-1, 0,-1,-1,-1,-1,-1,-1,-1,
        -1, 0, 0, 0, 0, 0, 0,-1,-1,-1,
        -1,-1,-1,-1, 0,-1, 0,-1,-1,-1,
        -1,-1,-1,-1, 0,-1, 0,-1,-1,-1,
        -1,-1, 0, 0, 0,-1, 0, 0, 0,-1,
        -1,-1,-1,-1, 0,-1, 0,-1,-1,-1,
        -1,-1,-1,-1, 0,-1, 0,-1, 0,-1,
        -1,-1,-1,-1, 0,-1,-1,-1, 0,-1,
        -1,-1,-1,-1, 0, 0, 0, 0, 0, 0
};

void display()
{
    int x, y;
    for (x = 0; x < WIDTH; x++) {
        for (y = 0; y < HEIGHT; y++)
            printf("%3d", screen[x][y]);
        printf("\n");
    }
}

void flood_fill(int x, int y) {
    static int count = 1;

    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) {
        return;
    }

    if (screen[x][y] == 1) {
        return;
    }

    if (screen[x][y] == 0) {
        screen[x][y] = count++;

        flood_fill(x, y + 1);
        flood_fill(x + 1, y);
        flood_fill(x, y - 1);
        flood_fill(x - 1, y);
    }

}

int main(void)
{
    printf("미로:\n");
    display();

    flood_fill(0, 0);
    printf("\n시작점을 (0,0)으로 한 미로 방문<순서표기>:\n");
    display();
}