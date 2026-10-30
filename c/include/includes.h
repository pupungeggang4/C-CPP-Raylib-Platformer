#ifndef INCLUDES_H
#define INCLUDES_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include <raylib.h>
#include <raymath.h>

enum SceneName {TITLE, EDIT, RUN};
enum Direction {LEFT, RIGHT, UP, DOWN};

typedef struct UITitle UITitle;
typedef struct UIEdit UIEdit;
typedef struct UIRun UIRun;
typedef struct GameVar GameVar;

#endif
