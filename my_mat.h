#ifndef MY_MAT_H
#define MY_MAT_H

#include <stdio.h>

#define LENGTH 10
#define TRUE 1
#define FALSE 0
#define NO_PATH -1
#define FUNC1 'A'
#define FUNC2 'B'
#define FUNC3 'C'
#define EXIT 'D'
#define INFINITY 4000000

int matrix[LENGTH][LENGTH];
int matShortPath[LENGTH][LENGTH];

void getMatVal();
int isPath(int i, int j);
int shortestPath(int i, int j);
void createMatShortPath();

#endif //MY_MAT_H