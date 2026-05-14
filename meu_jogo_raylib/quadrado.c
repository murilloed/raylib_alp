#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    int x = 0;
    int y = 250;
    int size = 60;
    int speed = 4;

    InitWindow(screenWidth, screenHeight, "Exercicio 3 - Quadrado Animado");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        x += speed;

        if (x > screenWidth)
        {
            x = -size;
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawRectangle(x, y, size, size, RED);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
