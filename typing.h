#ifndef typing
#define typing

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define WORD_COUNT 5
#define MAX_WORD_LENGTH 20


// 単語を表す構造体
typedef struct {
    char word[MAX_WORD_LENGTH];
} Word;



/* 関数宣言 */
void playTypingGame(Word* wordList, int count);


#endif