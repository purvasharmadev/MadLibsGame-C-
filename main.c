#include <stdio.h>
#include <stdlib.h>

/*
Mad libs is a fill int blanks type of game which
asks you to fill in random words into a paragarph.
this program tells us to "BE SPECIFIC IN WHAT WE WANT THE USER TO ENTER"

 */


int main()
{
    char color[20];
    char pulralNoun[20];
    char celebF[20];
    char celebL[20];

    printf("Enter a color\n");
    scanf("%s",color);

    printf("Enter a Plural Noun \n");
    scanf("%s",pulralNoun);

    printf("Enter a celeberity \n");
    scanf("%s %s",celebF,celebL);

    printf("Roses are %s \n",color);
    printf("%s are blue \n",pulralNoun);
    printf("I love %s %s \n And its really true!!",celebF,celebL);

}
