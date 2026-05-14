#include "raylib.h"

int main()
{
    InitWindow(800, 600, "Meu Primeiro Game");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle (100, 100, 100, 100, RED);
        DrawRectangle(200, 200, 200,100, BLUE);
        DrawRectangle (400, 300, 100, 100, YELLOW);


        EndDrawing();
    }

    CloseWindow();

    return 0;
}
