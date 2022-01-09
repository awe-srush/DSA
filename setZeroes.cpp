#include <bits/stdc++.h>
#include <vector>
using namespace std;
void setZeroes(vector<vector<int>> &matrix)
{
    int rSize = matrix.size();

    int cSize = matrix[0].size();
    bool rowZero = false;
    bool firstElement = false;
    bool colZero = false;
    if (matrix[0][0] == 0)
        firstElement = true;
    for (int r = 0; r < rSize; r++)
    {
        if (matrix[r][0] == 0)
            colZero = true;
        for (int c = 0; c < cSize; c++)
        {
            if (matrix[r][c] == 0)
            {
                matrix[0][c] = 0;
                if (r > 0)
                {
                    matrix[r][0] = 0;
                }
                else
                {
                    rowZero = true;
                }
            }
        }
    }

    //cout<< "matrix value: " << matrix[0][2] << "\n";
    for (int r = 1; r < rSize; r++)
    {
        for (int c = 1; c < cSize; c++)
        {
            if (matrix[r][0] == 0 || matrix[0][c] == 0)
            {
                matrix[r][c] = 0;
            }
        }
    }

    if (rSize == 1 || cSize == 1)
    {
        for (int r = 0; r < rSize; r++)
        {
            for (int c = 0; c < cSize; c++)
            {
                if (matrix[r][0] == 0 || matrix[0][c] == 0)
                {
                    matrix[r][c] = 0;
                }
            }
        }
    }

    if (firstElement)
    {
        for (int r = 0; r < rSize; r++)
        {
            matrix[r][0] = 0;
        }
        for (int c = 0; c < cSize; c++)
        {
            matrix[0][c] = 0;
        }
    }

    if (rowZero)
    {
        for (int c = 0; c < cSize; c++)
        {
            matrix[0][c] = 0;
        }
    }

    if (colZero)
    {
        for (int r = 0; r < rSize; r++)
        {
            matrix[r][0] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> arr;
    //arr = {{1,2,3,4}, {5,0,7,8}, {0,10,11,12}, {13,14,15,0}};
    arr = {{1}, {0}, {3}};
    setZeroes(arr);
    cout << "The Final Matrix is " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}