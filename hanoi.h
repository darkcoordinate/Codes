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
    
    void addpoint(int i ,int k)
    {
        point^ p;
        for (p = list[k] ; p->j != nullptr ; p = p->j);
        point^ p1 = gcnew point();
        p1->i = i;
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
        point^ p2;
        point^ p3;
        for(p1 = list[from]; p1->j != nullptr; p1 = p1->j);
        for(p2 = list[from]; p2->j->j != nullptr; p2= p2->j);
        for(p3 = list[to]; p3-> != nullptr; p3 = p3->j );
        p3->j = p1;
        p2->j = nullptr;
        p1 = nullptr;
        p2 = nullptr;
        p3 = nullptr;
        delete p1;
        delete p2;
        delete p3;
    }   
};

