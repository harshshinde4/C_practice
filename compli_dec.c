/*

1. declare an array 5 of pointers to function accepting two int and returning int

        int (*arr[5])(int, int);

2. declare a pointer to array of pointer to function accepting two int
    and returning an int

        (int) (*(*p)[5])(int, int)

3.  signal is a function which accepts
        1) int
        2) pointer to a function
                which ccepts
                    i) an int
                returns
                    nothing

    returns
        pointer to a fun
            which accepts
                int
            returns
                nothing
            
->         void(*)(int) signal(int, void(*)(int))

