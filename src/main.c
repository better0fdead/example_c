#include "../headers/mysort.h"
#include "../headers/nums.h"
#include "../headers/array.h"

int main(int argc, char **argv)
{
    int *pb_src = NULL;
    int *pe_src = NULL;
    int *pb_dst = NULL;
    int *pe_dst = NULL;
    int n = 0;
    int flag = SUCCES;

    if (argc < 3 || (argc == 4 && strcmp(argv[3], "f") != 0))
    {
        flag = FAIL;
    }
    if (flag == SUCCES)
        flag = count_nums(argv[1], &n);
    if (flag == SUCCES)
        flag = create_array(&pb_src, n, &pe_src);
    if (flag == SUCCES)
        flag = read_nums(argv[1], pb_src, pe_src);
    if (flag != SUCCES)
    {
        delete_array(pb_src);
    }
    if (argc == 4 && flag == SUCCES)
    {
        flag = key(pb_src, pe_src, &pb_dst, &pe_dst);
        if (flag == SUCCES)
        {
            mysort(pb_dst, pe_dst - pb_dst, sizeof(int),comp);
            flag = output_arr(pb_dst, pe_dst, argv[2]);
        }
        delete_array(pb_dst);
    }
    if (argc != 4 && flag == SUCCES)
    {
        mysort(pb_src, pe_src - pb_src, sizeof(int),comp);
        flag = output_arr(pb_src, pe_src, argv[2]); 
    }
    delete_array(pb_src);
    return flag;
}
