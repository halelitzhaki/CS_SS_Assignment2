#include "my_mat.h"

int main()
{
    char choice = ' ';
    do{
        scanf(" %c", &choice);
        switch (choice)
        {
            case FUNC1:
            {
                getMatVal();
                break;
            }
            case FUNC2:
            {
                int i = 0, j = 0;
                scanf(" %d %d", &i, &j);
                if(isPath(i, j) == TRUE)
                    printf("\nTrue");
                else
                    printf("\nFalse");
                break;
            }
            case FUNC3:
            {
                int i = 0, j = 0;
                scanf(" %d %d", &i, &j);
                printf("\n%d", shortestPath(i, j));
            }
            case EXIT:
                break;
        }
    }while (choice != 'D');
    
    return 0;
}
