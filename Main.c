#include "raylib.h"

int main()
{
    InitWindow(800, 600, "Meu Jogo");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(PINK);

        DrawText("Felipe padarias", 20, 10, 40, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
