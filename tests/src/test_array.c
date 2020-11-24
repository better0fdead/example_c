#include "../../headers/array.h"
void pos_create_array()
{
    int wrong = 0;
    int *pb_start = NULL;
    int *pe_start = NULL;
    wrong = create_array(&pb_start, 5, &pe_start);
    delete_array(pb_start);
    printf("%s: %s\n", __func__, wrong ? "FAILED" : "OK");
}

void neg_create_array()
{
    int wrong = 0;
    int *pb_start = NULL;
    int *pe_start = NULL;
    wrong = create_array(&pb_start, -1, &pe_start);
    printf("%s: %s\n", __func__, wrong ? "OK" : "FAILED");
}