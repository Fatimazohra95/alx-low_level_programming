#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -o *.c
ar -rc liballe.a *.o
ranlib liball.a
