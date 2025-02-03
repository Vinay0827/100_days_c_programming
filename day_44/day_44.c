//create a structure to represent a book with title, author, and ISBN.

#include <stdio.h>

struct book{ 
    char title[100];
    char author[100];
    int ISBN;
};

int main()
{
    struct book b;

    printf("Enter title of the book: ");
    fgets(b.title,sizeof(b.title),stdin);

    printf("Enter name of the author: ");
    fgets(b.author,sizeof(b.author),stdin);

    printf("Enter ISBN: ");
    scanf("%d", &b.ISBN);

    printf("\nTitle: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("ISBN: %d\n", b.ISBN);

    return 0;

}
    
