#include <stdio.h>
#include <string.h>

typedef struct
{
    char title[50];
    char author[50];
    float price;
} Book;

void print_book(Book book)
{
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
}

int main()
{
    int num_books;
    printf("Enter the number of books: ");
    scanf("%d", &num_books);
    getchar(); 

    if (num_books > 10)
    {
        printf("Maximum number of books exceeded. Limit is 10.\n");
        return 1;
    }

    Book books[num_books];

    for (int i = 0; i < num_books; i++)
    {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %49[^\n]", books[i].title); 

        printf("Author: ");
        scanf(" %49[^\n]", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar(); 
    }

    printf("Book details:\n");
    for (int i = 0; i < num_books; i++)
    {
        print_book(books[i]);
        printf("\n");
    }

    return 0;
}