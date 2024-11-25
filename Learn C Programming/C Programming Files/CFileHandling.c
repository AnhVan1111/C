#include <stdio.h>
#include <stdlib.h>
// Ex: Write to a text file
/*int main() {
    int num;
    FILE *fptr;
    fptr = fopen("fun.txt", "w"); // w: Open for writing.

    if (fptr = NULL) {
        printf("Error!!!");
        exit(1);
    }
    printf("Enter number: ");
    scanf("%d", &num);

    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;   
}*/

// Ex: Write to a text file
/*int main() {
    int num;
    FILE *fptr;

    if ((fptr = fopen("progarm.txt","r")) == NULL) {   // r: Open for reading.
        printf("Error!!! Opening file");
        exit(1);    
    }
    fprintf(fptr,"%d", &num);
    printf("Value of n=%d", num);
    fclose(fptr);

    return 0;
}*/


//Ex: Write to a binary file using fwrite()
/*struct threeNum
{
   int n1, n2, n3;
};

int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;

   if ((fptr = fopen("program.bin","wb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   for(n = 1; n < 5; ++n)
   {
      num.n1 = n;
      num.n2 = 5*n;
      num.n3 = 5*n + 1;
      fwrite(&num, sizeof(struct threeNum), 1, fptr); 
   }
   fclose(fptr); 
  
   return 0;
}*/

// Ex: Read from a binary file using fread()
struct threeNum
{
   int n1, n2, n3;
};

int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;

   if ((fptr = fopen("program.bin","rb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   for(n = 1; n < 5; ++n)
   {
      fread(&num, sizeof(struct threeNum), 1, fptr); 
      printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
   }
   fclose(fptr); 
  
   return 0;
}