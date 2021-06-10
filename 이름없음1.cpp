void SetQuestion(vector<int>& questionVec, int level)
{
    if (level > MAX_LEVEL)
    {
        level = MAX_LEVEL;
    }
 
    int num = 0;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < level; ++i)    //ȭ��ǥ�� ���� (���� ���̵�)
    {
        num = rand() % KEY_NUM;    //ȭ��ǥ ����.
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

