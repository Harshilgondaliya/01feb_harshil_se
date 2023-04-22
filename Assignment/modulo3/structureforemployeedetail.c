 // WAP to structure employee that provides the following information -print and display employee no, employee name, address and age

#include<stdio.h> 
struct data
{
    int no,age;
    char name[26],add[70];
};

int main()
{
    struct data obj;

    printf("Enter Your ID : ");
    scanf("%d",&obj.no); 

    printf("\nEnter Your Name : ");
    scanf("%s",&obj.name);

    printf("\nEnter Your Address : ");
    scanf("%s",&obj.add);

    printf("\nEnter Your Age : ");
    scanf("%d",&obj.age);

    printf("\n<<   Your personal Details is   >>\n");     
    printf("\n     - Your ID is      : %d \n     - Your Name is    : %s \n     - Your Address is : %s \n     - Your Age is     : %d",obj.no,obj.name,obj.add,obj.age);    


}