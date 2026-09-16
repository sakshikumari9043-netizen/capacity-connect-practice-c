#include <stdio.h>
#include <string.h>

// Structure to store student details
struct Student
{
    char name[50];
    int rollNo;
    char course[50];
    int progress;
};

int main()
{
    struct Student s;
    int choice;
    int enrolled = 0; // Flag to check enrollment

    do
    {
        printf("\n==============================");
        printf("\n   CAPACITY CONNECT PORTAL");
        printf("\n==============================");
        printf("\n1. Display Available Courses");
        printf("\n2. Enroll Student");
        printf("\n3. Update Completion Progress");
        printf("\n4. Display Student Details");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n--- Available Courses ---");
                printf("\n1. C Programming");
                printf("\n2. Data Structures");
                printf("\n3. Web Development");
                printf("\n4. Python Programming");
                printf("\n5. Artificial Intelligence");
                printf("\n-------------------------\n");
                break;

            case 2:
                printf("\nEnter Student Name: ");
                scanf(" %[^\n]", s.name);

                printf("Enter Roll Number: ");
                scanf("%d", &s.rollNo);

                printf("Enter Course Name: ");
                scanf(" %[^\n]", s.course);

                s.progress = 0; // Initial progress
                enrolled = 1;

                printf("\nStudent enrolled successfully!\n");
                break;

            case 3:
                if(enrolled)
                {
                    printf("Enter Completion Progress (0-100): ");
                    scanf("%d", &s.progress);

                    if(s.progress < 0)
                        s.progress = 0;
                    if(s.progress > 100)
                        s.progress = 100;

                    printf("Progress updated successfully!\n");
                }
                else
                {
                    printf("\nNo student enrolled yet!\n");
                }
                break;

            case 4:
                if(enrolled)
                {
                    printf("\n--- Student Details ---");
                    printf("\nName      : %s", s.name);
                    printf("\nRoll No   : %d", s.rollNo);
                    printf("\nCourse    : %s", s.course);
                    printf("\nProgress  : %d%%", s.progress);

                    if(s.progress == 100)
                        printf("\nCertificate Status : Eligible");
                    else
                        printf("\nCertificate Status : Not Eligible");

                    printf("\n-------------------------\n");
                }
                else
                {
                    printf("\nNo student enrolled yet!\n");
                }
                break;

            case 5:
                printf("\nThank you for using Capacity Connect!\n");
                break;

            default:
                printf("\nInvalid Choice! Please try again.\n");
        }

    } while(choice != 5);

    return 0;
}