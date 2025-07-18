#include <stdio.h>
#include <stdlib.h>

int LengthInput;
int WidthInput;
int HeightInput;
int OperationInput;
float PerimeterAns;
float AreaAns;
float VolumeAns;
float TotSurAreaAns;

char ExitOutput(int OperationInput){
    TotSurAreaAns= 2*((LengthInput*WidthInput)+(WidthInput*HeightInput)+(LengthInput*HeightInput));
 if (OperationInput==5){
        system("cls");
        printf("Thank you for using our service :))");
 }
}

float TotalSurfaceArea(int OperationInput){
    TotSurAreaAns= 2*((LengthInput*WidthInput)+(WidthInput*HeightInput)+(LengthInput*HeightInput));
 if (OperationInput==4){
        printf("- - - - - - - - -\n");
        printf("     Total Surface Area: %f\n", TotSurAreaAns);
        printf("- - - - - - - - -\n");
        printf("Enter Selected Operation Number: ");
        scanf("%d", &OperationInput);
        printf("%s", ExitOutput(OperationInput));
 }
}

float Volume(int OperationInput){
    VolumeAns= (LengthInput*WidthInput*HeightInput);
 if (OperationInput==3){
        printf("- - - - - - - - -\n");
        printf("     Volume: %f\n", VolumeAns);
        printf("- - - - - - - - -\n");
        printf("Enter Selected Operation Number: ");
        scanf("%d", &OperationInput);
        printf("%f", TotalSurfaceArea(OperationInput));
 }
}

float Area(int OperationInput){
    AreaAns= (LengthInput*WidthInput);
 if (OperationInput==2){
        printf("- - - - - - - - -\n");
        printf("     Area: %f\n", AreaAns);
        printf("- - - - - - - - -\n");
        printf("Enter Selected Operation Number: ");
        scanf("%d", &OperationInput);
        printf("%f", Volume(OperationInput));
 }
}

float Perimeter (int OperationInput){
    PerimeterAns= (LengthInput+WidthInput)*2;
 if (OperationInput==1){
        printf("- - - - - - - - -\n");
        printf("     Perimeter: %f\n", PerimeterAns);
        printf("- - - - - - - - -\n");
        printf("Enter Selected Operation Number: ");
        scanf("%d", &OperationInput);
        printf("%f", Area(OperationInput));
 }
}
int main()
{
    printf("Enter Length: ");
    scanf("%d", &LengthInput);
    printf("Enter Width: ");
    scanf("%d", &WidthInput);
    printf("Enter Height: ");
    scanf("%d", &HeightInput);

    printf("\nPlease select from the list of operations below:\n \n");
    printf("[Operations]\n");
    printf("[1] Compute Perimeter\n");
    printf("[2] Compute Area\n");
    printf("[3] Compute Volume\n");
    printf("[4] Compute Total Surface Area\n");
    printf("[5] Exit\n");
    printf("Enter Selected Operation Number: ");
    scanf("%d", &OperationInput);
    printf("%f", Perimeter(OperationInput));
    return 0;
}

