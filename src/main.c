// Student Record Search System
// Academic Mini Project (2022)
// Implements multi-field search with basic fuzzy matching
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 68

typedef struct student
{
    char fname[20];
    char lname[20];
    int rollNo;
    int year;
    char gender[7];
} stud;

stud s[n] = {
    {"Aditya", "Kulkarni", 1, 2005, "Male"},
    {"Riya", "Ambadkar", 2, 2005, "Female"},
    {"Satyam", "Amte", 3, 2005, "Male"},
    {"Astha", "Anantwar", 4, 2005, "Female"},
    {"Anchit", "Chedge", 5, 2005, "Male"},
    {"Manshri", "Akhtar", 6, 2006, "Female"},
    {"Prathamesh", "Bansod", 7, 2005, "Male"},
    {"Sayali", "Bhaskarwar", 8, 2005, "Female"},
    {"Veer", "Bisen", 9, 2005, "Male"},
    {"Aryan", "Chaulab", 10, 2005, "Male"},
    {"Nikhil", "Chopade", 11, 2005, "Male"},
    {"Devashri", "Kapse", 12, 2005, "Female"},
    {"Sakshi", "Dongare", 13, 2005, "Female"},
    {"Anushka", "Gajbhiye", 14, 2006, "Female"},
    {"Gargi", "Gamote", 15, 2005, "Female"},
    {"Janhvi", "Ghode", 16, 2005, "Female"},
    {"Grishma", "Dhawale", 17, 2005, "Female"},
    {"Tejaswini", "Hanwate", 18, 2005, "Female"},
    {"Vinit", "Hudiya", 19, 2005, "Female"},
    {"Aryan", "Ilamkar", 20, 2006, "Male"},
    {"Isha", "Khandelwal", 21, 2005, "Female"},
    {"Atharva", "Joshi", 22, 2005, "Male"},
    {"Aditya", "Kale", 23, 2004, "Male"},
    {"Minakshi", "Kapgate", 24, 2005, "Female"},
    {"Ayush", "Kathe", 25, 2005, "Male"},
    {"Sumeet", "Landge", 26, 2005, "Male"},
    {"Nishant", "Lilhare", 27, 2004, "Male"},
    {"Sejal", "Lodhi", 28, 2005, "Female"},
    {"Saloni", "Madavi", 29, 2004, "Female"},
    {"Om", "Mandwade", 30, 2005, "Male"},
    {"Sarthak", "Mannode", 31, 2005, "Male"},
    {"Yash", "Meshram", 32, 2005, "Male"},
    {"Mansi", "Motghare", 33, 2005, "Female"},
    {"Mohit", "Nagarkar", 34, 2005, "Male"},
    {"Shreyash", "Nahate", 35, 2004, "Male"},
    {"Gunjan", "Narnaware", 36, 2005, "Female"},
    {"Nayan", "Ganvir", 37, 2005, "Male"},
    {"Ritesh", "Nayse", 38, 2005, "Male"},
    {"Owais", "Ansari", 39, 2005, "Male"},
    {"Shubhangi", "Pandhare", 40, 2005, "Female"},
    {"Pratiksha", "Parashar", 41, 2005, "Female"},
    {"Parth", "Agrawal", 42, 2005, "Male"},
    {"Harsh", "Pashine", 43, 2005, "Male"},
    {"Shruti", "Pethe", 44, 2005, "Female"},
    {"Rajat", "Petkar", 45, 2005, "Male"},
    {"Gayatri", "Potbhare", 46, 2006, "Female"},
    {"Aryan", "Rathod", 47, 2004, "Male"},
    {"Dhanshri", "Raut", 48, 2004, "Female"},
    {"Mohak", "Raut", 49, 2005, "Male"},
    {"Ujwal", "Raut", 50, 2004, "Male"},
    {"Swaraj", "Rohad", 51, 2005, "Male"},
    {"Payal", "Ronghe", 52, 2005, "Female"},
    {"Palash", "Sadhwani", 53, 2005, "Male"},
    {"Akash", "Sahu", 54, 2005, "Male"},
    {"Anjali", "Shelke", 55, 2004, "Female"},
    {"Deepanshu", "Sherki", 56, 2004, "Male"},
    {"Srushti", "Shivanwan", 57, 2004, "Female"},
    {"Shirom", "Dubey", 58, 2005, "Male"},
    {"Abhishek", "Shukla", 59, 2005, "Male"},
    {"Kshitij", "Sontakke", 60, 2005, "Male"},
    {"Sujit", "Bopche", 61, 2006, "Male"},
    {"Tejas", "Mankari", 62, 2004, "Male"},
    {"Jeetesh", "Ukey", 63, 2006, "Male"},
    {"Pratiksha", "Umate", 64, 2005, "Female"},
    {"Vibhuti", "Wanjari", 65, 2005, "Female"},
    {"Om", "Yerkar", 66, 2005, "Male"},
    {"Satvik", "Yewale", 67, 2005, "Male"},
    {"Janhavi", "Zanjal", 68, 2005, "Female"},
};

void showData(stud a);
int checkString(char check[], char CHECK[]);
int checkInt(char *check, int CHECK);

// Main Function
int main()
{
    int i;
    while (1 == 1)
    {
        char target[20];
        printf("------------------------\n");
        printf("Search> ");
        scanf("%s", target);

        if (target[0] >= 97 && target[0] <= 122)
        {
            target[0] = target[0] - 32;
        }

        for (i = 0; i < n; i++)
        {
            if (checkInt(target, s[i].rollNo) == 1 || checkInt(target, s[i].year) == 1 || checkString(target, s[i].fname) == 1 || checkString(target, s[i].lname) == 1 || checkString(target, s[i].gender) == 1)
            {
                showData(s[i]);
            }
        }
    }
    return 0;
}

// Displays student details
void showData(stud a)
{
    printf("First Name: %s\n", a.fname);
    printf("Last Name: %s\n", a.lname);
    printf("Roll No: %d\n", a.rollNo);
    printf("Birth Year :%d\n", a.year);
    printf("Gender :%s\n", a.gender);

    printf("\n");
}

// Performs approximate string matching (fuzzy search)
int checkString(char check[], char CHECK[])
{
    int i;
    int flag = 0;
    for (i = 0; i < strlen(CHECK); i++)
    {
        if (check[i] == CHECK[i])
        {
            flag++;
        }
    }

    if (flag == strlen(check) || flag > strlen(check) - (strlen(check) / 2))
        return 1;
    else
        return 0;
}

// Checks numeric input against integer fields
int checkInt(char *check, int CHECK)
{
    int intCheck;
    intCheck = atoi(check);

    if (intCheck == CHECK)
        return 1;
    else
        return 0;
}
