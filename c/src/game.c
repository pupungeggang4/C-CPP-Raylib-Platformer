#include "game.h"
#include "gamevar.h"

void gameInit(GameVar* gameVar) {
    SetConfigFlags(FLAG_WINDOW_HIGHDPI);
    SetConfigFlags(FLAG_VSYNC_HINT);
    InitWindow(800, 600, "Platformer");
    Vector2 DPIScale = GetWindowScaleDPI();
    int width = (int)(800 * DPIScale.x);
    int height = (int)(600 * DPIScale.y);
    SetWindowSize(width, height);

    SetExitKey(KEY_GRAVE);
    
    gameVar->running = 1;
}

void gameLoop(GameVar* gameVar) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    EndDrawing();
    if (WindowShouldClose()) gameVar->running = 0;
}

void gameInputHandle(GameVar* gameVar) {
}
