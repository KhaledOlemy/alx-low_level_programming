#!/bin/bash
gcc -c -fPIC -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
gcc -shared -fPIC -Wall -Werror -Wextra -pedantic -std=gnu89 -o liball.so *.o
