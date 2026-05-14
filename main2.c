#include "raylib.h"
int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Meu Primeiro Game");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("Bem-Vindo ao Raylib", 170, 170, 40, BLUE);
        DrawText("Pressione ESC para sair", 240, 250, 24, DARKGRAY);
        DrawRectangle(0,0,50,50,RED);
        DrawRectangle(0,80,50,150,GREEN)
        DrawRectangle(60,0,50,50,YELLOW);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
