#include <stdio.h>
#include <stdint.h>
#include <string.h>

struct infor {
    char name[32];
    char mssv[8];
    uint8_t course_c;
};

void infor_input(struct infor* stu_infor) {
    printf ("Name: ");	
    scanf ("%s", stu_infor->name);
    fgets(stu_infor->name, sizeof(stu_infor->name), stdin); //DC: copilot
    stu_infor->name[strcspn(stu_infor->name, "\n")] = '\0'; //DC: copilot

    printf ("MSSV: ");
    scanf ("%s", stu_infor->mssv);

    printf ("Course: ");
    scanf ("%hhu,", &stu_infor->course_c);
}

void infor_print(struct infor* stu_infor) {
    printf("Information: \n");
    printf("Name: %s\n", stu_infor->name);
    printf("MSSV: %s\n", stu_infor->mssv);
    printf("Course: %hhu\n", stu_infor->course_c);
}

int main() {
   struct infor student;
   infor_input(&student);
   infor_print(&student);

   return 0;
}