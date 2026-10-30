#include "scene.h"
#include "gamevar.h"

void sceneChange(GameVar* gameVar, int target) {
    gameVar->scene = target;
}
