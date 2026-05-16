// Desafio:=====================================================================================================================================
# include "raylib.h"
 
 int main(){
     
     Texture2D mario;
     Texture2D luigi;
     
  InitWindow(800, 600, "Meu Primeiro Personagem");
  
  mario = LoadTexture("mario.png");
  luigi = LoadTexture("luigi.png");
  
  while(!WindowShouldClose()){
  
  BeginDrawing();
  
   ClearBackground(RAYWHITE);
  
  DrawTexture(mario, 0, 10, WHITE);
  
  DrawTexture(luigi, 50, 250, WHITE);
  
  
  EndDrawing();
  }
   
  UnloadTexture(mario);
  UnloadTexture(luigi);
  CloseWindow();
  
  return 0;
 
 }
//=====================================================================================================================================
// Desafio Extra: =====================================================================================================================
# include "raylib.h"
 
 int main(){
     
     Texture2D mario;
     Texture2D koopa;
     Texture2D casco;
     
  InitWindow(800, 600, "Meu Primeiro Personagem");
  
  mario = LoadTexture("mario.png");
  koopa = LoadTexture("koopa.png");
  casco = LoadTexture("casco.png");
  
  while(!WindowShouldClose()){
  
  BeginDrawing();
  
   ClearBackground(RAYWHITE);
  
  DrawTexture(mario, 0, 200, WHITE);
  
  DrawTexture(koopa, 600, 200, WHITE);
  
  DrawTexture(casco, 203, 0, WHITE);
  
  EndDrawing();
  }
   
  UnloadTexture(mario);
  UnloadTexture(koopa);
  UnloadTexture(casco);
   
  CloseWindow();
  
  return 0;
 
 }
//====================================================================================================================================
// Desafio Extra:=====================================================================================================================
# include "raylib.h"
 
 int main(){
     
     Texture2D mario;
     Texture2D koopa;
     Texture2D casco;
     
  InitWindow(800, 600, "Meu Primeiro Personagem");
  
  mario = LoadTexture("mario.png");
  koopa = LoadTexture("koopa.png");
  casco = LoadTexture("casco.png");
  
  while(!WindowShouldClose()){
  
  BeginDrawing();
  
   ClearBackground(RAYWHITE);
  
  DrawTexture(mario, 0, 200, BLUE);
  
  DrawTexture(koopa, 600, 200, RED);
  
  DrawTexture(casco, 203, 0, GREEN);
    
  EndDrawing();
  }

  UnloadTexture(mario);
  UnloadTexture(koopa);
  UnloadTexture(casco);

  CloseWindow();
  
  return 0;
