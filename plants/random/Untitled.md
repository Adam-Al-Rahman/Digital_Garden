```c
#include <stdio.h>

/**
 * wap: which mean without using the string library
 */

#define NULL ((void *)0)

struct SubCourses{

    char sub_course_1[25];
    char sub_course_2[25];
    char sub_course_3[25];
    char sub_course_4[25];

};

struct Departments{
    char Name[50];
    struct SubCourses SubCourse;
};

void PrintDepartment(struct Departments Deparment);

int main(){

    // School of Computer Science
    struct Departments ComputerScience = {
        "School of Computer Science",
        "BCA",
        "MCA",
        "B.Tech",
        "M.Tech"
    };

    // School of Computer Engineering
    struct Departments Engineering = {
        "School of Engineering",
        "Mechanical Engineer",
        "Civil Engineer",
        "Electronic Engineer",
        "Chemical Engineer"
    };

    // School of Bussiness
    struct Departments Bussiness = {
        "School of Bussiness",
        "BBA",
        "MBA",
        "BBS",
        "MBS"
    };

    // School of Pharmacy
    struct Departments Pharmacy = {
        "School of Pharmacy",
        "M Pharma",
        "D Pharma",
        "B Pharma",
        "Pharmacology"
    };

    int sub_course_num;
    printf("\nList of Course: \n 1. School of Computer Science \n 2. School of Bussiness \n 3. School of Engineering \n 4. School of Pharmacy");

    while(1){
    printf("\n\nEnter the [1, 2, 3, 4] for Sub-Course: ");
    scanf("%d", &sub_course_num);
    if (sub_course_num == 1){
        PrintDepartment(ComputerScience);
    }
    else if (sub_course_num == 2){
        PrintDepartment(Bussiness);

    }
    else if(sub_course_num == 3){
        PrintDepartment(Engineering);

    }
    else if (sub_course_num == 4){
        PrintDepartment(Pharmacy);
    }
    else{
        break;
    }}
}


void PrintDepartment(struct Departments Deparment){
    printf("\nDepartment Name: %s", Deparment.Name);
    printf("\nCourses:  ");
    printf("\n a. %s", Deparment.SubCourse.sub_course_1);
    printf("\n b. %s", Deparment.SubCourse.sub_course_2);
    printf("\n c. %s", Deparment.SubCourse.sub_course_3);
    printf("\n d. %s", Deparment.SubCourse.sub_course_4);

}

/**
 * How can we improve the code:
 * - In function PrintDepartment we can check if the return type of sub_course is true or not.
 * - can write a function for department instead of creating struct of each one.
 *      - Like,
 *      void (char SchoolName[25], char SubCourse1[25], char SubCourse2[25], char SubCourse3[25] ){
 *          struct Departments SchoolName = {
 *              SchoolName,
 *              SubCourse1,
 *              SubCourse2,
 *              SubCourse3
 *          };
 *       }
 *
 */
```