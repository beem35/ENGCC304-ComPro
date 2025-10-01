#include <stdio.h>
#include <ctype.h> // สำหรับ isspace

int countWordsInFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("ไม่สามารถเปิดไฟล์ %s ได้\n", filename);
        return -1;
    }

    int wordCount = 0;
    int inWord = 0; // flag ว่ากำลังอยู่ในคำหรือไม่
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch)) { // ถ้าเจอ whitespace
            inWord = 0;    // สิ้นสุดคำ
        } else {
            if (!inWord) {
                wordCount++; // เจอเริ่มคำใหม่
                inWord = 1;
            }
        }
    }

    fclose(file);
    return wordCount;
}

int main() {
    char name[10] ;

    printf("Enter file name: ") ;
    scanf( "%s" , name ) ;
    const char *filename = name;
    
    int totalWords = countWordsInFile(filename);
    if (totalWords >= 0) {
        printf("Total number of words in '%s' : %d words\n", filename, totalWords);
    }
    return 0;
}
