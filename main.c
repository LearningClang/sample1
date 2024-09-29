#include "typing.h"

// 単語の配列を定義
Word words[WORD_COUNT] = {
    {"apple"},
    {"banana"},
    {"cherry"},
    {"date"},
    {"elderberry"}
};


int main() {
    printf("Welcome to the Typing Game!\n");
    playTypingGame(words, WORD_COUNT);
    return 0;
}
