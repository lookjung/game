void SetQuestion(vector<int>& questionVec, int level)
{
    if (level > MAX_LEVEL)
    {
        level = MAX_LEVEL;
    }
 
    int num = 0;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < level; ++i)    //화살표의 개수 (문제 난이도)
    {
        num = rand() % KEY_NUM;    //화살표 종류.
        switch (num)
        {
        case 0:
            questionVec.push_back(UP);
            break;
        case 1:
            questionVec.push_back(RIGHT);
            break;
        case 2:
            questionVec.push_back(LEFT);
            break;
        case 3:
            questionVec.push_back(DOWN);
            break;
        }
    }
}

