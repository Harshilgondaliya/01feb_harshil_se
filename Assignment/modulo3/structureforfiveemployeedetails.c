// WAP to structure for five employee that provides the following information -print and display employee no, employee name, address and age
#include<stdio.h> 
struct data
{
    int no,age;
    char name[20],add[100];
};

int main()
{
    struct data obj[100];

    // creat loop for 5 employee data 
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Your ID : ");
        scanf("%d",&obj[i].no); 

        printf("\nEnter Your Name : ");
        scanf("%s",&obj[i].name);

        printf("\nEnter Your Address : ");
        scanf("%s",&obj[i].add);

        printf("\nEnter Your Age : ");
        scanf("%d",&obj[i].age);
    }
    printf("<<   Your Employee Details is   >> \n");

    for (int i = 0; i < 5; i++)
    
    {
        printf("\n<<   Your personal Details is   >>\n");     
        printf("\n     - Your ID is      : %d \n     - Your Name is    : %s \n     - Your Address is : %s \n     - Your Age is     : %d",obj[i].no,obj[i].name,obj[i].add,obj[i].age);    
    }

} 