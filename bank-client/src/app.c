#include"app.h"

void print(PCLIENT client)
{
    printf("name=%s\n", client->name);
    printf("id=%d\n", client->id);
    printf("priority=%f\n", client->limit);
};
void print_array(CLIENT client[], int size)

{
    int i;
    for (i = 0; i < size; ++i)
    {
        print(&client[i]);
        printf("--------\n");
    }
}