#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structure to store donor details
struct Donor {
    int id;
    char name[50];
    int age;
    char bloodGroup[5];
};

struct Donor donors[100]; // array of donors
int donorCount = 0;

// function to add a donor
void addDonor() {
    struct Donor d;
    printf("\nEnter Donor ID: ");
    scanf("%d", &d.id);
    printf("Enter Donor Name: ");
    scanf(" %[^\n]", d.name);
    printf("Enter Donor Age: ");
    scanf("%d", &d.age);
    printf("Enter Donor Blood Group: ");
    scanf("%s", d.bloodGroup);

    donors[donorCount++] = d;
    printf("\n✅ Donor added successfully!\n");
}

// function to display all donors
void displayDonors() {
    if (donorCount == 0) {
        printf("\nNo donor records available.\n");
        return;
    }

    printf("\n--- Donor List ---\n");
    for (int i = 0; i < donorCount; i++) {
        printf("ID: %d | Name: %s | Age: %d | Blood Group: %s\n",
               donors[i].id, donors[i].name, donors[i].age, donors[i].bloodGroup);
    }
}

// function to search donors by blood group
void searchDonor() {
    char bg[5];
    int found = 0;
    printf("\nEnter Blood Group to search: ");
    scanf("%s", bg);

    printf("\n--- Matching Donors ---\n");
    for (int i = 0; i < donorCount; i++) {
        if (strcmp(donors[i].bloodGroup, bg) == 0) {
            printf("ID: %d | Name: %s | Age: %d | Blood Group: %s\n",
                   donors[i].id, donors[i].name, donors[i].age, donors[i].bloodGroup);
            found = 1;
        }
    }

    if (!found) {
        printf("❌ No donors found with blood group %s\n", bg);
    }
}

// main function
int main() {
    int choice;
    while (1) {
        printf("\n=== Blood Bank Management System ===\n");
        printf("1. Add Donor\n");
        printf("2. Display Donors\n");
        printf("3. Search Donor by Blood Group\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addDonor(); break;
            case 2: displayDonors(); break;
            case 3: searchDonor(); break;
            case 4: exit(0);
            default: printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}
