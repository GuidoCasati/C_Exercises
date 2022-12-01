/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main()
{
    typedef struct {
      uint16_t rnti;
      unsigned int uid;
      char cg_buf[32768];
      uint8_t UE_beam_index;
      bool Msg3_dcch_dtch;
      bool Msg4_ACKed;
      uint32_t ra_timer;
      float ul_thr_ue;
      float dl_thr_ue;
    } NR_UE_info_t;

    typedef struct UEsched_s {
        float coef; // size 4
        NR_UE_info_t * UE; // size 8 == size for a 64-bit computer machine, it would be 8 bytes
    } UEsched_t;

    #define MAX_NUM_UES 8
    UEsched_t UE_sched[MAX_NUM_UES] = {0};

    printf("Size of NR_UE_info_t %ld, UE_sched %ld (= sizeof(UEsched_t) %ld x MAX_NUM_UES %d), *UE_sched %ld\n",
     sizeof(NR_UE_info_t),
     sizeof(UE_sched),
     sizeof(UEsched_t),
     MAX_NUM_UES,
     sizeof(*UE_sched));

    printf("size of each element is %ld bytes, number of UE_sched elements is %ld ", sizeof(*UE_sched), sizeof(UE_sched)/sizeof(*(UE_sched)));

    return 0;
}


 # Size of NR_UE_info_t 32792, UE_sched 128 (= sizeof(UEsched_t) 16 x MAX_NUM_UES 8), *UE_sched 16
 # size of each element is 16 bytes, number of UE_sched elements is 8 
 # 
 # ...Program finished with exit code 0
 # Press ENTER to exit console.