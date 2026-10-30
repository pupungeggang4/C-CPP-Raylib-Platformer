#ifndef SCENE_H
#define SCENE_H

#include "includes.h"
void sceneChange(GameVar*, int);

void sceneTitleReady(GameVar*);
void sceneTitleUpdate(GameVar*);
void sceneTitleRender(GameVar*);
void sceneTitleKeyDown(GameVar*);
void sceneTitleMouseUp(GamrVar*, Vector2, int);

void sceneEditReady();
void sceneEditUpdate();
void sceneEditRender();
void sceneEditKeyDown();
void sceneEditMouseUp();

void sceneRunReady();
void sceneRunUpdate();
void SceneRunRender();
void sceneRunKeyDown();
void sceneRunMouseUp();

void menuReady();
void menuRender();
void menuKeyDown();
void menuKeyMouseUp();

#endif
