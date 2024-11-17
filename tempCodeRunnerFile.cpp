
{   srand(time(0));
    int num = rand ()% 3+1;

    
    switch (num)
    {
        case 1 : return 'r';    
        case 2 :  return 'p';
        case 3 : return 's';

    }
    
    return 0;

}

void showChoice(char choice)