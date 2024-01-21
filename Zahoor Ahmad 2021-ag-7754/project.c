#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 100
#define MAX_MEDICINE_HISTORY 50

struct Medicine {
    char medicineName[50];
    // Other fields related to medicine
};

struct Patient {
    int id;
    char name[50];
    char area[50];
    char healthReport[100];
    int days;
    struct Medicine medicineHistory[MAX_MEDICINE_HISTORY];
    int medicineCount;
};

struct Patient patients[MAX_PATIENTS];
int patientCount = 0;

void addPatient();
void savePatientsToFile();
void loadPatientsFromFile();
void searchPatientByName();
void editPatientRecord();
void manageMedicineHistory();
void generatePatientReports();


int main() {
    int choice;

    loadPatientsFromFile();

    do {
        printf("\nCovid Patient Tracking System\n");
        printf("1. Add patient record\n");
        printf("2. Save patient records to file\n");
        printf("3. Search patient by name\n");
        printf("4. Edit patient record\n");
        printf("5. Manage Covid patient Medicine history\n");
        printf("6. Generate patient reports\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPatient();
                break;
            case 2:
                savePatientsToFile();
                break;
            case 3:
                searchPatientByName();
                break;
            case 4:
                editPatientRecord();
                break;
            case 5:
                manageMedicineHistory();
                break;
            case 6:
                generatePatientReports();
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 7);

    return 0;
}



void addPatient() {
    if (patientCount < MAX_PATIENTS) {
        struct Patient newPatient;
        printf("Enter patient ID: ");
        scanf("%d", &newPatient.id);
        printf("Enter patient name: ");
        scanf("%s", newPatient.name);
        printf("Enter patient area: ");
        scanf("%s", newPatient.area);
        // Add other details like health report, days, etc.

        patients[patientCount++] = newPatient;
        printf("Patient record added successfully!\n");
    } else {
        printf("Patient database is full!\n");
    }
}

void savePatientsToFile() {
    FILE *file = fopen("patients.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    for (int i = 0; i < patientCount; ++i) {
        fprintf(file, "%d %s %s\n", patients[i].id, patients[i].name, patients[i].area);
        // Save other details to file
    }

    fclose(file);
}

void loadPatientsFromFile() {
    FILE *file = fopen("patients.txt", "r");
    if (file == NULL) {
        printf("No existing patient records found!\n");
        return;
    }

    while (fscanf(file, "%d %s %s", &patients[patientCount].id, patients[patientCount].name, patients[patientCount].area) != EOF) {
        // Load other details from file
        patientCount++;
        if (patientCount >= MAX_PATIENTS) {
            printf("Maximum number of patients reached!\n");
            break;
        }
    }

    fclose(file);
}

void searchPatientByName() {
    char searchName[50];
    printf("Enter patient name to search: ");
    scanf("%s", searchName);

    int found = 0;
    for (int i = 0; i < patientCount; ++i) {
        if (strcmp(patients[i].name, searchName) == 0) {
            printf("Patient found!\n");
            printf("Patient ID: %d\n", patients[i].id);
            printf("Patient Name: %d\n", patients[i].name);
            printf("Patient Area: %s\n", patients[i].area);
            printf("Patient Medicine History: %s\n", patients[i].medicineHistory);
            printf("Patient Days: %s\n", patients[i].days);
            printf("Patient Medicine Count: %s\n", patients[i].medicineCount);
            found = 1;
        }
    }
    if (!found) {
        printf("Patient not found!\n");
    }
}


void editPatientRecord() {
    int patientID;
    printf("Enter patient ID to edit: ");
    scanf("%d", &patientID);

    int found = 0;
    for (int i = 0; i < patientCount; ++i) {
        if (patients[i].id == patientID) {
            printf("Patient found!\n");
            printf("1. Edit patient name\n");
            printf("2. Edit patient area\n");
            printf("3. Edit health report\n");
            printf("4. Edit days\n");
            printf("Enter choice: ");
            int editChoice;
            scanf("%d", &editChoice);

            switch (editChoice) {
                case 1:
                    printf("Enter new name: ");
                    scanf("%s", patients[i].name);
                    printf("Patient name updated!\n");
                    break;
                case 2:
                    printf("Enter new area: ");
                    scanf("%s", patients[i].area);
                    printf("Patient area updated!\n");
                    break;
                case 3:
                    printf("Enter new health report: ");
                    scanf("%s", patients[i].healthReport);
                    printf("Health report updated!\n");
                    break;
                case 4:
                    printf("Enter new number of days: ");
                    scanf("%d", &patients[i].days);
                    printf("Number of days updated!\n");
                    break;
                default:
                    printf("Invalid choice!\n");
            }

            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Patient with ID %d not found!\n", patientID);
    }
}



void manageMedicineHistory() {
    int patientID;
    printf("Enter patient ID to manage medicine history: ");
    scanf("%d", &patientID);

    int found = 0;
    for (int i = 0; i < patientCount; ++i) {
        if (patients[i].id == patientID) {
            printf("Patient found!\n");
            printf("1. View medicine history\n");
            printf("2. Add medicine to history\n");
            printf("Enter choice: ");
            int manageChoice;
            scanf("%d", &manageChoice);

            switch (manageChoice) {
                case 1:
                    printf("Medicine history for patient ID %d:\n", patientID);
                    for (int j = 0; j < patients[i].medicineCount; ++j) {
                        printf("Medicine %d: %s\n", j + 1, patients[i].medicineHistory[j].medicineName);
                        // Print other details related to medicine
                    }
                    break;
                case 2:
                    if (patients[i].medicineCount < MAX_MEDICINE_HISTORY) {
                        printf("Enter medicine name to add: ");
                        scanf("%s", patients[i].medicineHistory[patients[i].medicineCount].medicineName);
                        // Add other details related to medicine
                        patients[i].medicineCount++;
                        printf("Medicine added to history!\n");
                    } else {
                        printf("Maximum medicine history limit reached!\n");
                    }
                    break;
                default:
                    printf("Invalid choice!\n");
            }

            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Patient with ID %d not found!\n", patientID);
    }
}



void generatePatientReports() {
    printf("Generating patient reports...\n");

    // Example: Generating report by area
    char searchArea[50];
    printf("Enter area to generate report: ");
    scanf("%s", searchArea);

    printf("Patients in area %s:\n", searchArea);
    for (int i = 0; i < patientCount; ++i) {
        if (strcmp(patients[i].area, searchArea) == 0) {
            printf("Patient ID: %d\n", patients[i].id);
            printf("Patient Name: %s\n", patients[i].name);
            // Print other details of the patient
        }
    }
}
// Implement other functions for searching, editing, medicine history, reports, etc.

