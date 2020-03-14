#include "/user/cse320/Projects/project07.support.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    
void decode( unsigned int mach_lang, char[] ret_array ){
    
    unsigned int opcode;
    unsigned int i_bit;
    unsigned int rn;
    unsigned int rd;
    unsigned int s_bit;
    unsigned int rm;
    
    char return; 
    char rm_char;
    char rd_char;
    int opcode_dec;
    int rd_dec;
    int return_dec;
    int rm_dec
    
    //TODO: ERROR CHECKING 
    //TODO: S-BIT FUNCTIONALITY
    //TODO: Proper bitshifting
    //TODO: Proper character conversion
    //CONVERT opcode to decimal 
    
    opcode = (mach_lang << 7) >> 28;
    i_bit = (mach_lang << 6) >> 31;
    rd = (mach_lang << 16) >> 28;
    rn = (mach_lang << 12) >> 28;
    s_bit = (mach_lang << 11) >> 31;
    
    printf("%d", opcode);
    printf("%d", i_bit);
    printf("%d", rd);
    printf("%d", rn);
    printf("%d", s_bit);