#include "raylib.h"

int main(void)
{
    const int screenWidth = 900;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Exercicio 7 - Audio");
    SetTargetFPS(60);

    // Inicializa sistema de audio da raylib
    InitAudioDevice();

    // Carrega efeitos sonoros (troque pelos seus arquivos reais)
    // Exemplo de extensoes: .wav, .ogg
    Sound somTiro = LoadSound("meu_jogo_raylib/assets/tiro.wav");
    Sound somExplosao = LoadSound("meu_jogo_raylib/assets/explosao.wav");
    Sound somMoeda = LoadSound("meu_jogo_raylib/assets/moeda.wav");

    while (!WindowShouldClose())
    {
        // Clique esquerdo do mouse -> toca som de moeda
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            PlaySound(somMoeda);
        }

        // Barra de espaco -> toca som de tiro
        if (IsKeyPressed(KEY_SPACE))
        {
            PlaySound(somTiro);
        }

        // Clique direito do mouse -> toca som de explosao (extra util)
        if (IsMouseButtonPressed(MOUSE_BUTTON_RIGHT))
        {
            PlaySound(somExplosao);
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Exercicio 7 - Criando Sons do Jogo", 20, 20, 30, DARKGRAY);
        DrawText("Clique ESQUERDO: som de moeda", 20, 90, 24, GREEN);
        DrawText("Pressione ESPACO: som de tiro", 20, 130, 24, BLUE);
        DrawText("Clique DIREITO: som de explosao", 20, 170, 24, RED);

        EndDrawing();
    }

    // Libera recursos de audio
    UnloadSound(somTiro);
    UnloadSound(somExplosao);
    UnloadSound(somMoeda);

    // Fecha sistema de audio
    CloseAudioDevice();

    CloseWindow();
    return 0;
}
