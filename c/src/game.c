#include "game.h"
#include "asset.h"
#include "gamevar.h"
#include "scene.h"

void gameInit(GameVar* gameVar) {
    SetConfigFlags(FLAG_WINDOW_HIGHDPI);
    SetConfigFlags(FLAG_VSYNC_HINT);
    InitWindow(800, 600, "Platformer");
    Vector2 DPIScale = GetWindowScaleDPI();
    int width = (int)(800 * DPIScale.x);
    int height = (int)(600 * DPIScale.y);
    SetWindowSize(width, height);

    SetExitKey(KEY_GRAVE);
    
    assetLoad(&asset);
    gameVar->running = 1;
}

void gameLoop(GameVar* gameVar) {
    gameVar->delta = GetFrameTime();

    gameInputHandle(gameVar);

    if (gameVar->scene == TITLE) {
        sceneTitleUpdate(gameVar);
    } else if (gameVar->scene == EDIT) {
        sceneEditUpdate(gameVar);
    } else if (gameVar->scene == RUN) {
        sceneRunUpdate(gameVar);
    }

    BeginDrawing();
    ClearBackground(RAYWHITE);
    if (gameVar->scene == TITLE) {
        sceneTitleRender(gameVar);
    } else if (gameVar->scene == EDIT) {
        sceneEditRender(gameVar);
    } else if (gameVar->scene == RUN) {
        sceneRunRender(gameVar);
    }
    EndDrawing();
    if (WindowShouldClose()) gameVar->running = 0;
}

void gameInputHandle(GameVar* gameVar) {
    if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) {
        Vector2 pos = GetMousePosition();
        printf("%f, %f\n", pos.x, pos.y);
        if (gameVar->scene == TITLE) {
            sceneTitleMouseUp(gameVar, pos, LEFT);
        } else if (gameVar->scene == EDIT) {
            sceneEditMouseUp(gameVar, pos, LEFT);
        } else if (gameVar->scene == RUN) {
            sceneRunMouseUp(gameVar, pos, LEFT);
        }
    } else if (IsMouseButtonReleased(MOUSE_BUTTON_RIGHT)) {
        Vector2 pos = GetMousePosition();
        printf("%f, %f\n", pos.x, pos.y);
        if (gameVar->scene == TITLE) {
            sceneTitleMouseUp(gameVar, pos, RIGHT);
        } else if (gameVar->scene == EDIT) {
            sceneEditMouseUp(gameVar, pos, RIGHT);
        } else if (gameVar->scene == RUN) {
            sceneRunMouseUp(gameVar, pos, RIGHT);
        }
    }

    if (gameVar->scene == TITLE) {
        sceneTitleKeyDown(gameVar);
    } else if (gameVar->scene == EDIT) {
        sceneEditKeyDown(gameVar);
    } else if (gameVar->scene == RUN) {
        sceneRunKeyDown(gameVar);
    }
}
