/*
Lesson 6.3 Samples Traversing Arrays
Pawelski
5/3/2021
Here are the samples!
*/
#include <iostream>
using namespace std;

/*
Looks throught the array names for target. If the target is found,
returns true. Otherwises, returns false. Requires the length of
the array in order to work.
*/
bool containsName(string names[], string target, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (names[i] == target)
        {
            return true;
        }
    }
    return false;
}

/*
Counts the number of times the target appears
in array.
*/
int count(string array[], string target, int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (array[i] == target)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    /*
    Example #1
    In this example, I create an array and traverse it
    to find the sum. The first time I go front to back.
    The second time, I go back to front.
    */
    int length1 = 10;
    int array1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    double sum = 0;
    for (int i = 0; i < length1; i++)
    {
        sum += array1[i];
    }
    cout << "Sum of the elements: " << sum << ".\n";

    sum = 0;
    for (int i = length1 - 1; i >= 0; i--)
    {
        sum += array1[i];
    }
    cout << "Sum of the elements: " << sum << ".\n\n";

    /*
    Example #2
    In this example, I create an array and display each
    element on a seperate line.
    */
    const int FRUIT_LENGTH = 3;
    string fruitArray[FRUIT_LENGTH] = { "apple", "orange", "grape" };
    for (int i = 0; i < FRUIT_LENGTH; i++)
    {
        cout << fruitArray[i] << "\n";
    }
    cout << "\n";

    /*
    Example #3
    In this example, I show how to search an array to see
    if an element is contained within.
    */
    const int NAME_ARRAY_LENGTH = 5;
    string target = "Jimmy";
    string nameArray[NAME_ARRAY_LENGTH] = { "James", 
        "Jim", "Jimbo", "Jimbob", "Jimmy" };
    if (containsName(nameArray, target, NAME_ARRAY_LENGTH))
    {
        cout << "In array.\n\n";
    }
    else
    {
        cout << "Not in array.\n\n";
    }

    /*
    Example #4
    In this example, I show how to count the number of times
    an element appears in an array.
    */
    const int ANIMAL_ARRAY_LENGTH = 6;
    string animal = "dog";
    string animalArray[ANIMAL_ARRAY_LENGTH] = { "dog", "cat", "cat", 
        "dog", "dog", "dog" };
    cout << "The word " << animal << " appears "
        << count(animalArray, animal, ANIMAL_ARRAY_LENGTH)
        << " times in the array.\n\n";

    /*
    Example #5
    In this example, I show how to traverse a two dimensional
    array. Notice how I have to use a different variable for
    the inner loop!
    */
    const int BOARD_ROWS = 8, BOARD_COLUMNS = 8;
    string board[BOARD_ROWS][BOARD_COLUMNS];
    // populates the top 2 rows
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < BOARD_COLUMNS; column++)
        {
            board[row][column] = "w ";
        }
    }
    // populates the middle empty rows
    for (int row = 2; row < 6; row++)
    {
        for (int column = 0; column < BOARD_COLUMNS; column++)
        {
            board[row][column] = "O ";
        }
    }
    // populates the top 2 rows
    for (int row = 6; row < BOARD_ROWS; row++)
    {
        for (int column = 0; column < BOARD_COLUMNS; column++)
        {
            board[row][column] = "b ";
        }
    }

    // displays the board
    for (int i = 0; i < BOARD_ROWS; i++)
    {
        for (int j = 0; j < BOARD_COLUMNS; j++)
        {
            cout << board[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
    return 0;
}
