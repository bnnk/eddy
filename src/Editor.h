#ifndef EDITOR_H
#define EDITOR_H

#include <ncurses.h>

#include "Buffer.h"

class Editor
{
private:
    int x, y;
    char mode;
    Buffer* buff;
    string status, filename;
    bool isnewfile;

    string tos(int);

    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

    void deleteLine();
    void deleteLine(int);

    void saveFile();

public:
    Editor();
    Editor(string);

    char getMode() {return mode;}

    void handleInput(int);
    void printBuff(WINDOW * win);
    void printStatusLine(WINDOW * win);
    void updateStatus();
};

#endif
