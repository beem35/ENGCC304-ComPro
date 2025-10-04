#include <stdio.h>
#include <string.h>

struct Book {
    int id ;
    char title[250] ;
    char author[250] ;
    int year ;
};

void addBook(Book books[], int *count) ;
void searchBook(Book books[], int count, char title[]) ;
void displayBooks(Book books[], int count) ;

int main(){
    int num = 0 ;
    int n ;
    struct Book books[100] ;

    char title[250] ;
    
    while (true){
        printf( "Choose an option: " ) ;
        scanf( "%d" , &n ) ;
        getchar();

        switch (n)
        {
        case 1:
            addBook( books , &num ) ;
            break;
        case 2:
            printf( "Enter Title to Search: " ) ;
            fgets(title, sizeof(title), stdin);
            title[strcspn(title, "\n")] = 0; 
            searchBook( books , num , title ) ;
            break;
        case 3:
            displayBooks( books , num ) ;
            break;
        case 4:
            printf("\nexit") ;
            return -1 ;
            break;
        default:
            printf("Invalid choice.\n");
        }

    }
    return 0 ;
}

void addBook(Book books[], int *count) {
    int id ;
    char title[250] ;
    char author[250] ;
    int year ;

    printf("Enter Book ID: ") ;
    scanf( "%d" , &id ) ;
    getchar();

    printf("Enter Title: ") ;
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = 0;

    printf("Enter Author: ") ;
    fgets(author, sizeof(author), stdin) ;
    author[strcspn(author, "\n")] = 0 ;

    printf("Enter Year: ") ;
    scanf( "%d" , &year ) ;
    getchar();

    strcpy(books[*count].title , title ) ;
    strcpy(books[*count].author , author ) ;
    books[*count].id = id ;
    books[*count].year = year ;

    printf("Book added successfully!\n") ;
    (*count)++ ;
}
void displayBooks(Book books[], int count) {
    for( int i = 0 ; i < count ; i++ ) {
        printf("[%3d] \nBook ID: %d \nTitle: %s \nAuthor: %s \nYear: %d \n" ,
            i+1 , books[i].id , books[i].title , books[i].author ,books[i].year
        );
    }
}
void searchBook(struct Book books[], int count, char title[]) {
    int found = 0;
    for(int i = 0; i < count; i++) {
        if(strcmp(books[i].title, title) == 0) {
            printf("\nBook ID: %d\nTitle: %s\nAuthor: %s\nYear: %d\n",
                books[i].id, books[i].title, books[i].author, books[i].year
            );
            found = 1;
        }
    }
    if(!found) {
        printf("Book not found.\n");
    }
}