#ifndef UI_H
#define UI_H

#include "includes.h"

struct UITitle {
    float textTitle[2];
    float buttonEdit[4];
    float textEdit[2];
    float buttonQuit[4];
    float textQuit[2];
};

extern struct UITitle uiTitle;
#endif
