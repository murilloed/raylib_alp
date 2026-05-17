#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Atividade_02");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(100, 100, 100, 100, RED);

        DrawRectangle(300, 150, 220, 120, GREEN);

        DrawRectangle(560, 100, 120, 120, YELLOW);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
