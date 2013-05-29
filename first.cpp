using namespace System;

struct point
{
    int x;
    point^ y;
};

void addpoint(point^ list, int inew)
{
    point^ p1;
    point^ p2;
    p1 = gcnew point();
    p1->x = inew;
    p1->y = NULL;
    p2 = list;
    while(p2->y != NULL)
    {
        p2 = p2->y;
    }
    p2->y = p1;
    p2 = NULL;
    p1 = NULL;
    throw(p1);
    throw(p2);
}

int main()
{
    point^ h1;
    h1 = gcnew point();
    h1->x = 1;
    h1->y = NULL;
    addpoint(h1, 4);
    return 0;
}
