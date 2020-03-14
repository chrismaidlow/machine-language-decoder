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
    
    //converts rd
    rd_dec = strtol(rd, &endptr, 2);
    if(rd_dec > 9)
    {
        char rd_char[3];
        sprintf(rd_char, "%d", rd_dec);
        rd_char = 'r' + rd_char;
    }
    else
    {
        char rd_char[2];
        sprintf(rd_char, "%d", rd_dec);
        rd_char = 'r' + rd_char;
    }
    //converts return 
    return_dec = strtol(rn, &endptr, 2);
    if(return_dec > 9)
    {
        char return[3];
        sprintf(return, "%d", return_dec);
        return = 'r' + return;
    }
    else
    {
        char return[2];
        sprintf(return, "%d", return_dec);
        return = 'r' + return;
    }
    
    //converts opcode 
    opcode_dec = strtol(opcode, &endptr, 2);
    
    //for single use RM
    //for adding constants
    if(i_bit == 1)
    {
        //immed_val
        rm = (mach_lang << 24) >> 26;
        //convert to hex
    }
    else
    {
        rm = (mach_lang << 27) >> 28;
        rm_char = strtol(rm, &endptr, 2) + '0';
    }
    
    //NZCV Condition
    if(s_bit == 1)
    {
    
    }
    //and
    if(opcode_dec == 0)
    {
        sprintf(ret_array, "and %d (%s)", return, rd_char, rm_char);  
    }
    //eor
    else if(opcode_dec == 1)
    {  
        sprintf( ret_array, "eor %d (%s)", return, rd_char, rm_char);  
    }
    //sub
    else if(opcode_dec == 2)
    {
        if(s_bit == 1)
        {
            sprintf( ret_array, "subs %d (%s)", return, rd_char, rm_char);
        }
        else
        {
            sprintf( ret_array, "sub %d (%s)", return, rd_char, rm_char);  
        }    
    }
    //rsb
    else if(opcode_dec == 3)
    { 
        sprintf( ret_array, "rsb %d (%s)", return, rd_char, rm_char);  
    }
    //add
    else if(opcode_dec == 4)
    {
        //adds 
        if(s_bit == 1)
        {
            sprintf( ret_array, "adds %d (%s)", return, rd_char, rm_char);
        }
        else
        {
            sprintf( ret_array, "add %d (%s)", return, rd_char, rm_char);  
        }  
    }
    //adc
    else if(opcode_dec == 5)
    {
        sprintf( ret_array, "adc %d (%s)", return, rd_char, rm_char);  
    }
    //sbc
    else if(opcode_dec == 6)
    {
        sprintf( ret_array, "sbc %d (%s)", return, rd_char, rm_char);  
    }
    //rsc
    else if(opcode_dec == 7)
    {
        sprintf( ret_array, "rsc %d (%s)", return, rd_char, rm_char);  
    }
    //tst
    else if(opcode_dec == 8)
    {
        sprintf( ret_array, "tst %d (%s)", return, rd_char, rm_char);  
    }
    //teq
    else if(opcode_dec == 9)
    {
        sprintf( ret_array, "teq %d (%s)", return, rd_char, rm_char);  
    }
    //cmp
    else if(opcode_dec == 10)
    {
        if(s_bit != 1)
        {
            //send warning -- do this for all test/cmp   
        }
      sprintf( ret_array, "cmp %d (%s)", return, rd_char, rm_char);  
    }
    //cmn
    else if(opcode_dec == 11)
    {  
        sprintf( ret_array, "cmn %d (%s)", return, rd_char, rm_char);  
    }
    //orr
    else if(opcode_dec == 12)
    { 
        sprintf( ret_array, "orr %d (%s)", return, rd_char, rm_char);  
    }
    //mov
    else if(opcode_dec == 13)
    {
        sprintf( ret_array, "mov %d (%s)", return, rm_char);  
    }
    //bic
    else if(opcode_dec == 14)
    {
        sprintf( ret_array, "bic %d (%s)", return, rd_char, rm_char);  
    }
    //mvn
    else if(opcode_dec == 15)
    {  
        sprintf( ret_array, "mvn %d (%s)", return, rm_char);  
    }
    
}
