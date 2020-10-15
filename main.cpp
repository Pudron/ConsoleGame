#include "gameframe/gameframe.h"
int main(int argc,char**argv){
    GameFrame gf(argc,argv);
    while(gf.draw());
    return 0;
}