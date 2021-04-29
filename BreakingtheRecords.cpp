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
