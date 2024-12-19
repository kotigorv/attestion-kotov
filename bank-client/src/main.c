#include"app.h"

int main()
{
    int sz = sizeof(struct Client);

    printf("%d\n", sz);



    CLIENT clients[] = {
        {"Igor", 52, 200000},
        {"Yaroslav", 69, 150000},
        {"Andrey", 30, 190000}

    };

    print_array(clients, 3);

    return 0;
}
