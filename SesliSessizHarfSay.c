// sesli sessiz harflerin sayısını bulan program
#include <stdio.h>
#include <string.h>
char tword;
int uzunluk;
char word[50];
char hypWord[100];
char wovel[]={'a','e','ı','i','o','ö','u','ü'};
char consonant[]={'b','c','ç','d','f','g','h','j','k','l','m','n','q','p','r','s','ş','t','x','v','y','z'};


// Sesli harf kontrolü yapılıyor.
int isWovel(char tword) {
         for (int j = 0; j <= 8; j++) {
            if (tword==wovel[j]) {
                return 1;
            }
            else {
                continue;
            }
        }
    }


//Sessiz harf kontrolü yapılıyor.
int isConsonant(char tword) {
        for (int j = 0; j <= 22; j++) {
            if (tword==consonant[j]) {
                return 1;
            }
            else {
                continue;
            }
        }
    }


//Hecelere ayırma ana methodu.
void hyphenation(char word[]) {
    int wovelCounter=0;
    int consonantCounter=0;
    for (int i = 0; word[i] != '\0'; i++) {
        tword= word[i];
          if (isWovel(tword)==1) {
           wovelCounter =wovelCounter+1;
        }
        else if (isConsonant(tword)==1) {
           consonantCounter = consonantCounter +1;
        }
        else {
            printf("Enter a word consisting of letters only \n");
        }
    }
    printf("Sesli harf sayısı : %d Sessiz Harf Sayısı: %d", wovelCounter, consonantCounter);
}


void main()
{
    printf("Enter a word for hyphenation:\n");
    scanf("%s",word);

    hyphenation(word);
}
