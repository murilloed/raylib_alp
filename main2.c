#include "raylib.h"

int main()
{
    int posX = 0;
    
    InitWindow(800, 600, "Meu Primeiro Game");

    while (!WindowShouldClose())
    {
        posX++;
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(posX, 100, 100, 100, RED);
        
        if (posX > 800){
            posX = 0;
        }
        
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
