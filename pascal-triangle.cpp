#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> pascal(numRows);
    for (int i = 0; i < numRows; i++)
    {
        pascal[i].resize(i + 1);
        pascal[i][0] = pascal[i][i] = 1;
        for (int j = 1; j < i; j++)
        {

            pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
        }
    }

    return pascal;
}

int main()
{
    vector<vector<int>> arr = generate(5);

    cout << "The Final Matrix is " << endl;
    for (vector<int> i : arr)
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}