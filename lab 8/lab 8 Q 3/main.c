#include <stdio.h>
#include <stdlib.h>
#define size 2
/*
    3. C Program to calculate sum of student degrees, and average of each subject, asks the user for
	students and subject numbers. (Dynamic Allocation of 2D Array - Pointer to Pointer)
*/
//by using struct :
typedef struct Student {
    int student_degree;
    int subject_number;
}student;


int main()
{
    int col;
    printf("enter the number of columns: \n");
    scanf("%d" , &col);
    student * arr[size];//array of2 pointer
    for(int i=0;i<size ;i++){
        arr[i] = (student *)malloc(col*sizeof(student));
    }
    for(int i =0;i<size ;i++){
        for(int j=0 ; j < col; j++){
                printf("enter student degree[%d][%d] : \n",i,j);
                scanf("%d",&arr[i][j].student_degree);
                printf("enter subject number[%d][%d] : \n",i,j);
                scanf("%d",&arr[i][j].subject_number);
        }
    }
    int student_degree_sum =0;
    int subject_number_avg =0;
    for(int i =0;i<size ;i++){
        for(int j=0 ; j < col; j++){
                printf("enter student degree[%d][%d] = %d \n",i,j,arr[i][j].student_degree);
                printf("enter subject number[%d][%d] = %d\n",i,j,arr[i][j].subject_number);
                student_degree_sum += arr[i][j].student_degree ;
                subject_number_avg += arr[i][j].subject_number;
        }

    }
    printf("------------------------------------------------------\n");
    printf("the sum of student degree = %d \n" , student_degree_sum);
    printf("------------------------------------------------------\n");
    printf("the avg of subject numbers = %d\n",subject_number_avg/(col+1));
    printf("------------------------------------------------------\n");


    return 0;
}
