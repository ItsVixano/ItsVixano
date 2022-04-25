//
// Copyright (C) 2022 Giovanni Ricca
//
// SPDX-License-Identifier: Apache-2.0
//

#include <stdio.h>
#include <unistd.h>
#include "include/colours.h"

int checker() {
    char value;

    printf("\n\nDo you enjoy my work right :) (y/n) ?? ");
    scanf("%c", &value); // ToDo: Find something to replace scanf

    switch (value) {
        case 'y':
            green();
            printf("\nI really appreciate that response :D");
            printf("\nIf you want to donate a few bucks, do it with this link");
            printf("\n<--- paypal.me/vishverypoor --->");
            printf("\n(I don't support other ways of donating sadly)\n");
            break;
        case 'n':
            red();
            printf("\nNo one forced you to use my stuffs");
            printf("\nFeel free to open a PR on the repo you get issues :D\n");
            break;
        default:
            yellow();
            printf("\nPlease try typing your answer again");
            //white();
            break;
    }
}

int main() {
    white();
    printf("Nice to meet you :D"); // I hope
    printf("\nYou can checkout my contributions on my github profile and orgs");
    checker(); // ToDo: Rerun it if it doesn't get a proper value
    return 0;
}
