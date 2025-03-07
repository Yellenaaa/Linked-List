#!/bin/bash
gcc -c constructor.c
gcc -c destructor.c
gcc -c puch_back
gcc -c push_front.c
gcc -c pop_back.c
gcc -c insert_After1.c
gcc -c insert_After2.c
gcc -c delete_Node1.c
gcc -c delete_Node2.c
gcc -c empty.c
gcc -c getSize.c
gcc -c print_list.c

ar -rcs archive.a constructor.o destructor.o push_back.o push_front.o pop_back.o insert_After1.o insert_After2.o delete_Node1.o delete_Node2.o empty.o getSize.o print_list.o
gcc main.c archive.a
./a.out

