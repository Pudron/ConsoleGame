#include "gameframe.h"
GameFrame::GameFrame(int argc,char**argv){
    HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cur;
    GetConsoleCursorInfo(handle,&cur);
    cur.bVisible=0;
    SetConsoleCursorInfo(handle,&cur);
    startup(argc,argv);
}
Object::Object(unsigned int initX,unsigned int initY){
    x=initX;
    y=initY;
}
bool GameFrame::draw(){
    system("cls");
    for(int i=0;i<fw;i++){
        putchar('*');
    }
    for(int i=0;i<fh;i++){
        putchar('*');
        for(int i2=0;i2<fw;i2++){
            
        }
    }
    running();
    return isRun;
}
void GameFrame::quit(){
    isRun=false;
}
bool GameFrame::keyPress(char key){
    if(GetAsyncKeyState(key) & 0x8000){
        return true;
    }
    return false;
}
void GameFrame::setFrameSize(int width,int height){
    fw=width;
    fh=height;
}