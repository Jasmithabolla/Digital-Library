#include <stdio.h>
#include <string.h>

void addbook(void);
void allbooks(void);
void accno(void);
void author(void);

int totalbooks=0,proceed;
struct library{
char title[100];
char author[50];
int accno;
int price;
char issued[5];
};
struct library book[100];
int main()
{
    while(1)
    {
        char choice;
        system ("CLS");
        printf("****************************************************\n");
        printf("\n		||Mahindra University Library||	\n\n");
        printf("****************************************************\n");
        printf("Please choose the desired service number:\n");
        printf("1.Add book information\n");
        printf("2.Display all books information\n");
        printf("3.List all books of given author\n");
        printf("4.List title of book with given accession number\n");
        printf("5.List total no of books in the library\n");
        printf("6.Exit\n\n");
        printf("Enter any number to return to the main menu from elsewhere\n");
        scanf(" %c",&choice);
        switch(choice)
        {
            case '1':	system ("CLS");
						addbook();
                        break;
            case '2': 	system ("CLS");
						allbooks();
                        break;
            case '3':	system ("CLS");
						author();
                        break;
            case '4':	system ("CLS");
						accno();
                        break;
            case '5':	system ("CLS");
                        printf("Total no of books in the library are %d\n\n",totalbooks);
                        printf("Enter any number to continue\n");
                        scanf("%d",&proceed);
            case '6':   break;
                        break;
            default:	printf("Invalid choice\n");
                        printf("Enter any number to continue\n");
                        scanf("%d",&proceed);
                        break;
        }
        if(choice=='6')
            break;
    }
    return 0;
}

void addbook()
{
    totalbooks++;
    printf("Please enter the following details:\n");
    printf("Title: ");
    scanf("%s",book[totalbooks-1].title);
    printf("Author: ");
    scanf("%s",book[totalbooks-1].author);
    printf("Accession number: ");
    scanf("%d",&book[totalbooks-1].accno);
    printf("Price: ");
    scanf("%d",&book[totalbooks-1].price);
    printf("Is book issued: ");
    scanf("%s",book[totalbooks-1].issued);
    system("CLS");
    printf("Book information saved\n");
    printf("Enter any number to continue\n");
    scanf("%d",&proceed);
}

void allbooks()
{
    for(int i=0;i<totalbooks;i++)
    {
        printf("Book %d\n",i+1);
        printf("Title: %s\n",book[i].title);
        printf("Author: %s\n",book[i].author);
        printf("Accession number: %d\n",book[i].accno);
        printf("Price: %d\n",book[i].price);
        printf("Is book issued: %s\n\n",book[i].issued);
    }
    printf("Enter any number to continue\n");
    scanf("%d",&proceed);
}

void accno()
{
    int a;
    printf("Enter accession number: ");
    scanf("%d",&a);
    for(int i=0;i<totalbooks;i++)
    {
        if(a==book[i].accno)
        {
            printf("Book title: %s\n\n",book[i].title);
            break;
        }
    }
    printf("Enter any number to continue\n");
    scanf("%d",&proceed);
}

void author()
{
    char a[50];
    printf("Enter author name: ");
    scanf("%s",a);
    printf("Books with author %s are\n",a);
    for(int i=0;i<totalbooks;i++)
    {
        if(strcmp(a,book[i].author)==0)
        {
            printf("%s\n",book[i].title);
        }
    }
    printf("\nEnter any number to continue\n");
    scanf("%d",&proceed);
}
