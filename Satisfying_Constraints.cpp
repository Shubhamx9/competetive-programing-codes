#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;

    while (x--)
    {
        int y, i, j, flag=0;
        cin >> y;
        int n[y][2];
        int con2[y];
        int con1[y];
        int con3[y];
        for (i = 0; i < y; i++)
        {

            for (j = 0; j < 2; j++)
            {
                cin >> n[i][j];
            }
        }
        for (int k = 0; k < y; k++)
        {
            if (n[k][0] == 2)
            {
                con2[k] = n[k][0];
            }
           
            if (n[k][0] == 1)
            {
                con1[k] = n[k][0];
            }
          
            if (n[k][0] == 3)
            {
                con3[k] = n[k][0];
            }
            
        }
        int size = sizeof(con1) / sizeof(con1[0]);
        int max = con1[0];
        for (i = 0; i < size; i++)
        {
            if (con1[i] > max)
            {
                max = con1[i];
            }
        }
        int size2 = sizeof(con2) / sizeof(con2[0]);
        int min = con2[0];
        for (i = 0; i < size2; i++)
        {
            if (con2[i] < min)
            {
                min = con2[i];
            }
        }
        for (i = max; i < min; i++)
        {
if (for (int i = 0; i < ; i++)
{
    /* code */
}
)
{
    /* code */
}

            flag++;
        }cout<<flag<<endl;
    }

    return 0;
}