#pragma once

#include<stdio.h>

struct Client {
    char name[128];
    int id;
    double limit;

};

typedef struct Client CLIENT;
typedef struct Client* PCLIENT;

void print(PCLIENT list);

void print_array(CLIENT client[], int size);