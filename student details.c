 #include <stdio.h>
 #include <string.h>
 struct student
 {
    int rollno;
    char name[20];
    float mark1;
    float mark2;
    float mark3;
 };
 int main()
 {
    struct student s;
    scanf("%d",&s.rollno);
    scanf("\n %s",&s.name);


 scanf("%f",&s.mark1);
 scanf("%f",&s.mark2);
 scanf("%f",&s.mark3);
 printf("student details");
 printf("Roll No: %d\n",s.rollno);
 printf("Name: %s\n",s.name);
 printf("mark 1: %.1f\n", s.mark1);
 printf("mark 2: %.1f\n", s.mark2);
 printf("mark 3: %.1f\n", s.mark3);
 return 0;
 }
