#include "raylib.h"

int main(void)
{
    InitWindow(800, 600, "Exercicio 2 - Construindo Formas");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawRectangle(100, 120, 80, 80, RED);
        DrawRectangle(250, 100, 140, 70, GREEN);
        DrawRectangle(450, 150, 90, 90, YELLOW);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
