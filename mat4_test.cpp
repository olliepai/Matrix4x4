#include <stdio.h>
#include "mat4.h"

int main(int argc, char** argv){
    mat4 m1(4);
    mat4 m2(4);

    m1.multiply(m2);
    m1.print();

    return 0;
}