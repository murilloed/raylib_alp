int main(){
    
    int velocidadeX = 0;
    
    InitWindow(800, 600, "Quadrado Animado");
    
    while(!WindowShouldClose()){
        
        velocidadeX++;
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawRectangle(velocidadeX, 100, 100, 100, RED);

        if (velocidadeX > 800){
          velocidadeX = 0;
        }
        
        EndDrawing();
    }
    CloseWindow();

// Desfio Extra
# include "raylib.h"

int main(){
    
    int velocidadeX = 0;
    int velocidade1X = 0;
    
    InitWindow(800, 600, "Quadrados Animados");
    
    while(!WindowShouldClose()){
        
        velocidadeX += 850 * GetFrameTime();
        velocidade1X -= 850 * GetFrameTime();
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawRectangle(velocidadeX, 100, 100, 100, BLUE);
 
        
        DrawRectangle(velocidade1X, 350, 100 , 100, RED);
       
        EndDrawing();
    }
    CloseWindow();

   // Super Desafio
   # include "raylib.h"

int main(){
    
    int velocidadeX = 0;
    
    InitWindow(800, 600, "Quadrado Animado");
    
    while(!WindowShouldClose()){
        
        velocidadeX += 1;
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        DrawRectangle(velocidadeX,100, 100, 100, GREEN);
        
        if (velocidadeX > 1000){
            velocidadeX = 0;
        }
        
        EndDrawing();
    }
    CloseWindow();
    
  


