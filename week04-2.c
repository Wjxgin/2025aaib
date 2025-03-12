//week04-2.c

int maximumCount(int* nums, int numsSize) {
    int pos=0;
    int neg=0;
    for(int i=0; i<numsSize; i++){
        if( nums[i] > 0 )pos++;
        if( nums[i] < 0 )neg++;
    }

    if(pos>neg)return pos;
    else return neg;
}
