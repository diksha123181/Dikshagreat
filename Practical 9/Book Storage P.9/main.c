#include <stdio.h>
#include <stdlib.h>

struct Book {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};
int main() {
struct Book book1, book2;
printf("Enter details for Book 1:\n");
printf("Title: ");
gets(book1.title);
printf("Author: ");
gets(book1.author);
printf("Subject: ");
gets(book1.subject);
printf("Book ID: ");
scanf("%d", &book1.book_id);
getchar();
printf("\nEnter details for Book 2:\n");
printf("Title: ");
gets(book2.title);
printf("Author: ");
gets(book2.author);
printf("Subject: ");
gets(book2.subject);
printf("Book ID: ");
scanf("%d", &book2.book_id);
printf("\n--- Book Details ---\n");
printf("\nBook 1:\n");
printf("Title: %s\n", book1.title);
printf("Author: %s\n", book1.author);
printf("Subject: %s\n", book1.subject);
printf("Book ID: %d\n", book1.book_id);
printf("\nBook 2:\n");
printf("Title: %s\n", book2.title);
printf("Author: %s\n", book2.author);
printf("Subject: %s\n", book2.subject);
printf("Book ID: %d\n", book2.book_id);

return 0;
}
