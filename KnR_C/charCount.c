#include <stdio.h>

/*Basically open up an input prompt for the terminal
whatever I enter is then copied back and repeated to myself
can expand on this to return things such as adding a letter to 
the beginning of each word, or an extra space to each space segment
*/

main()
{
    long nc;

    nc = 0;
    while(getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}