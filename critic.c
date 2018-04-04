/* John Whelan
   CIS190
   Lab 11-Problem 1 */
 
//preprocessor directives
#include <stdio.h>
#include <string.h>
 
 
//create the structure
typedef struct review{
    char restaurant[15];
    char foodType[21];
    double avgPrice;
    int rating;
}REVIEW;
 
 //function prototype
void print (REVIEW);

//main method
int main(void)
{
    FILE *file;
    file = fopen("reviews.txt", "r");
    int numRev,i;
    char userRest[15];
    struct review *ptr;
    fscanf(file,"%d", &numRev);
    ptr=(REVIEW *)malloc(numRev*sizeof(REVIEW));
    printf("\nNumber of Reviews: %d\n\n", numRev);
    for(i=0;i<numRev;i++)
        {
        fscanf(file,"%s",ptr[i].restaurant);
        fscanf(file,"%s",ptr[i].foodType);
        fscanf(file,"%lf",&ptr[i].avgPrice);
        fscanf(file,"%d",&ptr[i].rating);
        }
    printf("Chili's | BurgerKing | IHOP | OliveGarden");
    printf("\nPlease enter the name of a restaurant:    ");
    scanf("%s", userRest);
    printf("_____________________________\n");
    if(!strcmp(userRest,ptr[0].restaurant))
        print(ptr[0]);
    if(!strcmp(userRest,ptr[1].restaurant))
        print(ptr[1]);
    if(!strcmp(userRest,ptr[2].restaurant))
        print(ptr[2]);
    if(!strcmp(userRest,ptr[3].restaurant))
        print(ptr[3]);
    printf("_____________________________\n");
    /*for(i=0;i<numRev;i++)
        print(ptr[i]);*/
    fclose(file);
    return 0;
}
 
void print (REVIEW x)
{
    printf("%s\n",x.restaurant);
    printf("\tFood Type: %s\n",x.foodType);
    printf("\tAvg. Meal: %.2lf\n",x.avgPrice);
    printf("\tRating: %d\n",x.rating);
}