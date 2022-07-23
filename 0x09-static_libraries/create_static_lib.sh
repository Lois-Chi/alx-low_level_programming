#!/bin/bash
gcc -c *.c
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.c
