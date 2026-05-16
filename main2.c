//atividade2

#include "raylib.h"

int main()
{
    InitWindow(800, 450, "basic window");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(10, 10, 100, 100, RED);
        DrawRectangle(400, 100, 300, 100, GREEN);
        DrawRectangle(200, 200, 100, 100, YELLOW);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
