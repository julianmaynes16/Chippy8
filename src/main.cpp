#include <SDL2/SDL.h>
#include <chip8.h>
#include <interface.h>
#include <stdio.h>
#include <iostream>
#include <chrono>

const int SCREEN_WIDTH = 64;
const int SCREEN_HEIGHT = 32;

int main(int argc, char *argv[])
{
    Chip8 chip8;
    Interface interface;

    uint32_t execution_cycle = 0;
    //how frequent program will run, lower = faster  
<<<<<<< HEAD
    //int delay_value = 50000;
    int delay_value = 50000;
=======
    //int delay_value = 500000;
    int delay_value = 5000000;
>>>>>>> 84fc983bc9e0244f8848ca340485dfd40970b7d5
    while(!interface.quit){
        if(!(execution_cycle % delay_value)){
            interface.updateKeyboard();
            chip8.execute(&interface);
            interface.displayScreen(&chip8);
            interface.clearKeyboard();
        }
        execution_cycle++;
    }
    chip8.debug_printMemory();
    return 0;
}