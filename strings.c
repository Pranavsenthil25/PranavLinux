#include <stdio.h>
#include <string.h>

#define MAX 50  // Define the maximum length for strings

void to_uppercase(char* str);

int main() {
    char first[MAX], second[MAX], name[MAX], str[MAX];
    int year;

    // Input first and second names
    printf("Enter your first name: ");
    scanf("%s", first);

    printf("Enter your second name: ");
    scanf("%s", second);

    // Convert second name to uppercase and store in str
    strcpy(str, second);  // Copy second name to str
    to_uppercase(str);    // Convert to uppercase
    printf("Uppercase Second Name: %s\n", str);

    // Compare second and str
    int result = strcmp(second, str);
    printf("Comparison result between second and str: %d\n", result);

    // Concatenate first and second names
    strcpy(name, first);
    strncat(name, " ", 1);
    strncat(name, second, MAX - strlen(name) - 1);
    printf("Full Name: %s\n", name);

    // Read birth year and concatenate with name
    printf("Enter your birth year: ");
    scanf("%d", &year);
    snprintf(name, sizeof(name), "%s %s %d", first, second, year);
    printf("Full Name with Year: %s\n", name);

    // Extract first name, second name, and year
    char read_first[MAX], read_second[MAX];
    int read_year;
    sscanf(name, "%s %s %d", read_first, read_second, &read_year);
    printf("Extracted First Name: %s, Second Name: %s, Year: %d\n", read_first, read_second, read_year);

    return 0;
}

// Function to convert a string to uppercase
void to_uppercase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // Convert to uppercase
        }
    }
}
