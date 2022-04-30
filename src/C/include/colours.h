//
// Copyright (C) 2022 Giovanni Ricca
//
// SPDX-License-Identifier: Apache-2.0
//

// ref https://en.wikipedia.org/wiki/ANSI_escape_code#Colors //

void red() {
    printf("\x1b[31m");
}

void green() {
    printf("\x1b[32m");
}

void yellow() {
    printf("\x1b[1;33m");
}

void cyan() {
    printf("\x1b[36m");
}

void gray() {
    printf("\x1b[90m");
}

void white() {
    printf("\x1b[1;37m");
}
