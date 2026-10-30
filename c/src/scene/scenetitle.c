#include "scene.h"
#include "ui.h"
#include "gamevar.h"
#include "render.h"
#include "util.h"

void sceneTitleReady(GameVar* gameVar) {

}

void sceneTitleUpdate(GameVar* gameVar) {
}

void sceneTitleRender(GameVar* gameVar) {
    renderDrawText("Platformer Mechanics", uiTitle.textTitle, 20, BLACK);
    renderDrawRect(uiTitle.buttonEdit, YELLOW);
    renderDrawText("Edit", uiTitle.textEdit, 20, BLACK);
    renderDrawRect(uiTitle.buttonQuit, PINK);
    renderDrawText("Quit", uiTitle.textQuit, 20, BLACK);
}

void sceneTitleKeyDown(GameVar* gameVar) {
}

void sceneTitleMouseUp(GameVar* gameVar, Vector2 pos, int button) {
    if (button == LEFT) {
        if (utilPointInsideRectUI(pos, uiTitle.buttonQuit)) gameVar->running = 0;
    }
}

