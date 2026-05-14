#include "raylib.h"

int main()
{
    InitWindow(800, 600, "Construindo Formas");

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
