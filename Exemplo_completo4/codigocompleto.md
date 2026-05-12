# Explicação Completa da Hierarquia do Código Raylib

```c
#include <stdio.h>
#include "raylib.h"

int main()
{
    Texture2D sprite;
    Sound sound;
    Music music;
    
    InitWindow(800, 450, "basic window");
    
    InitAudioDevice();
    
    sprite = LoadTexture("feliz.png");
    sound = LoadSound("tiro.mp3");
    music = LoadMusicStream("fundo.ogg");
    
    float posX = -sprite.width;
    
    PlayMusicStream(music);
    
    while(!WindowShouldClose())
    {
        UpdateMusicStream(music);
        
        posX += GetFrameTime() * 300;
        
        if (posX > 800)
        {
            posX = -sprite.width;
        }
        
        if (IsKeyPressed(KEY_SPACE))
        {
            StopMusicStream(music);
            PlayMusicStream(music);
        }
        
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            Rectangle spriteRect = {
                posX,
                10,
                sprite.width,
                sprite.height
            };
            
            if (CheckCollisionPointRec(GetMousePosition(), spriteRect))
            {
                PlaySound(sound);
            }
        }
        
        BeginDrawing();
        
            ClearBackground(RAYWHITE);
            
            DrawTexture(sprite, posX, 10, WHITE);
            
        EndDrawing();
    }
    
    StopMusicStream(music);
    
    UnloadTexture(sprite);
    UnloadSound(sound);
    UnloadMusicStream(music);
    
    CloseAudioDevice();
    
    CloseWindow();
    
    return 0;
}
```

---

# Estrutura Geral do Programa

A hierarquia do código existe porque algumas coisas precisam acontecer antes de outras.

O fluxo correto de um jogo normalmente é:

```text
1. Importar bibliotecas
2. Declarar variáveis
3. Criar janela
4. Iniciar áudio
5. Carregar arquivos
6. Iniciar música
7. Entrar no loop do jogo
8. Atualizar lógica
9. Desenhar na tela
10. Sair do loop
11. Liberar memória
12. Fechar sistemas
```

---

# 1. Bibliotecas

```c
#include <stdio.h>
#include "raylib.h"
```

## Para que serve?

### stdio.h

Biblioteca padrão do C.

Ela fornece:
- printf
- scanf
- entrada e saída

Nesse programa ela não está sendo usada diretamente.

---

### raylib.h

Importa a biblioteca Raylib.

Ela fornece funções como:

```c
InitWindow()
DrawTexture()
PlaySound()
```

---

## Por que vem primeiro?

Porque o compilador precisa conhecer as funções antes de compilar o restante do código.

---

# 2. Função main()

```c
int main()
```

## Para que serve?

É o ponto de entrada do programa.

Todo programa em C começa pela função:

```c
main()
```

---

## Por que vem depois dos includes?

Porque primeiro o compilador precisa conhecer as bibliotecas.

Depois o programa pode começar.

---

# 3. Declaração das variáveis

```c
Texture2D sprite;
Sound sound;
Music music;
```

## Para que serve?

Cria variáveis para armazenar:

| Variável | Guarda |
|---|---|
| sprite | imagem |
| sound | efeito sonoro |
| music | música de fundo |

---

## Por que vem antes do carregamento?

Porque antes de usar:

```c
sprite = LoadTexture(...)
```

a variável precisa existir.

---

# 4. Criar a janela

```c
InitWindow(800, 450, "basic window");
```

## Para que serve?

Cria a janela gráfica do jogo.

---

## Parâmetros

| Valor | Significado |
|---|---|
| 800 | largura |
| 450 | altura |
| basic window | título |

---

## Por que vem antes do desenho?

Porque não existe tela para desenhar antes da janela existir.

---

# 5. Iniciar áudio

```c
InitAudioDevice();
```

## Para que serve?

Inicializa o sistema de áudio.

---

## Por que vem antes de carregar sons?

Porque primeiro o sistema de áudio precisa estar funcionando.

Depois os sons podem ser carregados.

---

# 6. Carregar arquivos

```c
sprite = LoadTexture("feliz.png");
sound = LoadSound("tiro.mp3");
music = LoadMusicStream("fundo.ogg");
```

## Para que serve?

Carrega:

| Função | Tipo |
|---|---|
| LoadTexture | imagem |
| LoadSound | efeito sonoro |
| LoadMusicStream | música |

---

## Por que vem depois da janela e do áudio?

Porque:
- textura depende da GPU
- som depende do sistema de áudio

---

# 7. Posição inicial

```c
float posX = -sprite.width;
```

## Para que serve?

Define a posição inicial do sprite.

---

## Por que usar negativo?

Faz o sprite começar fora da tela.

---

## Por que vem depois de LoadTexture?

Porque:

```c
sprite.width
```

só existe depois que a imagem foi carregada.

---

# 8. Iniciar música

```c
PlayMusicStream(music);
```

## Para que serve?

Começa a tocar a música.

---

## Por que vem antes do loop?

Porque a música deve iniciar uma vez antes do jogo começar.

---

# 9. Loop principal

```c
while(!WindowShouldClose())
```

## Para que serve?

Mantém o jogo rodando.

---

## O que acontece dentro do loop?

```text
atualizar
↓
desenhar
↓
mostrar
↓
repetir
```

---

## Por que isso é importante?

Sem loop:
- o jogo abriria
- desenharia uma vez
- fecharia imediatamente

---

# 10. Atualizar música

```c
UpdateMusicStream(music);
```

## Para que serve?

Mantém a música tocando continuamente.

---

## Por que fica dentro do loop?

Porque a música precisa ser atualizada constantemente.

---

# 11. Movimento do sprite

```c
posX += GetFrameTime() * 300;
```

## Para que serve?

Move o sprite horizontalmente.

---

## O que significa?

```text
posição += velocidade × tempo
```

---

## Por que vem antes do desenho?

Porque primeiro atualizamos a posição.

Depois desenhamos.

---

# 12. Verificar saída da tela

```c
if (posX > 800)
{
    posX = -sprite.width;
}
```

## Para que serve?

Quando o sprite sai da tela:
- ele volta para esquerda.

---

## Por que vem depois do movimento?

Porque primeiro ele precisa andar.

Depois verificamos se saiu da tela.

---

# 13. Reiniciar música

```c
if (IsKeyPressed(KEY_SPACE))
```

## Para que serve?

Detecta quando o jogador aperta espaço.

---

## O que acontece?

```c
StopMusicStream(music);
PlayMusicStream(music);
```

A música reinicia.

---

## Por que fica dentro do loop?

Porque teclado precisa ser verificado continuamente.

---

# 14. Detectar clique do mouse

```c
if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
```

## Para que serve?

Detecta clique do mouse.

---

## Por que fica dentro do loop?

Porque o jogo precisa verificar mouse constantemente.

---

# 15. Criar área do sprite

```c
Rectangle spriteRect = {
    posX,
    10,
    sprite.width,
    sprite.height
};
```

## Para que serve?

Cria uma área invisível para colisão.

---

## O que representa?

| Valor | Significado |
|---|---|
| posX | posição X |
| 10 | posição Y |
| width | largura |
| height | altura |

---

# 16. Verificar colisão

```c
CheckCollisionPointRec(GetMousePosition(), spriteRect)
```

## Para que serve?

Verifica se o mouse clicou dentro do sprite.

---

## Se acertar

```c
PlaySound(sound);
```

toca o som.

---

# 17. BeginDrawing()

```c
BeginDrawing();
```

## Para que serve?

Inicia um novo frame gráfico.

---

## O que significa?

```text
“vou começar a desenhar”
```

---

## Por que vem antes do desenho?

Porque tudo precisa acontecer entre:

```c
BeginDrawing();
EndDrawing();
```

---

# 18. Limpar tela

```c
ClearBackground(RAYWHITE);
```

## Para que serve?

Apaga o frame anterior.

---

## Por que vem antes do DrawTexture?

Porque primeiro limpamos a tela.

Depois desenhamos.

---

# 19. DrawTexture()

```c
DrawTexture(sprite, posX, 10, WHITE);
```

## Para que serve?

Desenha o sprite na tela.

---

## Parâmetros

| Parâmetro | Significado |
|---|---|
| sprite | imagem |
| posX | posição horizontal |
| 10 | posição vertical |
| WHITE | cor original |

---

# 20. EndDrawing()

```c
EndDrawing();
```

## Para que serve?

Finaliza o frame.

---

## O que acontece?

O frame é enviado para GPU e mostrado no monitor.

---

# 21. StopMusicStream()

```c
StopMusicStream(music);
```

## Para que serve?

Para a música quando o jogo termina.

---

# 22. Liberar memória

```c
UnloadTexture(sprite);
UnloadSound(sound);
UnloadMusicStream(music);
```

## Para que serve?

Libera:
- VRAM
- RAM
- buffers de áudio

---

## Por que vem depois do loop?

Porque o jogo ainda precisava usar esses recursos.

---

# 23. Fechar áudio

```c
CloseAudioDevice();
```

## Para que serve?

Desliga o sistema de áudio.

---

# 24. Fechar janela

```c
CloseWindow();
```

## Para que serve?

Fecha a janela do jogo.

---

# 25. Finalizar programa

```c
return 0;
```

## Para que serve?

Informa ao sistema operacional:

```text
programa terminou corretamente
```

---

# Fluxo Completo do Programa

```text
IMPORTAR BIBLIOTECAS
        ↓
CRIAR VARIÁVEIS
        ↓
CRIAR JANELA
        ↓
INICIAR ÁUDIO
        ↓
CARREGAR IMAGEM/SOM/MÚSICA
        ↓
INICIAR MÚSICA
        ↓
ENTRAR NO LOOP
        ↓
ATUALIZAR MÚSICA
        ↓
ATUALIZAR POSIÇÃO
        ↓
VERIFICAR TECLADO/MOUSE
        ↓
VERIFICAR COLISÃO
        ↓
COMEÇAR FRAME
        ↓
LIMPAR TELA
        ↓
DESENHAR SPRITE
        ↓
FINALIZAR FRAME
        ↓
REPETIR
        ↓
SAIR DO LOOP
        ↓
PARAR MÚSICA
        ↓
LIBERAR MEMÓRIA
        ↓
FECHAR ÁUDIO
        ↓
FECHAR JANELA
        ↓
FINALIZAR PROGRAMA
```

---

# Conceito Mais Importante

A ordem do código existe porque:

```text
não posso desenhar antes de criar janela
não posso tocar som antes de iniciar áudio
não posso usar imagem antes de carregar
não posso liberar memória antes de terminar o jogo
```

Toda engine de jogos segue uma hierarquia parecida.