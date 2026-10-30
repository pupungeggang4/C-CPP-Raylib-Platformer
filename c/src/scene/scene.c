#include "scene.h"
#include "gamevar.h"

void sceneChange(GameVar* gameVar, int target) {
    gameVar->scene = target;
    if (target == TITLE) sceneTitleReady(gameVar);
    else if (target == EDIT) sceneEditReady(gameVar);
    else if (target == RUN) sceneRunReady(gameVar);
}
