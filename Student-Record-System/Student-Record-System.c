// This is a program to record student details and to find the student with highest cgpa 
#include <stdio.h>
struct student{
        char name[30];
        int roll_no;
        int semester;
        char branch[30];
        float cgpa;
    };
int main() {
    int i,index,n;
    float highestCgpa;
    printf("Enter number of students:");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++){
        printf("Name of student:");
        scanf(" %[^\n]",s[i].name);
        printf("Roll Number:");
        scanf("%d",&s[i].roll_no);
        printf("Semester:");
        scanf("%d",&s[i].semester);
        printf("Branch:");
        scanf("%s",s[i].branch);
        printf("cgpa:");
        scanf("%f",&s[i].cgpa);
    }
    
    
    for(i=0;i<n;i++){
        printf("----STUDENT %d DETAIL----\n",i+1);
        printf("Name:%s \n",s[i].name);
        printf("Roll Number:%d \n",s[i].roll_no);
        printf("Semester:%d \n",s[i].semester);
        printf("Branch:%s \n",s[i].branch);
        printf("cgpa:%.2f \n",s[i].cgpa);
    }
    highestCgpa=s[0].cgpa;
    index=0;
    for(i=1;i<n;i++){
        if(s[i].cgpa>highestCgpa){
            highestCgpa=s[i].cgpa;
            index=i;
        }
    }
    printf("%s have highest cgpa:%.2f",s[index].name,highestCgpa);
    return 0;
}
