// Testando o código para 10 de fps com uma velocidade de 100frames:=========================================================================================================
# include "raylib.h"
int main(){
    
    float velocidadeX = -100;
    
    SetTargetFPS(10);
    
    Texture2D carro;
    
    InitWindow(800, 600, "Movimento Sprite Delta Time");
  
    carro = LoadTexture("carro.png");    
    
    while(!WindowShouldClose()){
        
        velocidadeX += GetFrameTime() * 100;
        if (velocidadeX > 800){
            velocidadeX = -100;
        }
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawTexture(carro, velocidadeX, 10, WHITE);

        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;   
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Testando o código para 30 fps com uma velocidade de 100 frames:===========================================================================================================
# include "raylib.h"

int main(){
    
    float velocidadeX = -100;
    
    SetTargetFPS(30);
    
    Texture2D carro;
    
    InitWindow(800, 600, "Movimento Sprite Delta Time");
  
    carro = LoadTexture("carro.png");    
    
    while(!WindowShouldClose()){
        
        velocidadeX += GetFrameTime() * 100;
        if (velocidadeX > 800){
            velocidadeX = -100;
        }
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawTexture(carro, velocidadeX, 10, WHITE);

        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;   
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Testando o código para 60 fps com uma velocidade de 100 frames:===========================================================================================================
int main(){
    
    float velocidadeX = -100;
    
    SetTargetFPS(60);
    
    Texture2D carro;
    
    InitWindow(800, 600, "Movimento Sprite Delta Time");
  
    carro = LoadTexture("carro.png");    
    
    while(!WindowShouldClose()){
        
        velocidadeX += GetFrameTime() * 100;
        if (velocidadeX > 800){
            velocidadeX = -100;
        }
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawTexture(carro, velocidadeX, 10, WHITE);

        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;   
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Testando o código para 10 fps com uma velocidade de 200 frames:===========================================================================================================
# include "raylib.h"

int main(){
    
    float velocidadeX = -100;
    
    SetTargetFPS(10);
    
    Texture2D carro;
    
    InitWindow(800, 600, "Movimento Sprite Delta Time");
  
    carro = LoadTexture("carro.png");    
    
    while(!WindowShouldClose()){
        
        velocidadeX += GetFrameTime() * 200;
        if (velocidadeX > 800){
            velocidadeX = -100;
        }
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawTexture(carro, velocidadeX, 10, WHITE);

        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Testando o código para 30 fps com uma velocidade de 200 frames:===========================================================================================================
# include "raylib.h"

int main(){
    
    float velocidadeX = -100;
    
    SetTargetFPS(30);
    
    Texture2D carro;
    
    InitWindow(800, 600, "Movimento Sprite Delta Time");
  
    carro = LoadTexture("carro.png");    
    
    while(!WindowShouldClose()){
        
        velocidadeX += GetFrameTime() * 200;
        if (velocidadeX > 800){
            velocidadeX = -100;
        }
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawTexture(carro, velocidadeX, 10, WHITE);

        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Testando o código para 60 fps com uma velocidade de 200 frames:===========================================================================================================
# include "raylib.h"

int main(){
    
    float velocidadeX = -100;
    
    SetTargetFPS(60);
    
    Texture2D carro;
    
    InitWindow(800, 600, "Movimento Sprite Delta Time");
  
    carro = LoadTexture("carro.png");    
    
    while(!WindowShouldClose()){
        
        velocidadeX += GetFrameTime() * 200;
        if (velocidadeX > 800){
            velocidadeX = -100;
        }
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawTexture(carro, velocidadeX, 10, WHITE);

        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Testando o código para 10 fps com uma velocidade de 300 frames:===========================================================================================================
# include "raylib.h"

int main(){
    
    float velocidadeX = -100;
    
    SetTargetFPS(10);
    
    Texture2D carro;
    
    InitWindow(800, 600, "Movimento Sprite Delta Time");
  
    carro = LoadTexture("carro.png");    
    
    while(!WindowShouldClose()){
        
        velocidadeX += GetFrameTime() * 300;
        if (velocidadeX > 800){
            velocidadeX = -100;
        }
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawTexture(carro, velocidadeX, 10, WHITE);

        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Testando o código para 30 fps com uma velocidade de 300 frames:===========================================================================================================
# include "raylib.h"

int main(){
    
    float velocidadeX = -100;
    
    SetTargetFPS(30);
    
    Texture2D carro;
    
    InitWindow(800, 600, "Movimento Sprite Delta Time");
  
    carro = LoadTexture("carro.png");    
    
    while(!WindowShouldClose()){
        
        velocidadeX += GetFrameTime() * 300;
        if (velocidadeX > 800){
            velocidadeX = -100;
        }
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawTexture(carro, velocidadeX, 10, WHITE);

        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Testando o código para 60 fps com uma velocidade de 300 frames:===========================================================================================================
# include "raylib.h"

int main(){
    
    float velocidadeX = -100;
    
    SetTargetFPS(60);
    
    Texture2D carro;
    
    InitWindow(800, 600, "Movimento Sprite Delta Time");
  
    carro = LoadTexture("carro.png");    
    
    while(!WindowShouldClose()){
        
        velocidadeX += GetFrameTime() * 300;
        if (velocidadeX > 800){
            velocidadeX = -100;
        }
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawTexture(carro, velocidadeX, 10, WHITE);

        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
/*Conclusão: O movimento da figura nos códigos mudou, uma vez que nos códigos foi especiaficado diferentes FPS e diferentes velocidades por frame.*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Desafio Extra:
# include "raylib.h"

int main(){
    
    float velocidadeX = -100;
    float velocidadeX1 = -100;
    float velocidade_carro1 = 210;
    float velocidade_carro2 = 185;
    
    SetTargetFPS(60);
    
    Texture2D carro;
    
    InitWindow(800, 600, "Movimento Sprite Delta Time");
  
    carro = LoadTexture("carro.png");    
    
    while(!WindowShouldClose()){
        
        velocidadeX += GetFrameTime() * velocidade_carro1;  // Figura rápida
        if (velocidadeX > 800){
            velocidadeX = -100;
        }
        velocidadeX1 += GetFrameTime() * velocidade_carro2;  // Figura lenta
        if (velocidadeX1 > 800){
            velocidadeX1 = -100;
        }
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawTexture(carro, velocidadeX, 10, WHITE);
        DrawTexture(carro, velocidadeX1, 195, WHITE);

        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}

// Super Desafio:
# include "raylib.h"

int main(){
    
    float velocidadeX = -100;
    float velocidadeY = 0;    
    
    SetTargetFPS(60);
    
    Texture2D aviao;
    
    InitWindow(800, 600, "Movimento Sprite Delta Time");
  
    aviao = LoadTexture("aviao.png");    
    
    while(!WindowShouldClose()){
        
        velocidadeX += GetFrameTime() * 300;
        if (velocidadeX > 800){
            velocidadeX = 0;
        }
        velocidadeY += GetFrameTime() * 100;
        if (velocidadeY > 100){
            velocidadeY = 0;
        }
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawTexture(aviao,velocidadeX, velocidadeY, WHITE);

        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
