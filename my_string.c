#include <stdio.h>
#include <stdlib.h>
#include "my_string.h"


void *my_memset(void *StartAddress, int value, unsigned int length)
{
    unsigned int state;
    char *TempStartAddress = StartAddress;

    if(NULL == StartAddress){
        printf("Null Error !!\n");
    }
    else{
        while(length--){
            *(TempStartAddress++) = value;
        }
    }
    return StartAddress;
}

void *my_memcpy(void *DestAddress, const void * SrcAddress, unsigned int length)
{
    char *TempDestAddress = DestAddress;
    char *TempSrcAddress = SrcAddress;

    if((NULL == DestAddress) || (NULL == SrcAddress)){
        printf("Null Error !!\n");
    }
    else{
            while(length--){
                *(TempDestAddress++) = *(TempSrcAddress++);
            }
    }
    return DestAddress;
}

void *my_memchr(const void *StartAddress, int Value, unsigned int length)
{
    unsigned char *TempStartAddress = StartAddress;

     if(NULL == StartAddress){
        printf("Null Error !!\n");
    }
    else{
            while(length--){
                if(Value == *(TempStartAddress)){
                    break;
                }
                else{
                        TempStartAddress++;
                }
            }
    }
    return (Value == *(TempStartAddress))? TempStartAddress: NULL;
}

int my_memcmp(const void *StrAddress_1, const void *StrAddress_2, unsigned int length)
{
    int State = 0;
    unsigned char *TempStrAddress_1 = StrAddress_1;
    unsigned char *TempStrAddress_2 = StrAddress_2;

    if((NULL == StrAddress_1) || (NULL == StrAddress_2)){
        printf("Null Error !!\n");
    }
    else{

            while(length--){
                    if(*(TempStrAddress_1) == *(TempStrAddress_2)){
                        State = 0;
                        TempStrAddress_1++;
                        TempStrAddress_2++;
                    }
                    else{
                        if(*(TempStrAddress_1) < *(TempStrAddress_2)){
                            State = -1;
                            break;
                        }
                        else{
                            State = 1;
                            break;
                        }
                    }
            }
    }
    return State;
}

void *my_memmove(void *StrAddress_1, const void *StrAddress_2, unsigned int length)
{
    unsigned char *TempStrAddress_1 = StrAddress_1;
    unsigned char *TempStrAddress_2 = StrAddress_2;
   if((NULL == StrAddress_1) || (NULL == StrAddress_2)){
        printf("Null Error !!\n");
    }
    else{
        while(length--){
            *(TempStrAddress_1++) = *(TempStrAddress_2++);
        }
    }
    return StrAddress_1;
}

char *my_strcat(char *DestAddress, const char *SrcAddress)
{
    char *TempDestAddress = DestAddress;
    char *TempSrcAddress = SrcAddress;
     if((NULL == DestAddress) || (NULL == SrcAddress)){
        printf("Null Error !!\n");
    }
    else{
        while(*TempDestAddress){
            TempDestAddress++;
        }
        while(*TempSrcAddress){
        *(TempDestAddress++) = *(TempSrcAddress++);
        }
    }
    return DestAddress;
}

char *my_strncat(char *DestAddress, const char *SrcAddress,unsigned int length)
{
    char *TempDestAddress = DestAddress;
    char *TempSrcAddress = SrcAddress;
    if((NULL == DestAddress) || (NULL == SrcAddress)){
        printf("Null Error !!\n");
    }
    else{
        while(*TempDestAddress){
            TempDestAddress++;
        }
        while(length--){
        *(TempDestAddress++) = *(TempSrcAddress++);
        }
    }
    return DestAddress;
}

char *my_strchr(const char *StrAddress, int Value)
{
    char *TempStrAddress = StrAddress;
   if(NULL == StrAddress){
    printf("NULL Error !!");
   }
   else{
        while(Value != *(TempStrAddress)){
                if(*(TempStrAddress) == '\0'){
                    break;
                }
                TempStrAddress++;
        }
   }
    return (Value == *(TempStrAddress)? TempStrAddress: NULL);
}

int my_strcmp(const char *StrAddress_1, const char *StrAddress_2)
{
    int State = 0;
    char *TempStrAddress_1 = StrAddress_1;
    char *TempStrAddress_2 = StrAddress_2;
    if((NULL == StrAddress_1) || (NULL == StrAddress_2)){
        printf("Null Error !!\n");
    }
    else{
        while(*(TempStrAddress_1) && *(TempStrAddress_2)){
            if(*(TempStrAddress_1) != (*TempStrAddress_2)){
                if(*(TempStrAddress_1) < *(TempStrAddress_2)){
                    State = -1;
                    break;
                }
                else{
                        State = 1;
                        break;
                }
            }else{
                State = 0;
                TempStrAddress_1++;
                TempStrAddress_2++;
            }
        }
    }
    return State;
}

int my_strncmp(const char *StrAddress_1, const char *StrAddress_2, unsigned int length)
{
    int State = 0;
    char *TempStrAddress_1 = StrAddress_1;
    char *TempStrAddress_2 = StrAddress_2;

    if((NULL == StrAddress_1) || (NULL == StrAddress_2)){
        printf("Null Error !!\n");
    }
    else{

            while(length--){
                    if(*(TempStrAddress_1) == *(TempStrAddress_2)){
                        State = 0;
                        TempStrAddress_1++;
                        TempStrAddress_2++;
                    }
                    else{
                        if(*(TempStrAddress_1) < *(TempStrAddress_2)){
                            State = -1;
                            break;
                        }
                        else{
                            State = 1;
                            break;
                        }
                    }
            }
    }
    return State;

}

int my_strcoll(const char *StrAddress_1, const char *StrAddress_2)
{
    int State = 0;
    char *TempStrAddress_1 = StrAddress_1;
    char *TempStrAddress_2 = StrAddress_2;
    if((NULL == StrAddress_1) || (NULL == StrAddress_2)){
        printf("Null Error !!\n");
    }
    else{
        while(*(TempStrAddress_1) && *(TempStrAddress_2)){
            if(*TempStrAddress_1 != *TempStrAddress_2){
                if(*TempStrAddress_1 < *TempStrAddress_2){
                    State = -1;
                    break;
                }
                else{
                        State = 1;
                        break;
                }
            }else{
                TempStrAddress_1++;
                TempStrAddress_2++;
                State = 0;
            }
        }
    }
    return State;

}

char *my_strcpy(char *DestAddress, const char *SrcAddress)
{
    char *TempDestAddress = DestAddress;
    char *TempSrcAddress = SrcAddress;
    if((NULL == DestAddress) || (NULL == SrcAddress)){
        printf("Null Error !!\n");
    }
    else{
        while(*TempSrcAddress){
            *TempDestAddress = *TempSrcAddress;
            TempSrcAddress++;
            TempDestAddress++;
        }
        *(TempDestAddress) = *(TempSrcAddress);
    }
    return DestAddress;
}

char *my_strncpy(char *DestAddress, const char *SrcAddress, unsigned int length)
{
    char *TempDestAddress = DestAddress;
    char *TempSrcAddress = SrcAddress;
    if((NULL == DestAddress) || (NULL == SrcAddress)){
        printf("Null Error !!\n");
    }
    else{
        while(length--){
            *TempDestAddress = *TempSrcAddress;
            TempSrcAddress++;
            TempDestAddress++;
        }
    }
    return DestAddress;
}


int my_strcspn(const char *Str_1, const char *Str_2)
{
    int length = 0;
    char *TempStr_1 = Str_1;
    char *TempStr_2 = Str_2;
    if((NULL == Str_1) || (NULL == Str_2)){
        printf("Null Error !!\n");
    }
    else{
        for(;*TempStr_2 ;TempStr_2++){
            for(;*TempStr_1 ;TempStr_1++){
                length++;
                if(*TempStr_1 == *TempStr_2){
                    break;
                }
            }
            if(*TempStr_1 == *TempStr_2){
                    break;
                }
            TempStr_1 = Str_1;
            length = 0;
        }
    }
    return length;
}

unsigned int my_strlen(const char *Str)
{
    unsigned int length =0;
    char *TempStr = Str;
    if(NULL == Str){
        printf("Null Error !!\n");
    }
    else{
        while(*(TempStr++)){
            length++;
        }
    }
    return length;
}
/*
char *my_strpbrk(const char *Str_1, const char *Str_2)
{
    char *TempStr_1 = Str_1;
    char *TempStr_2 = Str_2;
    char *Val;
    int Length = 0;
    int TempLength = 0;
    if((NULL == Str_1) || (NULL == Str_2)){
        printf("Null Error !!\n");
    }
    else{
            for(;*TempStr_2 ;TempStr_2++){
            for(;*TempStr_1 ;TempStr_1++){
                Length++;
                if(*TempStr_1 == *TempStr_2){
                    break;
                }
            }
                if(Length > TempLength){
                    TempLength = Length;
                    Val = TempStr_2;
                }
            TempStr_1 = Str_1;
            }
    }
    return Val;
}
*/
char *my_strrchr(const char *Str, int c)
{
    char *TempStr = Str;
    char *FoundStr = NULL;
    if(NULL == Str){
        printf("Null Error !!\n");
    }
    else{
        while(*TempStr){
            if(c == *TempStr){
                FoundStr = TempStr;
            }
            else{}
                TempStr++;
        }
    }
    return FoundStr;
}


unsigned int my_strspn(const char *Str_1, const char *Str_2)
{
    unsigned int Length = 0;
    char *TempStr_1 = Str_1;
    char *TempStr_2 = Str_2;
    if((NULL == Str_1) || (NULL == Str_2)){
        printf("Null Error !!\n");
    }
    else{
            while(*TempStr_2){
                if(*TempStr_1 == *TempStr_2){
                    Length++;
                }
                else{
                    break;
                }
                    TempStr_2++;
                    TempStr_1++;
            }
        }
    return Length;
}


char *my_strstr(const char *Haystack, const char *Needle)
{
    char *TempHaystack = Haystack;
    char *TempNeedle = Needle;
    char *Found = NULL;
     if((NULL == Haystack) || (NULL == Needle)){
        printf("Null Error !!\n");
    }
    else{
        for(; *TempHaystack; TempHaystack++){
            if(*TempHaystack == *TempNeedle){
                  while(*TempNeedle){
                    if(*TempHaystack != *TempNeedle){
                        Found = NULL;
                        break;
                    }else{
                        if(Found == NULL){Found = TempHaystack;}
                    }
                    TempHaystack++;
                    TempNeedle++;
                  }
            }
        if(*TempHaystack == '\0' || Found == NULL){break;}
        }
    }
    return Found;
}


char *my_strtok(char *Str, const char *Delim)
{
    char *TempStr = Str;
    char *TempDelim = Delim;

        while(*TempStr){
            if(*TempStr == *TempDelim){
                *TempStr = ' ';
            }else{}
            TempStr++;
        }

    return Str;
}






