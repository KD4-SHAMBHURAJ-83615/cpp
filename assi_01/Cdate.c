#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

void initDate(struct Date* ptrDate) {
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2001;
};


void acceptDateFromConsole(struct Date* ptrDate) {
    printf("ENTER THE DAY : ");
    scanf("%d", &ptrDate->day);
    printf("Enter THE MONTH : ");
    scanf("%d", &ptrDate->month);
    printf("Enter THE YEAR : ");
    scanf("%d", &ptrDate->year);
};
void printDateOnConsole(struct Date* ptrDate) {
    printf("Date: %d/%d/%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
};

int main() {
    struct Date date;
    int choice;

    initDate(&date);

    do {
        printf("0.EXIT\n");
        printf("1.ENTER THE DAY\n");
        printf("2.DISPLAY THE DATE\n");
        printf("ENTER THE CHOICE: ");
        scanf("%d", &choice);

        switch(choice) {
            case 0:
               printf("THANK YOU FOR VISITING\n");
                break;
            case 1:
            acceptDateFromConsole(&date);
                break;
            case 2:
                printDateOnConsole(&date);
                break;

            default:
                printf("ENTER THE VALID CHOICE\n");
        }
    } while(choice != 0);

    return 0;
}
