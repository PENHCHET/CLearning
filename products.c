#include <stdio.h>
#include <conio.h>

void main() {
    char pname[100][20];
    int qty[100], 
        n = 0,
        i = 0;
    float price[100];
    float A = 0;
    char Date[100][15];
    do{
        clrscr();
        printf("Enter Product Name: ");
        scanf("%s", &pname[n]);
        printf("Enter Qty: ");
        scanf("%d", &qty[n]);
        printf("Enter Price: ");
        scanf("%f", &price[n]);
        printf("Enter Date: ");
        scanf("%s", &Date[n]);
        n = n + 1;
    }while(n<2);
    printf("List product order is:\n");
    for(i=0;i<n;i++) {
        printf("%d\t%s\t%d\t%2f\t%s\t%2f\n", i+1, pname[i], qty[i], price[i], Date[i], qty[i]*price[i]);
		A = A + qty[i] * price[i];
    }
    printf("Total Amount = %f", A);
}
