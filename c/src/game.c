#include "game.h"
#include "gamevar.h"

void gameInit(GameVar* gameVar) {
    SetConfigFlags(FLAG_VSYNC_HINT);
    InitWindow(800, 600, "Platformer");
    
    gameVar->running = 1;
}

void gameLoop(GameVar* gameVar) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    EndDrawing();
    if (WindowShouldClose()) gameVar->running = 0;
}
