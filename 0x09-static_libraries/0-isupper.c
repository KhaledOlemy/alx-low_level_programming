/**
 * main - this function checks whether a letter is uppercase or lowercase
 * out: int;
 * 1 if UPPERCASE
 * 0 if OTHER
 * Return: 1,0: SUCCESS
*/
int _isupper(int c)
{
    int out = 0;
    if (c >= 65 && c <= 90)
    {
        out = 1;
    }
    return out;
}
