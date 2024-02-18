#include <bits/stdc++.h>
using namespace std;

int furthestBuilding(vector<int> &heights, int bricks, int ladders)
{
    //4,2,7,6,9,14,12  r= 3
    int r = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        int b = 0;
        if (heights[i] >= heights[i + 1])
        {
            r++;
            continue;
        }else if(bricks == 0 && ladders == 0 && heights[i] < heights[i + 1]){
            break;
        }

        if (heights[i] < heights[i + 1])
        {
            b = (heights[i + 1] - heights[i]);
            if (b <= bricks)
            {
                r++;
                bricks -= b;
            }
            else if (ladders != 0)
            {
                r++;
                ladders--;
            }
            else{
                break;
            }
        }
    }
    return r;
}

int main()
{
    //4,2,7,6,9,14,12
    int bricks = 17;
    int ladders =0;
    //4,12,2,7,3,18,20,3,19
    vector<int> heights;
    heights.push_back(14);
    heights.push_back(3);
    heights.push_back(19);
    heights.push_back(3);
    // heights.push_back(3);
    // heights.push_back(18);
    // heights.push_back(20);
    // heights.push_back(3);
    // heights.push_back(19);
    cout<<furthestBuilding(heights,bricks,ladders);

    return 0;
}