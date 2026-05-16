#include "raylib.h"

int main()
{
    InitWindow(800, 450, "basic window");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(60, 60, 100, 100, RED);

        DrawRectangle(60, 300, 100, 100, YELLOW);
        
        DrawRectangle(400, 60, 200, 100, GREEN);
        
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
