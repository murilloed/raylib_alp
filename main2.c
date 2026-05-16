#include "raylib.h"

int main()
{
    InitWindow(800, 600, "Meu Primeiro Game");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Bem-vindo ao raylib", 10, 10, 40, BLUE);
        
        DrawText("Aperte ESC para sair",45,45,35, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
