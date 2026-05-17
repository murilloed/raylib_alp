#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Meu Primeiro Game");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Bem-vindo ao raylib", 20, 20, 40, BLUE);
        DrawText("Meu nome é Mateus", 20, 100, 40, DARKBLUE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
