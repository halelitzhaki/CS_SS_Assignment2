#include "my_mat.h"

void getMatVal()
{
    for(int i=0; i<LENGTH; i++)
    {
        for(int j=0; j<LENGTH; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }
    createMatShortPath();
}

int isPath(int i, int j)
{
    if(matrix[i][j] != 0 || shortestPath(i, j) > -1) return TRUE;
    return FALSE;
}

int shortestPath(int i, int j)
{
    if(matShortPath[i][j] == 0 || matShortPath[i][j] == INFINITY) return -1;
    return matShortPath[i][j];
}

void createMatShortPath()
{
    for(int i=0; i<LENGTH; i++)
    {
        for(int j=0; j<LENGTH; j++)
        {
            if(i!=j && matrix[i][j] == 0) matShortPath[i][j] = INFINITY;
            else matShortPath[i][j] = matrix[i][j];
        }
    }
    for(int k=0; k<LENGTH; k++)
    {
        for(int i=0; i<LENGTH; i++)
        {
            for(int j=0; j<LENGTH; j++)
            {
                if(matShortPath[i][j]>(matShortPath[i][k]+matShortPath[k][j])) 
                    matShortPath[i][j] = matShortPath[i][k]+matShortPath[k][j];
            }
        }
    }
}
