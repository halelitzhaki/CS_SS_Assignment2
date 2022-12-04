#include "my_mat.h"

int main() {
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
                    printf("True");
                else
                    printf("False");
                break;
            }
            case FUNC3:
            {
                int i = 0, j = 0;
                scanf(" %d %d", &i, &j);
                printf("%d", shortestPath(i, j));
                break;
            }
            case EXIT:
                break;
        }
        if((choice != EXIT) && (choice == FUNC2 || choice == FUNC3)) printf("\n");
    }while (choice != EXIT);
    
    return 0;
}
