#include "raylib.h"

int main()
{
    InitWindow(800, 600, "Meu Primeiro Game");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(100, 100, 100, 100, RED);
        DrawRectangle(300, 100, 200, 50, GREEN);
        DrawRectangle(600, 100, 100, 100, YELLOW);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
