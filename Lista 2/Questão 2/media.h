#include<stdlib.h>
#include<stdio.h>
#include<string.h>

float media(float n1, float n2, float media){
    if( n1 >= 0 && n1 <= 10 && n2 >= 0 && n2 <= 10){
        media = (n1 + n2) / 2;
        return media;
    }
return 0;
};