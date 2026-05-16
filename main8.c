// Primeiro código:==========================================================================================================================================================
# include "raylib.h"

int main(){
    
    float posX = -100;
    
    Texture2D inimigo;
     
    Sound tiro;     
    
    SetTargetFPS(60);
    
    InitWindow(800, 600, "Sound Effects");
    
    InitAudioDevice();
  
    inimigo = LoadTexture("inimigo.png");   
    
    tiro = LoadSound("tiro.mp3");
    
    while(!WindowShouldClose()){
      posX += GetFrameTime() * 300;
      
      if (posX > 800){
          posX = -100;
      }
      if (IsKeyPressed(KEY_SPACE)){
          PlaySound(tiro);
      }
      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
          PlaySound(tiro);
      }
      BeginDrawing();
      
      ClearBackground(RAYWHITE);
      
      DrawTexture(inimigo, posX, 50, WHITE);
      
      DrawText("Para atirar, pressione espaço ou o butão esquerdo do mouse.", 0, 10 , 20, BLACK);
    
        EndDrawing();
    }
    
    UnloadSound(tiro);
    
    CloseAudioDevice();
    
    CloseWindow();
    
    return 0;
}
// Segundo código:==========================================================================================================================================================
# include "raylib.h"

int main(){
    
    float posX = -100;
    
    Texture2D moeda;
     
    Sound moeda;     
    
    SetTargetFPS(60);
    
    InitWindow(800, 600, "Sound Effects");
    
    InitAudioDevice();
  
    moeda = LoadTexture("moeda.png");   
    
    tiro = LoadSound("moeda.mp3");
    
    while(!WindowShouldClose()){
      posX += GetFrameTime() * 300;
      
      if (posX > 800){
          posX = -100;
      }
      if (IsKeyPressed(KEY_SPACE)){
          PlaySound(moeda);
      }
      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
          PlaySound(moeda);
      }
      BeginDrawing();
      
      ClearBackground(RAYWHITE);
      
      DrawTexture(moeda, posX, 50, WHITE);
      
      DrawText("Para coletar a moeda, pressione espaço ou o butão esquerdo do mouse.", 0, 10 , 20, BLACK);
    
        EndDrawing();
    }
    
    UnloadSound(moeda);
    
    CloseAudioDevice();
    
    CloseWindow();
    
    return 0;
}
// Terceiro código:=========================================================================================================================================================
# include "raylib.h"

int main(){
    
    Texture2D explosao_;
     
    Sound explosao;     
    
    SetTargetFPS(60);
    
    InitWindow(800, 600, "Sound Effects");
    
    InitAudioDevice();
  
    explosao_ = LoadTexture("explosao_.png");   
    
    explosao = LoadSound("explosao.mp3");
    
    while(!WindowShouldClose()){
        
      if (IsKeyPressed(KEY_SPACE)){
          PlaySound(explosao);
      }
      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
          PlaySound(explosao);
      }
      BeginDrawing();
      
      ClearBackground(RAYWHITE);
      
      DrawTexture(explosao_, 30, 30, WHITE);
      
      DrawText("Para a explosão, pressione espaço ou o butão esquerdo do mouse.", 0, 10 , 20, BLACK);
    
        EndDrawing();
    }
    
    UnloadSound(explosao);
    
    CloseAudioDevice();
    
    CloseWindow();
    
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Desafio Extra:
# include "raylib.h"

int main(){
    
    float posX = -100;
    
    Texture2D inimigo;
     
    Sound tiro;     
    
    Music music;
    
    SetTargetFPS(60);
    
    InitWindow(800, 600, "Sound Effects");
    
    InitAudioDevice();
  
    inimigo = LoadTexture("inimigo.png");   
    
    tiro = LoadSound("tiro.mp3");
    
    music = LoadMusicStream("fundo.mp3");
    
    PlayMusicStream(music);
    
    while(!WindowShouldClose()){
        
        UpdateMusicStream(music);
        
      posX += GetFrameTime() * 300;
      
      if (posX > 800){
          posX = -100;
      }
      if (IsKeyPressed(KEY_SPACE)){
          PlaySound(tiro);
      }
      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
          PlaySound(tiro);
      }
      BeginDrawing();
      
      ClearBackground(RAYWHITE);
      
      DrawTexture(inimigo, posX, 50, WHITE);
      
      DrawText("Para atirar, pressione espaço ou o butão esquerdo do mouse.", 0, 10 , 20, BLACK);
    
        EndDrawing();
    }
    
    StopMusicStream(music);
    
    UnloadSound(tiro);
    
    UnloadMusicStream(music);
    
    CloseAudioDevice();
    
    CloseWindow();
    
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Super Desafio:
# include "raylib.h"

int main(){
    
    float posX = -100;
    
    Texture2D inimigo;
     
    Sound tiro;
    
    Sound reload;    
    
    SetTargetFPS(60);
    
    InitWindow(800, 600, "Sound Effects");
    
    InitAudioDevice();
  
    inimigo = LoadTexture("inimigo.png");   
    
    tiro = LoadSound("tiro.mp3");
    
    reload = LoadSound("reload.mp3");
    
    while(!WindowShouldClose()){
        
      posX += GetFrameTime() * 300;
      
      if (posX > 800){
          posX = -100;
      }
      if (IsKeyPressed(KEY_SPACE)){
          PlaySound(reload);
      }
      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
          PlaySound(tiro);
      }
      BeginDrawing();
      
      ClearBackground(RAYWHITE);
      
      DrawTexture(inimigo, posX, 50, WHITE);
      
      DrawText("Para atirar, pressione o butão esquerdo do mouse. Para recarrega pressione espaçao", 0, 10 , 20, BLACK);
    
        EndDrawing();
    }
    
    UnloadSound(tiro);
    
    UnloadSound(reload);
    
    CloseAudioDevice();
    
    CloseWindow();
    
    return 0;
}
