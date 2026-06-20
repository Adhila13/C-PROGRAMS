/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct student{
    char name[50];
    int rollNo;
    int semester;
    char branch[30];
    float cgpa;
};
int main() {
    int i;
    FILE* fp;
    struct student s[2];
    for(i=0;i<2;i++){
        printf("Enter Name:");
        scanf(" %[^\n]",s[i].name);
        printf("Enter Roll Number:");
        scanf("%d",&s[i].rollNo);
        printf("Enter semester:");
        scanf("%d",&s[i].semester);
        printf("Enter branch:");
        scanf(" %[^\n]",s[i].branch);
        printf("Enter CGPA:");
        scanf("%f",&s[i].cgpa);
    }
    fp=fopen("Student Record.txt","w");
    if(fp!=NULL){
        printf("File opened successfully\n");
    }
    else{
        printf("File opening unsuccessfull");
    }
    fprintf(fp,"----STUDENT RECORD----\n");
    for(i=0;i<2;i++){
        fprintf(fp,"Name:%s\n",s[i].name);
        fprintf(fp,"Roll Number:%d\n",s[i].rollNo);
        fprintf(fp,"semester:%d\n",s[i].semester);
        fprintf(fp,"branch:%s\n",s[i].branch);
        fprintf(fp,"CGPA:%0.2f\n",s[i].cgpa);
    }
    fclose(fp);

    fp=fopen("Student Record.txt","r");
    char line[100];
    fgets(line,100,fp);
    printf(line);
    for(i=0;i<2;i++){
        fscanf(fp,"Name:%[^\n]",s[i].name);
        fscanf(fp,"Roll Number:%d",&s[i].rollNo);
        fscanf(fp,"Semester:%d",&s[i].semester);
        fscanf(fp,"Branch:%s",s[i].branch);
        fscanf(fp,"CGPA:%f",&s[i].cgpa);
        printf("Name:%s\n",s[i].name);
        printf("Roll Number:%d\n",s[i].rollNo);
        printf("semester:%d\n",s[i].semester);
        printf("branch:%s\n",s[i].branch);
        printf("CGPA:%.2f\n",s[i].cgpa);
    }
    fclose(fp);
    
    return 0;
}