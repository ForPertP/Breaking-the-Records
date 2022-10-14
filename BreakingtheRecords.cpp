#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */
vector<int> breakingRecords(vector<int> scores)
{
    vector<int> result(2);
    int max = scores[0];
    int min = scores[0];
    
    std::for_each (scores.cbegin()+1, scores.cend(),
        [&result, &max, &min](auto score)
        {
            if (score > max)
            {
                max = score;
                result[0]++;
            }
            else if (score < min)
            {
                min = score;
                result[1]++;
            }
        }
    );

    return result;
}
