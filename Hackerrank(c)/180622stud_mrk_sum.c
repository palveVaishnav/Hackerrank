#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int s=0;
  for(int i=0;i<number_of_students;i++){
      s= *(marks+i) + s;
  }

  return s;
}

int main() {
    int number_of_students;
    char gender,g,b;
    int sum;
  
    scanf("%d", &number_of_students);       //Entering the number of students
    int *marks = (int *) malloc(number_of_students * sizeof (int));  //allocating memory  
    int *marksg = (int *) malloc(number_of_students * sizeof (int));  //allocating memory
    int *marksb = (int *) malloc(number_of_students * sizeof (int));  //allocating memory
 
    scanf(" %c", &gender);
    if(gender='g'){
        
        for (int student = 0; student < number_of_students; student++) {
            scanf("%d", (marksg + student));   //adding marks of  each student
        }
    }
    
    else if(gender='b'){
        for (int student = 0; student < number_of_students; student++){
        scanf("%d", (marksb + student));
        } 
    }
    
    else{
        printf("error in gender input");
    }
    
    if(gender='g'){
        sum=marks_summation(marksg,number_of_students,g);
        printf("%d", sum);
    }
    else{
        sum=marks_summation(marksb,number_of_students,b);
        printf("%d", sum);
    }
    



      //adding gender
    //did not find any relation betn the stored marks and the gender ! so
    // no way of using any condition to relate the marks and sum them up!!!

    // sum=marks_summation(marks,number_of_student,gender);
    // printf("%d", sum);
    free(marks);
    free(marksg);
    free(marksb);
 
    return 0;
}
 
 
