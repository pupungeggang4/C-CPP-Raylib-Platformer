#include "includes.h"
#include "asset.h"
#include "gamevar.h"
#include "game.h"

int main(int argc, char** argv) {
    gameInit(&gameVar);
    while (gameVar.running) {
        gameLoop(&gameVar);
    }
    assetDispose(&asset);
    CloseWindow();
    return 0;
}
