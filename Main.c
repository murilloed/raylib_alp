#include "raylib.h"
//Atividade 2
int main()
{
    InitWindow(800, 600, "Formas Geo");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(100, 100 ,100, 100, RED);
        
        DrawRectangle(300, 120 ,200, 100, GREEN);
        
        DrawRectangle(550, 300 ,100, 100, YELLOW);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
