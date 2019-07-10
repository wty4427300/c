#include <stdio.h>
#include <string.h>
struct Books
{
    char  *title;
    char  *author;
    char  *subject;
    int   book_id;
};
/* 函数声明 */
void printBook( struct Books *book );
void printBook1( struct Books *book );
int main( )
{
    struct Books Book1;        /* 声明 Book1，类型为 Books */
    struct Books Book2;        /* 声明 Book2，类型为 Books */
    //struct Books Book3;
    /* Book1 详述 */
    /* Book2 详述 */
    Book2.title="ssssss";
    Book2.subject="sssssssssssss";
    Book2.author="sssssssssssssss";
    Book2.book_id = 6495700;

    /* 通过传 Book1 的地址来输出 Book1 信息 */
//    printBook(Book1 );

    /* 通过传 Book2 的地址来输出 Book2 信息 */
    printBook(&Book2 );
    printBook1(&Book1);
    printBook(&Book1);
    return 0;
}


void printBook(struct Books *book)
{
    printf( "Book title : %s\n", book->title);
    printf( "Book author : %s\n", book->author);
    printf( "Book subject : %s\n", book->subject);
    printf( "Book book_id : %d\n", book->book_id);
}
void printBook1(struct Books *book){
    book->book_id=1111111;
    book->author="ssssss";
    book->subject="sssss";
    book->title="ssssss";
}
