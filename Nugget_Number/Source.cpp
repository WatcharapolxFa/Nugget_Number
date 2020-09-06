#include <iostream>

using namespace std;

int main()

{

    int n, x;

    bool c;

    cin >> n;

    if (n < 6)   cout << "no" << endl;

    else

    {

        for (int qq = 6; qq <= n; qq++)

        {

            c = 0;

            for (int i = 0; 20 * i <= n; i++)

            {

                for (int j = 0; 9 * j <= n; j++)

                {

                    for (int k = 0; 6 * k <= n; k++)

                    {

                        x = (6 * k) + (9 * j) + (20 * i);

                        if (x == qq && x > 0)

                        {

                            if (c)

                                break;

                            else

                            {

                                cout << x << endl;

                                c = 1;

                            }

                        }

                    }

                    if (c)

                        break;

                }

                if (c)

                    break;

            }

        }

    }

    //system("pause");

    return 0;

}