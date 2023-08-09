#include <stdlib.h>

// Function to count the number of words in a string
int count_words(char *str) {
    int count = 0;
    int in_word = 0;

    while (*str != '\0') {
        if (*str == ' ') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

// Function to split a string into words
char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);
    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int word_index = 0;
    int word_length = 0;
    int in_word = 0;

    while (*str != '\0') {
        if (*str == ' ') {
            if (in_word) {
                words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
                if (words[word_index] == NULL) {
                    // Free memory allocated so far and return NULL on failure
                    for (int i = 0; i < word_index; i++) {
                        free(words[i]);
                    }
                    free(words);
                    return NULL;
                }
                words[word_index][word_length] = '\0';
                word_index++;
                word_length = 0;
                in_word = 0;
            }
        } else {
            in_word = 1;
            word_length++;
        }
        str++;
    }

    if (in_word) {
        words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL) {
            // Free memory allocated so far and return NULL on failure
            for (int i = 0; i <= word_index; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }
        words[word_index][word_length] = '\0';
        word_index++;
    }

    words[word_index] = NULL; // Mark the end of the array

    return words;
}

// Function to free memory allocated for words
void free_words(char **words) {
    if (words != NULL) {
        for (int i = 0; words[i] != NULL; i++) {
            free(words[i]);
        }
        free(words);
    }
}

int main() {
    char input[] = "This is a sample string";
    char **word_array = strtow(input);

    if (word_array != NULL) {
        for (int i = 0; word_array[i] != NULL; i++) {
            printf("%s\n", word_array[i]);
        }

        free_words(word_array);
    }

    return 0;
}

