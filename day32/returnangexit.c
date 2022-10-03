#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Book {
    char book [800];
    int  people;
    char object[900 ];
    char author[1000];

}book1,book2;

int main ()
{
    // strcpy(book1.book,"MATH");
    // book1.people=90;
    // strcpy(book1.object,"HUNG");
    // strcpy(book1.author,"D13CNKTDK");

    strcpy(book2.book,"MATH1");
    book2.people=100;
    strcpy(book2.object,"HUNG1");
    strcpy(book2.author,"D13CNKTDK1");


    // printf("BOOK 1.BOOK %s\n",book1.book);
    // printf("BOOK 1.PEOPLE %d\n",book1.people);
    // printf("BOOK 1.OBJECT %s\n",book1.object);
    // printf("BOOK 1.AUTHUR %s\n",book1.author);

    printf("BOOK 2.BOOK %s\n",book2.book);
    printf("BOOK 2.PEOPLE %d\n",book2.people);
    return 0 ;
    printf("BOOK 2.OBJECT %s\n",book2.object);
    printf("BOOK 2.AUTHUR %s\n",book2.author);
    exit(0);
}
