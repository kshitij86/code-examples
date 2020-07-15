#include "util.h"
using namespace std;

void bubble_sort(int list[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                swapped = true;
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }

        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int list[] = {4, 2, 3, 92939, 89};
    bubble_sort(list, 5);
    print_list(list, 5);
}