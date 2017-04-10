//
//  main.c
//  Triangle
//
//  Created by Katherine Owens on 4/10/17.
//  Copyright © 2017 Katherine Owens. All rights reserved.
//

#include <stdio.h>

float remainingAngle(float angleA, float angleB) {
    float angleC = angleA + angleB;
    return angleC;
}

int main(int argc, const char * argv[]) {
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}
