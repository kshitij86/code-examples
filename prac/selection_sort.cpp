#include "util.h"

using namespace std;

void selection_sort(int list[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int indexOfSmallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (list[indexOfSmallest] > list[j])
            {
                indexOfSmallest = j;
            }
        }

        int temp = list[i];
        list[i] = list[indexOfSmallest];
        list[indexOfSmallest] = temp;
    }
}

int main()
{
    int list[] = {2, 4, 1, 5, 6};
    selection_sort(list, 5);
    print_list(list, 5);

    return 0;
}