//
// Created by Ovidiu on 5/3/22.
//

// arrfun1.cpp -- functions with an array argument
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n); // prototype
int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
// some systems require preceding int with static to
// enable array initialization
    int sum = sum_arr(cookies, ArSize);
    cout << "Total cookies eaten: " << sum << "\n";
    return 0;
}
// return the sum of an integer array
int sum_arr(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total;
}

/*
 *
 * Here cookies is the name of an array, hence by C++ rules cookies is the address of
the array’s first element.The function passes an address. Because the array has type int
elements, cookies must be type pointer-to-int, or int *.This suggests that the correct
function header should be this:
    int sum_arr(int * arr, int n) // arr = array name, n = size
Here int *arr has replaced int arr[]. It turns out that both headers are correct
because in C++ the notations int *arr and int arr[] have the identical meaning when
(and only when) used in a function header or function prototype. Both mean that arr is a
pointer-to-int.

 However, the array notation version (int arr[]) symbolically reminds
you that arr not only points to an int, it points to the first int in an array of ints.This
book uses the array notation when the pointer is to the first element of an array, and it
uses the pointer notation when the pointer is to an isolated value. Remember that the
notations int *arr and int arr[] are not synonymous in any other context. For example,
you can’t use the notation int tip[] to declare a pointer in the body of a function.
Given that the variable arr actually is a pointer, the rest of the function makes sense.As
you might recall from the discussion of dynamic arrays in Chapter 4, you can use the
bracket array notation equally well with array names or with pointers to access elements
of an array.Whether arr is a pointer or an array name, the expression arr[3] means the
fourth element of the array.

 And it probably will do no harm at this point to remind you
of the following two identities:

    arr[i] == *(ar + i) // values in two notations
    &arr[i] == ar + i // addresses in two notations

Remember that adding one to a pointer, including an array name, actually adds a
value equal to the size, in bytes, of the type to which the pointer points. Pointer addition
and array subscription are two equivalent ways of counting elements from the beginning
of an array.
 *
 * */