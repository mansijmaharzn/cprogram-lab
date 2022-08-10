#include<stdio.h>
#include<string.h>

int checkVowel(char);

int main() {
    char sentence[80], temp[80];
    int i, j = 0;

    printf("Enter a sentence: ");
    gets(sentence); // equivalent to scanf("%s", sentence);

    for (i=0; sentence[i]!='\0'; i++) {
        if (checkVowel(sentence[i])==0) {
            temp[j] = sentence[i];
            j++;
        }
    }

    temp[j] = '\0';

    printf("The string after remmoving vowels:\n%s", temp);

    return 0;
}

int checkVowel(char temp) {
    if (temp == 'a' || temp == 'A' || temp == 'e' || temp == 'E' || temp == 'i' || temp == 'I' || temp =='o' || temp =='O' || temp == 'u' || temp == 'U')
        return 1;

    return 0;
}