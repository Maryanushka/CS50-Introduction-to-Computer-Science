#include <stdio.h>
#include <cs50.h>

long long len(long long val);
int eachSecondSum(int arr[], int l);
int eachFirstSum(int arr[], int l);

int main()
{
    long long n = get_long_long("Number: ");
    long long l = len(n);
    int count = 0, remainder;
    int arr[l];
    int sum = 0;

//in this piece of code i add each element into an array cell
    while (n != 0)
    {
        remainder = n % 10;
        arr[count] = remainder;
        n         = n / 10;
        count++;
    }

//Here I compare the last elements of the card with the maps to get the name of the card
    if (arr[l - 1] == 4)
    {
        sum = eachSecondSum(arr, l) + eachFirstSum(arr, l);
        if (sum % 10 == 0)
        {
            printf("VISA\n");
        }
    }
    else if (arr[l - 1] == 3 )
    {
        if (arr[l - 2] == 7 || arr[l - 2] == 4)
        {
            sum = eachSecondSum(arr, l) + eachFirstSum(arr, l);
            if (sum % 10 == 0)
            {
                printf("AMEX\n");
            }
        }
    }
    else if (arr[l - 1] == 5)
    {
        if (arr[l - 2] == 1 || arr[l - 2] == 2 || arr[l - 2] == 3 || arr[l - 2] == 4 || arr[l - 2] == 5)
        {
            sum = eachSecondSum(arr, l) + eachFirstSum(arr, l);
            if (sum % 10 == 0)
            {
                printf("MASTERCARD\n");
            }
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}

long long len(long long val)
{
//in this func i get the length of my number
    long long result = 0;

    while (val != 0)
    {
        val /= 10;
        result++;
    }

    return result;
}

int eachSecondSum(int arr[], int l)
{
//this func count each second elem in card multiply it on 2 and get sum
    int sum = 0;

    for (int i = 1; i < l; i += 2)
    {
        arr[i] = arr[i] * 2;
        if (arr[i] > 9)
        {
            sum += arr[i] % 10 + arr[i] / 10;
        }
        else
        {
            sum += arr[i];
        }
    }
    return sum;
}

int eachFirstSum(int arr[], int l)
{
//this func get sum of first element in card
    int sum = 0;
    for (int i = 0; i < l; i += 2)
    {
        sum += arr[i];
    }

    return sum;
}