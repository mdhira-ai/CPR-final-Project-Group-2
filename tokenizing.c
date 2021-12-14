#include "tokenizing.h"

void tokenizing()
{
    /* Version 1 */
// TOKENIZING Vi

    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[200];
    char* word;
    int w counter;
    printf("Type a few words separated by space(q - to quit):\n");
    gets(words);
    while (strcmp(words, "q") != 0)
    {
        word = strtok(words, " ");
        w counter = 1;
        while (word)
        {
            printf("Word #%d is \'%s\y\n", w counter++, word);
            word = strtok(NULL, " ");
        }
        printf("Type a few words separated by space(q - to quit):\n");
        gets(words);
    }
    printf("*** End of Tokenizing Words Demo ***\n\n");
}


/* Version 2 */

printf("*** Start of Tokenizing Phrases Demo ***\n");
char phrases[200];
char* phrase;
int p_counter;
printf("Type a few phrases separated by comma(q - to quit):\n");
gets(phrases);
while (strcmp(phrases, "q") != 0)
{
    phrase= strtok(phrases, "f");
    p_counter  = 1;
    while (phrase)
    {
        printf("Phrase #%d is \'%s\'\n", p_counter++, phrase);
        phrase = strtok(NULL, ",");
    }
    printf("Type a few phrases separated by comma(q - to quit):\n");
    gets(phrases);
}
printf("*** End of Tokenizing Phrases Demo ***\n\n");


/* Version 3 */

printf("*** Start of Tokenizing Sentences Demo ***\n");
char sentences[200];
char* sentence;
int s_counter;
printf("Type a few sentences separated by dot(q - to quit):\n");
gets(sentences);
while (strcmp(sentences, "q") != 0)
{
    sentence = strtok(sentences, ".");
    s_counter  = 1;
    while (sentence)
    {
        printf("sentence #%d is \'%s\y\n", s counter++, sentence);
        sentence = strtok(NULL, ".");
    }
    printf("Type a few sentences separated by dot(q - to quit):\n");
    gets(sentences);
}
printf("*** End of Tokenizing Sentences Demo ***\n\n");


}
