// Testendo o código para 10 fps:===============================================================================================================
int main(){
    
    int velocidadeX = 0;
    
    InitWindow(800,600, "Testando FPS");
    
    SetTargetFPS(10);
    
    while(!WindowShouldClose()){
        
        velocidadeX++;
        
        BeginDrawing();
        
       ClearBackground(RAYWHITE);
       
       DrawRectangle(velocidadeX, 100, 100, 100, BLUE);
       if (velocidadeX > 800){
         velocidadeX = 0;
       }
       
       DrawRectangle(velocidadeX, 250, 100, 100, GREEN);
       if (velocidade > 800){
         velocidadeX = 0;
       }
        
        EndDrawing();
        
    }
    CloseWindow();
    
    return 0;
}
// Testando código para 30 fps:===============================================================================================================
# include "raylib.h"

int main(){
    
    int velocidadeX = 0;
    
    InitWindow(800,600, "Testando FPS");
    
    SetTargetFPS(30);
    
    while(!WindowShouldClose()){
        
        velocidadeX++;
        
        BeginDrawing();
        
       ClearBackground(RAYWHITE);
       
       DrawRectangle(velocidadeX, 100, 100, 100, BLUE);
       if (velocidadeX > 800){
         velocidadeX = 0;
       }
       
       DrawRectangle(velocidadeX, 250, 100, 100, GREEN);
       if (velocidadeX > 800){
         velocidadeX = 0;
       }
        
        EndDrawing();
        
    }
    CloseWindow();
    
    return 0;
}

// Testando código para 60 fps:===============================================================================================================
# include "raylib.h"

int main(){
    
    int velocidadeX = 0;
    
    InitWindow(800,600, "Testando FPS");
    
    SetTargetFPS(60);
    
    while(!WindowShouldClose()){
        
        velocidadeX++;
        
        BeginDrawing();
        
       ClearBackground(RAYWHITE);
       
       DrawRectangle(velocidadeX, 100, 100, 100, BLUE);
       if (velocidadeX > 800){
           velocidadeX = 0;
       }
       
       DrawRectangle(velocidadeX, 250, 100, 100, GREEN);
       if (velocidadeX > 800){
           velocidadeX = 0;
       }
        
        EndDrawing();
        
    }
    CloseWindow();
    
    return 0;
}
//==================================================================================================================================
/* Respostas:
  *(1) O código que ficou mais suave foi o código que possui 60 frames por segundo (FPS);
  *(2) O código que ficou mais lento foi o código que possui 10 frames pot segundo (FPS);
  *(3) O movimento mudou, sendo que no código de 10 FPS pode se perceber uma movimentação dos quadrados Travada, por se apenas 10 imagens
   atualizadas po segundo. Diferente dos códigos de 30 e 60 FPS que apresentam um movimentação do quadrados mais suave.
*/

// Testando código sem o comando SetTargetFPS():
# include "raylib.h"

int main(){
    
    int velocidadeX = 0;
    
    InitWindow(800,600, "Testando FPS");
   
    
    while(!WindowShouldClose()){
        
        velocidadeX++;
        
        BeginDrawing();
        
       ClearBackground(RAYWHITE);
       
       DrawRectangle(velocidadeX, 100, 100, 100, BLUE);
       if (velocidadeX > 800){
           velocidadeX = 0;
       }
       
       DrawRectangle(velocidadeX, 250, 100, 100, GREEN);
       if (velocidadeX > 800){
           velocidadeX = 0;
       }
        
        EndDrawing();
        
    }
    CloseWindow();
    
    return 0;  
}
/*
 *Resposta (4):
 O código acima sem o comando SetTargetFPS() resultará em um programa em que não há o controle de quantas vezes o jogo atualiza por segundo, dando a
 impressão de um jogo em que a movimentação dos quadrados é mais "rápida".
*/
//===================================================================================================================================================
// Teste prático com DrawFPS(X, Y):
# include "raylib.h"

int main(){
    
    int velocidadeX = 0;
    
    InitWindow(800,600, "Testando FPS");
   
    
    while(!WindowShouldClose()){
        
        velocidadeX++;
        
        BeginDrawing();
        SetTargetFPS(60);
       ClearBackground(RAYWHITE);
       
       DrawRectangle(velocidadeX, 100, 100, 100, BLUE);
       if (velocidadeX > 800){
           velocidadeX = 0;
       }
       
       DrawRectangle(velocidadeX, 250, 100, 100, GREEN);
       if (velocidadeX > 800){
           velocidadeX = 0;
       }
       
       DrawFPS(10, 10);
       
        EndDrawing();
        
    }
    CloseWindow();
    
    return 0;   
}
    
