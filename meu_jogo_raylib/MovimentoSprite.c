#include "raylib.h"

int main(void)
{
    const int screenWidth = 1000;
    const int screenHeight = 650;

    InitWindow(screenWidth, screenHeight, "Exercicio 6 - Delta Time");
    SetTargetFPS(60); // Teste depois com 10, 30 e 60

    // Textura (troque para o nome real que voce tiver em assets)
    Texture2D sprite = LoadTexture("meu_jogo_raylib/assets/personagem.png");

    // Figura 1 (lenta)
    float posLentaX = 40.0f;
    float posLentaY = 120.0f;
    float velLenta = 100.0f; // teste 100

    // Figura 2 (rapida)
    float posRapidaX = 40.0f;
    float posRapidaY = 280.0f;
    float velRapida = 300.0f; // teste 300

    // Figura 3 (super rapida)
    float posSuperX = 40.0f;
    float posSuperY = 460.0f;
    float velSuper = 600.0f; // teste 600

    // Super desafio: movimento diagonal
    float posDiagX = 40.0f;
    float posDiagY = 40.0f;
    float velDiagX = 300.0f;
    float velDiagY = 100.0f;

    while (!WindowShouldClose())
    {
        // Delta time = tempo do frame atual (em segundos)
        float dt = GetFrameTime();

        // UPDATE com movimento profissional: pixels por segundo
        posLentaX += dt * velLenta;
        posRapidaX += dt * velRapida;
        posSuperX += dt * velSuper;

        // Super desafio: diagonal
        posDiagX += dt * velDiagX;
        posDiagY += dt * velDiagY;

        // Reinicio quando sair da tela (horizontal)
        if (posLentaX > screenWidth) posLentaX = -sprite.width;
        if (posRapidaX > screenWidth) posRapidaX = -sprite.width;
        if (posSuperX > screenWidth) posSuperX = -sprite.width;

        // Reinicio diagonal quando sair da tela
        if (posDiagX > screenWidth || posDiagY > screenHeight)
        {
            posDiagX = -sprite.width;
            posDiagY = -sprite.height;
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Delta Time: teste velocidades 100, 300, 600", 20, 10, 24, DARKGRAY);
        DrawText(TextFormat("FPS atual: %d", GetFPS()), 20, 45, 20, BLUE);

        // Desafio extra: lenta x rapida
        DrawTexture(sprite, (int)posLentaX, (int)posLentaY, GREEN); // lenta
        DrawTexture(sprite, (int)posRapidaX, (int)posRapidaY, WHITE); // rapida
        DrawTexture(sprite, (int)posSuperX, (int)posSuperY, RED); // super rapida

        // Super desafio: diagonal
        DrawTexture(sprite, (int)posDiagX, (int)posDiagY, YELLOW);

        DrawText("Lenta (100)", 20, 140, 18, DARKGREEN);
        DrawText("Rapida (300)", 20, 300, 18, BLACK);
        DrawText("Super (600)", 20, 480, 18, MAROON);
        DrawText("Diagonal (300,100)", 20, 80, 18, ORANGE);

        EndDrawing();
    }

    UnloadTexture(sprite);
    CloseWindow();
    return 0;
}
