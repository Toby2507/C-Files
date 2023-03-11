#include <stdio.h>
#include <string.h>

typedef char user[25];
typedef struct
{
  char name[25];
  char password[12];
  int id;
} User;
typedef struct
{
  char name[12];
  float gpa;
} Student;

int main()
{
  // typedef = reserved keyword that gives an existing datatype a "nickname"

  // User user1 = {"Bro", "password123", 1231342342};
  // User user2 = {"Toby", "password321", 1827434827};

  // printf("%s\n", user1.name);
  // printf("%s\n", user1.password);
  // printf("%d\n", user1.id);

  // printf("%s\n", user2.name);
  // printf("%s\n", user2.password);
  // printf("%d", user2.id);

  // Array of structs

  Student student1 = {"Tinubu", 2.94};
  Student student2 = {"Peter", 4.98};
  Student student3 = {"Atiku", 3.94};
  Student student4 = {"Kwankwanso", 4.04};

  Student students[] = {student1, student2, student3, student4};

  for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
  {
    printf("%-12s\t%.2f\n", students[i].name, students[i].gpa);
  }

  return 0;
}