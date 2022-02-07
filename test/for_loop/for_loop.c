#include "string.h"
#define DEBUG_IF_ADDR 0x00002010

int main() 
{
    int unsorted_arr[7];
    int sorted_arr[] = {0,1,2,3,4,5,6};
    for(int i=0;i<7;i++){
	    unsorted_arr[i] = i;
    }
    int *addr_ptr = DEBUG_IF_ADDR;
    if(memcmp((char*) sorted_arr, (char*) unsorted_arr, 28) == 0)
    {
        //success
        *addr_ptr = 1;
    }
    else
    {
        //failure
        *addr_ptr = 0;
    }
    return 0;
}
