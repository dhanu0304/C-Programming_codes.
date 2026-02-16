// C program to display any 4 car company details using nested structure and the elements of the structure are company name ,model ,price and manufacturing date.
#include <stdio.h>
struct date {
    int day;
    int month;
    int year;
};
struct car {
    char company_name[30];
    char model[30];
    float price;
    struct date mfg_date;
};
int main() {
    struct car c1 = {"Toyota", "Camry", 24425.50, {15, 5, 2021}};
    struct car c2 = {"Honda", "Civic", 22000.00, {20, 3, 2020}};
    struct car c3 = {"Ford", "Mustang", 26000.75, {10, 7, 2019}};
    struct car c4 = {"Chevrolet", "Malibu", 23000.00, {5, 11, 2022}};
    printf("Car 1:\nCompany: %s\nModel: %s\nPrice: %.2f\nManufacturing Date: %02d/%02d/%04d\n\n", c1.company_name, c1.model, c1.price, c1.mfg_date.day, c1.mfg_date.month, c1.mfg_date.year);
    printf("Car 2:\nCompany: %s\nModel: %s\nPrice: %.2f\nManufacturing Date: %02d/%02d/%04d\n\n", c2.company_name, c2.model, c2.price, c2.mfg_date.day, c2.mfg_date.month, c2.mfg_date.year);
    printf("Car 3:\nCompany: %s\nModel: %s\nPrice: %.2f\nManufacturing Date: %02d/%02d/%04d\n\n", c3.company_name, c3.model, c3.price, c3.mfg_date.day, c3.mfg_date.month, c3.mfg_date.year);
    printf("Car 4:\nCompany: %s\nModel: %s\nPrice: %.2f\nManufacturing Date: %02d/%02d/%04d\n", c4.company_name, c4.model, c4.price, c4.mfg_date.day, c4.mfg_date.month, c4.mfg_date.year);
    return 0;
}