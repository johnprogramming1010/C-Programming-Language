/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

struct Books {
    char name[20];
    char author[20];
    int num_pages;
};

int main()
{
    int num_books = 0;
    int value = 0;
    struct Books bookstore[10];
    printf("Enter number of books (less than 10): ");
    scanf("%d", &num_books);    
    printf("Enter the book details\n--------------------\n");

    for(int i = 0; i < num_books; i++ ) {
        
        printf("Deails of book %d\n", i+1);

       printf("Book name: ");
        scanf("%s", bookstore[i].name);

        printf("Author: ");
        scanf("%s", bookstore[i].author);

        printf("Number of pages: ");
        scanf("%d", &bookstore[i].num_pages);
    }
    printf("===========================================\n");
    printf("S.no | Book Name | Author | Number of pages\n");
    printf("===========================================");
    for(int i = 0; i < num_books; i++) {
        printf("\n%d | %s | %s | %d", i, bookstore[i].name, bookstore[i].author, bookstore[i].num_pages);
    }
    printf("\n===========================================");

    
    for(int i = 0; i < num_books; i++){
        if(bookstore[i].num_pages > value){
            value = bookstore[i].num_pages;
        }
    }
    
    for(int i = 0; i < num_books; i++){
        if(bookstore[i].num_pages == value){
            printf("\n\nBook with the highest number of pages: %s", bookstore[i].name);
        }
    }
    return 0;
}