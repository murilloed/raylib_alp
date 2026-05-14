#include "raylib.h"

int main()
{
    InitWindow(800, 600, "Meu Primeiro Game");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Bem-vindo ao Raylib", 10, 10, 40, BLUE);
        DrawText("Pressione ESC para sair", 10, 10, 40, BLUE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
