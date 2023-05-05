struct A
{
    int a;          // 0 
    char b;         // 4
    float c;        // 8
    float d;        // 12
    int arr[4];     // 16
};  // sizeof(struct A) = 32

struct B
{
    short s1, s2;
    int arr[5];
    double arr2[5];
}inB = {0x1020, 0x3040,
        {0xa0b0c0d0, 0xffa0ffb0ffc0, 0x1a2b3c4d, 0xff1098ff, 0x676ff6},
        {2, 3.3, 4.4, 5.5}};

//  sizeof(struct B) == 64

int main(void)
{
    ((struct A*)&inB)->d = 0x11111111;
    *(short*)&(((struct A*)&inB)->d) = 0xdddd;
    return(0);
}