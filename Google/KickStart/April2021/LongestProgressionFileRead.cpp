#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("input.in");
    ofstream fout("output.out");

    //-- check if the files were opened successfully 
    if (!fin.is_open()) cout << "input.in was not open successfully" << endl;
    if (!fout.is_open()) cout << "output.out was not open successfully" << endl;
    int numCase;
    fin >> numCase;
    int i, j, n;
    long long c;
    for (i = 0; i < numCase; i++)
    {
        fin >> n;
        vector<long long> array1, array2;
        for (j = 0; j < n; j++)
        {
            fin >> c;
            array1.push_back(c);
        }
        for (j = 0; j < n; j++)
        {
            fin >> c;
            array2.push_back(c);
        }
        sort(array1.begin(), array1.end());
        sort(array2.begin(), array2.end(), greater<long long>());
        long long ans = 0;
        for (j = 0; j < n; j++)
            ans += (array1[j] * array2[j]);
        fout << "Case #" << (i + 1) << ": " << ans << endl;
    }
    fin.close();
    fout.close();
    return 0;
}