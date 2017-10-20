#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
        vector <vector <char> > starBro;
        int row, col;

        cout<< "Enter row and columns of stars:" <<endl;
        cin>> row;
        
        if (row < 1) return 0;

        cin>> col;

        if (col < 1) return 0;

        starBro.resize(row);

        for (int r = 0; r<starBro.size(); r++)
        {
                starBro[r].resize(col);
                for (int c = 0; c < starBro[r].size(); c++)
                {
                        starBro[r][c] = '*';
                        cout<< starBro[r][c];
                }
                cout<<endl;
        }
        return 0;
}
