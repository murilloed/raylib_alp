#include "raylib.h"

int main()
{
    float posX = -100; 
    Texture2D sprite;
    Sound tiro; 

    InitWindow(800, 450, "basic window");
    InitAudioDevice(); 

    sprite = LoadTexture("sprite.png");
    tiro = LoadSound("tiro.ogg"); 

    while (!WindowShouldClose())
    {
        posX += GetFrameTime() * 300;

        if (posX > 800)
        {
            posX = -100;
        }

        if (IsKeyPressed(KEY_SPACE) || IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            PlaySound(tiro);
        }

        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawTexture(sprite, posX, 10, WHITE);
        EndDrawing();
    }

    UnloadSound(tiro); 
    CloseAudioDevice();
    CloseWindow();

    return 0;
}
