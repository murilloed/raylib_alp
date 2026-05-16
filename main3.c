#include "raylib.h"

int main()
{
    int posX = 0;

    InitWindow(800, 450, "basic window");

    while (!WindowShouldClose())
    {
        posX++;

        if (posX > 800) 
        {
            posX = 0;
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(posX, 100, 100, 100, RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
