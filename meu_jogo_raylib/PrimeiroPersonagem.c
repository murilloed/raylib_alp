#include "raylib.h"

int main(void)
{
    const int screenWidth = 900;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Exercicio 5 - Texturas e Sprites");
    SetTargetFPS(60);

    // Carrega as imagens (ajuste os nomes conforme seus arquivos em assets/)
    // Exemplo: personagem.png, inimigo.png, item.png
    Texture2D personagem = LoadTexture("meu_jogo_raylib/assets/personagem.png");
    Texture2D inimigo = LoadTexture("meu_jogo_raylib/assets/inimigo.png");
    Texture2D item = LoadTexture("meu_jogo_raylib/assets/item.png");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // EXERCICIO BASE:
        // 2 imagens diferentes em posicoes diferentes
        DrawTexture(personagem, 120, 220, WHITE);
        DrawTexture(inimigo, 420, 220, WHITE);

        // DESAFIO EXTRA:
        // personagem + inimigo + item
        DrawTexture(item, 700, 240, WHITE);

        // SUPER DESAFIO:
        // mesmas figuras com "tinta" de cor (multiplica a cor da textura)
        // Dica: se a textura for totalmente branca, a tintura aparece forte.
        DrawTexture(personagem, 120, 80, RED);
        DrawTexture(inimigo, 420, 80, GREEN);
        DrawTexture(item, 700, 80, BLUE);

        DrawText("Base: 2 imagens | Extra: personagem+inimigo+item | Super: tintas RGB", 20, 20, 20, DARKGRAY);

        EndDrawing();
    }

    // Libera memoria das texturas
    UnloadTexture(personagem);
    UnloadTexture(inimigo);
    UnloadTexture(item);

    CloseWindow();
    return 0;
}
