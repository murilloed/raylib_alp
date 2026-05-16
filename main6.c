#include "raylib.h"

int main()
{
    Texture2D feliz;   
    
    Texture2D inimigo;

    InitWindow(800, 450, "basic window");

    feliz = LoadTexture("feliz.png");   
    
    inimigo = LoadTexture("inimigo.png");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTexture(feliz, 10, 10, WHITE);
        
        DrawTexture(inimigo, 50, 60, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
