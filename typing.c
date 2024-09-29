#include "typing.h"

// タイピングゲームを実行する関数
void playTypingGame(Word *wordList, int count) {
    char input[MAX_WORD_LENGTH];
    int score = 0;

    srand(time(NULL)); // 乱数の初期化

    for (int i = 0; i < 3; i++) { // 3回の単語を表示
        int index = rand() % count; // ランダムな単語を選択
        printf("Type this word: %s\n", wordList[index].word);

        printf("Your input: ");
        scanf("%s", input); // ユーザーの入力を取得

        if (strcmp(input, wordList[index].word) == 0) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct word was: %s\n", wordList[index].word);
        }
    }

    printf("Your score: %d out of 3\n", score);
}