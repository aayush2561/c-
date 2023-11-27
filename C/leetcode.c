#include <stdio.h>
#include <string.h>

void mergeStrings(const char *word1, const char *word2, char *merged) {
    int i = 0, j = 0, k = 0;

    while (word1[i] != '\0' || word2[j] != '\0') {
        if (word1[i] != '\0') {
            merged[k] = word1[i];
            i++;
            k++;
        }
        if (word2[j] != '\0') {
            merged[k] = word2[j];
            j++;
            k++;
        }
    }

    merged[k] = '\0'; 
}

int main() {
    const char *word1 = "abc";
    const char *word2 = "pqr";
    char merged[200]; 

    mergeStrings(word1, word2, merged);

    printf("Merged string: %s\n", merged);

    return 0;
}
