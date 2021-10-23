
/////////////////////////////////////////////////////////////    MyECF    ///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void print(FILE *fptr) // To Read the .text File content
{
    char clgname;
    while ((fscanf(fptr, "%c", &clgname)) != EOF)
    {
        printf("%c", clgname);
    }
}


// For Branches 


void branches(char b[33]) // To Call the .text file
{
    printf("\n\t\t\t\t\t\t--- %s Engineering ---\n\n", b);
    FILE *fptr;
    int no;
    if (b == "Computer")
    {
        fptr = fopen("computer.txt", "r");
        print(fptr);
        printf("\n");
    }
    else if (b == "Civil")
    {
        fptr = fopen("civil.txt", "r");
        print(fptr);
        printf("\n");
    }
    else if (b == "Chemical")
    {
        fptr = fopen("chemical.txt", "r");
        print(fptr);
        printf("\n");
    }
    else if (b == "Mechanical")
    {
        fptr = fopen("mechanical.txt", "r");
        print(fptr);
        printf("\n");
    }
    else if (b == "ENTC")
    {
        fptr = fopen("entc.txt", "r");
        print(fptr);
        printf("\n");
    }
}


// For About 

void about(char b[33]) // To Call the .text file
{
    // printf("\n\t\t\t\t\t\t--- %s Engineering ---\n\n", b);
    FILE *fptr;
    int no;
    if (b == "About")
    {
        fptr = fopen("aboutMyECF.txt", "r");
        print(fptr);
        printf("\n");
    }
}


// For More information 

void info(char b[33]) // To Call the .text file
{
    // printf("\n\t\t\t\t\t\t--- %s Engineering ---\n\n", b);
    FILE *fptr;
    int no;
    if (b == "Information")
    {
        fptr = fopen("links.txt", "r");
        print(fptr);
        printf("\n");
    }
}




int main() // Homepage to select the Choice according to user choice
{
    int choice;
    int branch;
    char b[33];

    printf("\n\t   ~ Welcome to MyECF ~\n\n");

    while (1)
    {
        printf("\n\n 1] Select Branch \t 2] About us \t 3] More information \t 4] Exit \t\n\n\t   Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)

        {
        case 1:
            printf("\n\n Select branch: \n 1] Computer engineering \n 2] Chemical engineering \n 3] Mechanical engineering \n 4] Civil Engineering \n 5] Entc Engineering \n 6] Exit \n\n \t   Enter your choice: \t");
            scanf("%d", &branch);

            switch (branch)
            {
            case 1:
                printf("\n~~ You have selected Computer engineering ~~\n\n");
                branches("Computer");
                break;
            case 2:
                printf("\n~~ You have selected Chemical engineering ~~\n\n");
                branches("Chemical");
                break;
            case 3:
                printf("\n~~ You have selected Mechanical engineering ~~\n\n");
                branches("Mechanical");
                break;
            case 4:
                printf("\n~~ You have selected Civil engineering ~~\n\n");
                branches("Civil");
                break;
            case 5:
                printf("\n~~ You have selected Entc engineering ~~\n\n");
                branches("ENTC");
                break;
            case 6:
                printf("\n~~ You have exit successfully for branch choosing~~\n\n");
                break;
            default:
                printf("\n Invaid Choice\n");
                break;
            }

            break;

        case 2:
            printf("\n\n\t    ~ About us ~\n\n");
            about("About");
            break;

        case 3:
            info("Information");
            break;
        case 4:
            printf("\n\n~~ You have exit successfully from application ~~\n");
            printf("\n\t       ~ THANK YOU! ~\n\n");
            exit(1);
            break;

        default:
            printf("Invalid choice !\n");
            break;
        }
    }
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
