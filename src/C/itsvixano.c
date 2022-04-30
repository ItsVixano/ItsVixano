//
// Copyright (C) 2022 Giovanni Ricca
//
// SPDX-License-Identifier: Apache-2.0
//

#include <stdio.h>
#include "include/colours.h"
#include "include/socials.h"

static int socials() {
    white();
    printf("\nHere is a list of some socials i currently use :D\n\n");
    red();
    printf("Reddit = %s\n", reddit); // u/ItsVixano
    cyan();
    printf("Telegram = %s\n", telegram); // @GiovanniRN5
    printf("Twitter = %s\n", twitter); // @itsvixanoX
    gray();
    printf("Steam = %s\n", steam); // ItsVixano
    yellow();
    printf("XDA = %s\n", xda); // Its_Vixano
    return 0;
}

static int checker() {
    char value;

    printf("\n\nDo you enjoy my work right :) (y/n) ?? ");
    scanf("%c", &value);

    switch (value) {
        case 'y':
            green();
            printf("\nI really appreciate that response :D");
            printf("\nIf you want to donate a few bucks, do it with this link");
            printf("\n<--- paypal.me/vishverypoor --->");
            printf("\n(I don't support other ways of donating sadly)\n");
            socials();
            break;
        case 'n':
            red();
            printf("\nNo one forced you to use my stuffs");
            printf("\nFeel free to open a PR on the repo you get issues :D\n");
            break;
        default:
            yellow();
            printf("\nPlease try running again the program and type your answer again\n");
            return -1;
            break;
    }
    return 0;
}

int main() {
    white();
    printf("Nice to meet you :D"); // I hope
    printf("\nYou can checkout my contributions on my github profile and orgs");
    checker();
    return 0;
}
