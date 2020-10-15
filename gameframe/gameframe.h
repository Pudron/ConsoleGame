#ifndef _GAME_FRAME_H_
#define _GAME_FRAME_H_
#include<Windows.h>
#include<vector>
#include<stdlib.h>
#include<stdio.h>
class Object;
class GameFrame{
    public:
    GameFrame(int argc,char**argv);
    void startup(int argc,char**argv);
    void running();
    bool draw();
    void quit();
    bool keyPress(char key);//键盘检测函数，如果键key被按下，返回true，否则返回false
    /*绘图函数*/
    void setFrameSize(int width,int height);//设置框框的长和宽
    private:
    bool isRun=true;
    int fw=60,fh=50;
    std::vector<Object> objs;
};
typedef struct{
    int x,y;
}Element;
class Object{
    public:
    unsigned int x,y;
    Object(unsigned int initX,unsigned int initY);
    private:
    std::vector<Element> elements;
};
#endif