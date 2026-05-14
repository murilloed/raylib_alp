#include "raylib.h"

int main()
{
    InitWindow(800, 600, "Meu Jogo");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Bem -vindo ao Raylib", 10, 10, 40, BLUE);
        DrawText("Pressione ESC para sair", 45, 45, 40, BLUE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

