#include <cstdio>
#include "bin/ClassA.h"
#include "bin/ClassB.h"

int main() {
    ClassA a;
    ClassB b;

    a.talk();
    b.say();
    
    printf("\nThis amazingly complex code shall change the world. (Hello World!)\n");
    return 0;
}