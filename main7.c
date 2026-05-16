#include "raylib.h"

int main()
{
    float posX = -100;
    Texture2D sprite;

    InitWindow(800, 450, "Experimento FPS");

    float velocidade = 600.0f; 

    SetTargetFPS(60); 

    sprite = LoadTexture("sprite.png");

    while (!WindowShouldClose())
    {
        posX += GetFrameTime() * velocidade;

        if (posX > 800)
        {
            posX = -100;
        }

        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawTexture(sprite, (int)posX, 10, WHITE);
            DrawFPS(10, 10); 
        EndDrawing();
    }

    UnloadTexture(sprite);
    CloseWindow();

    return 0;
}
