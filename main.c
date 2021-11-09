

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
void branches(int branch) // To Call the .text file
{

    FILE *fptr;

    switch (branch)
    {

    case 1:

    {
        fptr = fopen("computer.txt", "r");
        print(fptr);
        printf("\n");
        fclose(fptr);
    }

    break;

    case 2:
    {
        fptr = fopen("civil.txt", "r");
        print(fptr);
        printf("\n");
        fclose(fptr);
    }

    break;

    case 3:
    {
        fptr = fopen("chemical.txt", "r");
        print(fptr);
        printf("\n");
        fclose(fptr);
    }

    break;

    case 4:
    {
        fptr = fopen("mechanical.txt", "r");
        print(fptr);
        printf("\n");
        fclose(fptr);
    }

    break;

    case 5:
    {
        fptr = fopen("extc.txt", "r");
        print(fptr);
        fclose(fptr);
    }

    break;

    default:

        printf("\nUnable to open the file\n");
    }
}

// For About

void about(int choice) // To Call the .text file

{

    FILE *fptr;

    if (choice == 2)
    {
        fptr = fopen("aboutMyECF.txt", "r");
        print(fptr);
        printf("\n");
        fclose(fptr);
    }
}

// For More information

void info(int choice) // To Call the .text file
{

    FILE *fptr;

    if (choice == 3)
    {
        fptr = fopen("links.txt", "r");
        print(fptr);
        printf("\n");
        fclose(fptr);
    }
}

int main() // Homepage to select the Choice according to user choice
{
    int choice;
    int branch;

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
                branches(branch);

                break;

            case 2:

                printf("\n~~ You have selected Chemical engineering ~~\n\n");
                branches(branch);

                break;

            case 3:

                printf("\n~~ You have selected Mechanical engineering ~~\n\n");
                branches(branch);

                break;

            case 4:

                printf("\n~~ You have selected Civil engineering ~~\n\n");
                branches(branch);

                break;

            case 5:

                printf("\n~~ You have selected Entc engineering ~~\n\n");
                branches(branch);

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
            about(choice);

            break;

        case 3:

            printf("\n\n\t    ~ More Information ~\n\n");
            info(choice);

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
