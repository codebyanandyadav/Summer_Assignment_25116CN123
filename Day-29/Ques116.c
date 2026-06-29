//Inventory Management System

#include<stdio.h>

struct Item
{
    int code;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item stock[100];
    int total = 0;
    int option, i, id, found;

    while(1)
    {
        printf("\n====== INVENTORY MANAGEMENT SYSTEM ======\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                printf("\nEnter Product ID: ");
                scanf("%d", &stock[total].code);

                printf("Enter Product Name: ");
                scanf("%s", stock[total].name);

                printf("Enter Quantity: ");
                scanf("%d", &stock[total].quantity);

                printf("Enter Price: ");
                scanf("%f", &stock[total].price);

                total++;
                printf("Product Added Successfully.\n");
                break;

            case 2:
                if (total == 0)
                {
                    printf("No products available.\n");
                }
                else
                {
                    printf("\nID\tName\tQty\tPrice\n");
                    for (i = 0; i < total; i++)
                    {
                        printf("%d\t%s\t%d\t%.2f\n",
                               stock[i].code,
                               stock[i].name,
                               stock[i].quantity,
                               stock[i].price);
                    }
                }
                break;

            case 3:
                found = 0;
                printf("Enter Product ID to Search: ");
                scanf("%d", &id);

                for (i = 0; i < total; i++)
                {
                    if (stock[i].code == id)
                    {
                        printf("\nProduct Found\n");
                        printf("Name : %s\n", stock[i].name);
                        printf("Quantity : %d\n", stock[i].quantity);
                        printf("Price : %.2f\n", stock[i].price);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Product not found.\n");
                break;

            case 4:
                found = 0;
                printf("Enter Product ID: ");
                scanf("%d", &id);

                for (i = 0; i < total; i++)
                {
                    if (stock[i].code == id)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d", &stock[i].quantity);
                        printf("Quantity Updated.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Product not found.\n");
                break;

            case 5:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice.\n");
        }
    }

    return 0;
}