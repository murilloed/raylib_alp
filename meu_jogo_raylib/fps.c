#include "raylib.h"

// Exercicio 4 - Testando FPS
// Troque o valor de TARGET_FPS entre 10, 30 e 60 para comparar.
#define TARGET_FPS 60

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    // Posicao e tamanho do quadrado
    int x = 0;
    const int y = 260;
    const int size = 60;

    // Velocidade em "pixels por frame"
    // Com FPS baixo, o movimento parece mais "travado".
    const int speed = 4;

    InitWindow(screenWidth, screenHeight, "Exercicio 4 - FPS");
    SetTargetFPS(TARGET_FPS); // Controle de taxa de frames

    while (!WindowShouldClose())
    {
        // UPDATE: atualiza logica
        x += speed;

        // Quando sair da tela, volta ao inicio
        if (x > screenWidth)
        {
            x = -size;
        }

        // DRAW: desenha na tela
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Teste com SetTargetFPS(10), depois 30, depois 60", 20, 20, 20, DARKGRAY);
        DrawText(TextFormat("TARGET_FPS: %d", TARGET_FPS), 20, 55, 20, BLUE);
        DrawText(TextFormat("FPS atual: %d", GetFPS()), 20, 85, 20, RED);

        DrawRectangle(x, y, size, size, GREEN);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
