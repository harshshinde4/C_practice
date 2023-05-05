
int (*(*get_function_ptr_arr(void))[5])(int, int);

int main(void)
{
    int (*(*(*pfn)(void))[5])(int, int);
    int (*(*p)[5])(int, int);
    int i;
    int n1, n2;
    int ret;

    pfn = get_function_ptr_arr;
    p = pfn();
    for(i = 0; i < 5; ++i)
        (*p)[i](n1, n2);

}

int (*(*get_function_ptr_arr(void))[5])(int, int)
{

}

struct node
{
    int data;
    struct node* prev;
    struct node* next;
};