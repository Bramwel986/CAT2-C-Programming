/*
Name:Bramwel Vitalis
Adm No:CT101/G/26519/25
Description:Integer processing program
*/

#include <stdio.h>
#include <stdlib.h>

// Function to write 10 integers to input.txt
void writeIntegersToFile() {
    FILE *file = fopen("input.txt", "w");
    if (file == NULL) {
        printf("Error: Could not create input.txt file.\n");
        return;
    }
    
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        int num;
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);
        fprintf(file, "%d\n", num);
    }
    
    fclose(file);
    printf("10 integers successfully written to input.txt\n\n");
}

// Function to read integers, calculate sum and average, and write to output.txt
void processIntegers() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
    
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
        return;
    }
    
    if (outputFile == NULL) {
        printf("Error: Could not create output.txt file.\n");
        fclose(inputFile);
        return;
    }
    
    int numbers[10];
    int sum = 0;
    int count = 0;
    
    // Read integers from input file
    for (int i = 0; i < 10; i++) {
        if (fscanf(inputFile, "%d", &numbers[i]) == 1) {
            sum += numbers[i];
            count++;
        }
    }
    
    // Calculate average
    double average = (count > 0) ? (double)sum / count : 0.0;
    
    // Write results to output file
    fprintf(outputFile, "Sum: %d\n", sum);
    fprintf(outputFile, "Average: %.2f\n", average);
    
    fclose(inputFile);
    fclose(outputFile);
    
    printf("Sum and average calculated and written to output.txt\n\n");
}

// Function to display contents of both files
void displayFiles() {
    printf("=== FILE CONTENTS ===\n");
    
    // Display input.txt contents
    printf("Contents of input.txt:\n");
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
    } else {
        int num;
        int count = 1;
        while (fscanf(inputFile, "%d", &num) == 1) {
            printf("Number %d: %d\n", count, num);
            count++;
        }
        fclose(inputFile);
    }
    
    printf("\n");
    
    // Display output.txt contents
    printf("Contents of output.txt:\n");
    FILE *outputFile = fopen("output.txt", "r");
    if (outputFile == NULL) {
        printf("Error: Could not open output.txt for reading.\n");
    } else {
        char line[100];
        while (fgets(line, sizeof(line), outputFile) != NULL) {
            printf("%s", line);
        }
        fclose(outputFile);
    }
    
    printf("\n");
}

int main() {
    int choice;
    
    do {
        printf("=== INTEGER PROCESSING PROGRAM ===\n");
        printf("1. Input 10 integers and save to file\n");
        printf("2. Process integers and calculate sum/average\n");
        printf("3. Display file contents\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                writeIntegersToFile();
                break;
            case 2:
                processIntegers();
                break;
            case 3:
                displayFiles();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter 1-4.\n\n");
        }
    } while (choice != 4);
    
    return 0;
}#include <stdio.h>
#include <stdlib.h>

// Function to write 10 integers to input.txt
void writeIntegersToFile() {
    FILE *file = fopen("input.txt", "w");
    if (file == NULL) {
        printf("Error: Could not create input.txt file.\n");
        return;
    }
    
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        int num;
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);
        fprintf(file, "%d\n", num);
    }
    
    fclose(file);
    printf("10 integers successfully written to input.txt\n\n");
}

// Function to read integers, calculate sum and average, and write to output.txt
void processIntegers() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
    
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
        return;
    }
    
    if (outputFile == NULL) {
        printf("Error: Could not create output.txt file.\n");
        fclose(inputFile);
        return;
    }
    
    int numbers[10];
    int sum = 0;
    int count = 0;
    
    // Read integers from input file
    for (int i = 0; i < 10; i++) {
        if (fscanf(inputFile, "%d", &numbers[i]) == 1) {
            sum += numbers[i];
            count++;
        }
    }
    
    // Calculate average
    double average = (count > 0) ? (double)sum / count : 0.0;
    
    // Write results to output file
    fprintf(outputFile, "Sum: %d\n", sum);
    fprintf(outputFile, "Average: %.2f\n", average);
    
    fclose(inputFile);
    fclose(outputFile);
    
    printf("Sum and average calculated and written to output.txt\n\n");
}

// Function to display contents of both files
void displayFiles() {
    printf("=== FILE CONTENTS ===\n");
    
    // Display input.txt contents
    printf("Contents of input.txt:\n");
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
    } else {
        int num;
        int count = 1;
        while (fscanf(inputFile, "%d", &num) == 1) {
            printf("Number %d: %d\n", count, num);
            count++;
        }
        fclose(inputFile);
    }
    
    printf("\n");
    
    // Display output.txt contents
    printf("Contents of output.txt:\n");
    FILE *outputFile = fopen("output.txt", "r");
    if (outputFile == NULL) {
        printf("Error: Could not open output.txt for reading.\n");
    } else {
        char line[100];
        while (fgets(line, sizeof(line), outputFile) != NULL) {
            printf("%s", line);
        }
        fclose(outputFile);
    }
    
    printf("\n");
}

int main() {
    int choice;
    
    do {
        printf("=== INTEGER PROCESSING PROGRAM ===\n");
        printf("1. Input 10 integers and save to file\n");
        printf("2. Process integers and calculate sum/average\n");
        printf("3. Display file contents\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                writeIntegersToFile();
                break;
            case 2:
                processIntegers();
                break;
            case 3:
                displayFiles();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter 1-4.\n\n");
        }
    } while (choice != 4);
    
    return 0;
}
