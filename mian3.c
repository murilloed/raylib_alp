#include "raylib.h"

int main()
{
    InitWindow(800, 600, "Meu Primeiro Game");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        
       DrawRectangle(50, 50, 100, 100, RED);
       
       DrawRectangle(100, 100, 150, 165, GREEN);
       
       DrawRectangle(165, 165, 50, 50 , YELLOW);
        
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
