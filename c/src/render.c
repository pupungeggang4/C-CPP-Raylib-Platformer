#include "render.h"

void renderDrawText(const char* text, const float pos[2], int size, Color color) {
    DrawText(text, (int)pos[0], (int)pos[1], size, color);
}

void renderDrawRect(const float rect[4], Color color) {
    DrawRectangle((int)rect[0], (int)rect[1], (int)rect[2], (int)rect[3], color);
}
