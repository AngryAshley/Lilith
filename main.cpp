/********************************************************
 * Lilith UCI Chess Engine - Version 0.1                *
 * Written by Ashley Kivits, GitHub AngryAshley         *
 * Begun on 17/12/2021 - Version finished on xx/xx/xxxx *
 ********************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdint.h>
#include <vector>
#include <external.h>

using namespace std;

const uint8_t ENG_VER = 0;
const uint8_t ENG_REV = 1;

vector<char*> args;

void ident(){
    printf("Lilith V%d.%d\n",ENG_VER,ENG_REV);
}

void help(){
    ident();

}

void init(){


}

int main(int argc, char* argv[]){
    for(uint8_t i=0;i<argc; i++)args.push_back(argv[i]);
    ident();
    init();
    return 0;
}
