#include "external.h"

uint8_t diagonalSimplifiedLUT(uint8_t coord){
    switch(coord){
        case 0x00:
        case 0x11:
        case 0x22:
        case 0x33:
        case 0x44:
        case 0x55:
        case 0x66:
        case 0x77: return 0x00;



    }
    return 0xff; //error
}
