#include <stdio.h>

#define WIDTH 10
#define HEIGHT 10

int screen[WIDTH][HEIGHT] = {
        -1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,
        -1,	-1,	 0,	 0,	-1,	-1,	-1,	 0,	-1,	-1,
        -1,	-1,	-1,	 0,	 0,	 0,	 0,	 0,	-1,	-1,
        -1,	-1,	-1,	 0,	-1,	-1,	-1,	-1,	-1,	-1,
        -1,	-1,	-1,	 0,	 0,	 0,	 0,	 0,	-1,	-1,
        -1,	-1,	-1,  0,	-1,	 0,	-1,	-1,	-1,	-1,
        -1,	-1,	-1,	 0,	-1,	 0,	-1,	-1,	-1,	-1,
        -1,	-1,	-1,	 0,	-1,	 0,	 0,	 0,	-1,	-1,
        -1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,
        -1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1
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
void flood_fill(int x, int y)
{
    static int count = 1;
    if (screen[x][y] == 0) {
        screen[x][y] = count++;
        flood_fill(x, y + 1); // 오른 쪽 3시
        flood_fill(x + 1, y); // 아래 쪽 6시
        flood_fill(x, y - 1); // 왼쪽 9시
        flood_fill(x - 1, y); // 위쪽 12시
    }

}

int main(void)
{
    display();
    flood_fill(4, 3);
    printf("\n");
    display();
}