#include <stdio.h>

// OPTION 1

struct Date 
{
    int day;
    int month;
    int year;
};

typedef struct Date Date_t;

///////////////////////////////////////////////

// OPTION 2

typedef 
struct Date 
{
    int day;
    int month;
    int year;
}

Date_t;

////////////////////////////////////////////////

// OPTION 3

typedef struct Date Date_t;

struct Date 
{
    int day;
    int month;
    int year;
};

///////////////////////////////////////////////////