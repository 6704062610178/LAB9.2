#include <stdio.h>
#define MAX 50
void countVowel(char []);
int main() {
    char text[MAX];

    printf("Enter text : ");
    scanf("%s", text);

    countVowel(text);
}

void countVowel(char t[]) {
    int i = 0;
    int a = 0, e = 0, iv = 0, o = 0, u = 0;

    while (i < MAX && t[i] != '\0') {

        if (t[i] == 'A' || t[i] == 'a')
            a++;
        else if (t[i] == 'E' || t[i] == 'e')
            e++;
        else if (t[i] == 'I' || t[i] == 'i')
            iv++;
        else if (t[i] == 'O' || t[i] == 'o')
            o++;
        else if (t[i] == 'U' || t[i] == 'u')
            u++;

        i++;
    }

    printf("A : %d\n", a);
    printf("E : %d\n", e);
    printf("I : %d\n", iv);
    printf("O : %d\n", o);
    printf("U : %d\n", u);
    printf("All Vowel : %d\n", a + e + iv + o + u);
}

