#include <iostream>
using namespace std;

void tower_hannoi (int disk, char tow1, char tow2, char tow3)
{
    if (disk == 1)
        cout << "Move disk " << disk << " from " << tow1 << " to " << tow3 << endl;
    else{
        tower_hannoi (disk-1, tow1, tow3, tow2);
        cout << "Move disk " << disk << " from " << tow1 << " to " << tow3 << endl;
        tower_hannoi (disk-1, tow2, tow1, tow3);
    }
}

int main()
{
    int disk;
    char tow1 = 'A';
    char tow2 = 'B';
    char tow3 = 'C';
    cin >> disk;
    tower_hannoi (disk, tow1, tow2, tow3);
    return 0;
}
