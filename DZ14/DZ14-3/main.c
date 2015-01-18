#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../../Modules/include/Kosti.h"

int main()
{
    srand(time(NULL));
    int humanScoreOne=0;
    int humanScoreTwo=0;
    int computerScoreOne=0;
    int computerScoreTwo=0;

    humanScoreOne=rand()%6+1;
    humanScoreTwo=rand()%6+1;
    kosti(humanScoreOne,humanScoreTwo);
    printf("\n\n");
    computerScoreOne=rand()%6+1;
    computerScoreTwo=rand()%6+1;
    kosti(computerScoreOne,computerScoreTwo);
    if (computerScoreOne+computerScoreTwo==humanScoreOne+humanScoreTwo)
    {
        printf("\nDRAW\n");
    }
    if (computerScoreOne+computerScoreTwo>humanScoreOne+humanScoreTwo)
    {
        printf("\nYOU LOST!\n");
    }
        if (computerScoreOne+computerScoreTwo<humanScoreOne+humanScoreTwo)
    {
        printf("\nYOU WIN!\n");
    }
    return 0;
}
