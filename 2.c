/*
#include<stdio.h>
struct Student{
 int roll;
 char name[50];
 int age;
 float weight;
};

int main(){
 int a;
struct Student s={12, "tamzid", 24, 75.6};
// s.roll = 12;
// s.age = 24;
// s.weight = 75.6;

 printf(" roll=%d\n name=%d\n age=%d\n weight= %d\n", s.roll, s.name, s.age, s.weight);
 return 0;
}
*/
/*
#include<stdio.h>
struct Student {
 double weight;
 int roll;
};
int main(){
struct Student s[10];
int i;
for(i=0; i<10; i++){
    s[i].roll= 11+i;
    s[i].weight = 45.5+i*2;
}
for(i=0; i<10; i++){
   printf("%d %lf\n",s[i].roll, s[i].weight);
}
return 0;
}
*/
/*
#include<stdio.h>
struct Student{
double weight;
int roll;
int age;
};
int main(){
struct Student s = {.roll=12, .weight=85.3, .age=24};
struct Student* sp;
sp=&s;
printf("%d %lf %d\n", sp->roll, sp->weight, sp->age);
return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
struct Point
{
    int x;
    int y;
};
double distance(struct Point p, struct Point q)
{
    return sqrt(pow(p.x-q.x,2) + pow(p.y-q.y,2));
}

int main()
{
    struct Point, p1,p2;
    scanf("%d %d", &p1.x, &p1.y);
    scanf("%d %d", &p2.x, &p2.y);
    printf("The distance between them = %lf\n",distance(p1,p2));

    return 0;
}
*/
/*
#include<stdio.h>
struct Student {
 char name[100];
 int roll;
 int marks;
};
int main(){
struct Student s;
printf("Enter information: \n");
printf("Enter name: ");
scanf("%s", s.name);
printf("Enter roll number: ");
scanf("%d", &s.roll);
printf("Enter marks: ");
scanf("%d", &s.marks);

//print result
printf("Displaying Information: \n");
printf("Name: %s \n", s.name);
printf("Roll number: %d \n", s.roll);
printf("Marks: %d", s.marks);

return 0;
}
*/
#include<stdio.h>

void PBR(int *a){
	*a=20;
	printf("\nThe value of a inside function is : %d",*a);
}

int main(){
	int a =10;
	printf("Value of a before passing :%d\n",a);
	PBR(&a);
	printf("\nValue of a after calling : %d",a);
	return 0;
}

