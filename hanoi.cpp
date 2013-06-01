using namespace System;

class point
{
private:
    int i;
    point ^j;
public:
    point(int k)
    {
        array<point^> ^list = gcnew array<int>(k);
        for( int i = 0 ; i < k; i++)
        {
            list[i]->i = 0;
            list[i]->j = nullptr;
        }
        
    }
    
    void addpoint(int k)
    {
        point^ p;
        for (p = list[k] ; p->j != nullptr ; p = p->j);
        point^ p1 = gcnew point();
        p1->i = 0;
        p1->j = nullptr;
        p->j = p1;
        p1 = nullptr;
        p = nullptr;
        delete p1;
        delete p;
    }
    
    void movstak(int from , int to,)
    {
        point^ p1;
        for(p1 = list[] = p1->j != nullptr; p = p->j);
        
};

