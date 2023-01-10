#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number_of_circles, count, array[1000];
    float d;
    cin >> number_of_circles;
    int k = 0;
    /* Get input array and 
    storge in to array : [[y], [y], [y],...]
                            [x]  [x]  [x]
                            [r]  [r]  [r]
    */
    int circle[1000][3];
    for (int i = 0; i < number_of_circles; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> circle[i][j];
        }
    }

    for (int i = 0; i < number_of_circles; i++)
    {
        for (int j = i + 1; j < number_of_circles; j++)
        {
            // circle[i][1] is y
            // circle[i][2] is x

            // d is distance from 2 points
            d = sqrt(pow(circle[i][0] - circle[j][0], 2) + pow(circle[i][1] - circle[j][1], 2));

            // Checking which array are collisions
            if (d > (circle[i][2] + circle[j][2])){} // d > R+r => 2 circle have no points 
            else
            {   /* assign i,j into a an array which [i,j,i,i,j,...]*/
                array[k] = i;
                array[k + 1] = j;
                k += 2;
            };
        }
    }
/* remove the dulicate elements in array and get the array len_of_array;
in the other words, len_of_array are the number of circles
  */
    int len_of_array = k;
    for (int i = 0; i < len_of_array; ++i)
    {
        for (int j = i + 1; j < len_of_array;)
        {
            if (array[i] == array[j])
            {
                for (int k = j; k < len_of_array - 1; ++k)
                    array[k] = array[k + 1];
                --len_of_array;
            }
            else
                ++j;
        }
    }
    
    cout << len_of_array ;
}