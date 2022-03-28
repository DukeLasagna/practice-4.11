#include <iostream>

using namespace std;

int main()
{
     for ( int line = 1; line <= 10; line++ )
      {
        for(int num = 1; num <= line; num++)
        {
            cout << "*";
        }
        cout<<endl;
      }


     for ( int line = 1; line <= 9; line++ )
      {
        for(int num = 1; num <= line; num++)
        {
            cout << " ";
        }

       for (int num = 9; num >= line; num--)
        {
            cout << "*";
        }
        cout<<endl;
      }


     for ( int line = 1; line <= 10; line++ )
      {
        for (int num = 9; num >= line; num--)
        {
            cout << " ";
        }

        for(int num = 1 ; num <= line; num++)
        {
            cout << "*";
        }

        cout<<endl;
      }


     for ( int line = 1; line <= 10; line++ )
      {

       for(int num = 9; num >= line; num--)
        {
            cout << "*";
        }

        cout<<endl;
      }
    return 0;
}
