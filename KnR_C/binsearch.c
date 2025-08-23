/* A simple binary search algorithm implemented in C KnR 3.3 */

int main(int x, int v[], int n)
{
    int low, high, mid;

/* I believe improvement can be made on this, revisit */

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}