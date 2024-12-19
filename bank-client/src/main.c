#include"app.h"

int main()
{
    int sz = sizeof(struct Client);

    printf("%d\n", sz);



    CLIENT clients[] = {
        {"Zalupenko", 52, 200000},
        {"Obrigan", 69, 150000},

    };

    print_array(clients, 2);

    return 0;
}