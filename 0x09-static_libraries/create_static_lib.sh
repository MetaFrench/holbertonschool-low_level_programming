#!/bin/bash
gcc -c *.c && ar -rc lilball.a *.o && ranlib libmy.a
