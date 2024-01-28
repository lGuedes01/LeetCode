#include <stdlib.h>
struct tree
{   
    int info;
    struct tree* l;
    struct tree* r;
};

typedef struct tree Tr;

Tr* create_tree(int inf, Tr* stl, Tr* str){
    Tr* t = (Tr*)malloc(sizeof(Tr));
    t->info = inf;
    t->l = stl;
    t->r = str;
    return t;
}


int search(Tr* tr, int n,int count, int v[]){
    if (n >= 0 && v[n] != -1)
        return count + v[n];
    tr = create_tree( n, NULL, NULL);
    if (tr->info > 0){
        count = search(tr->l, n-1, count, v);
        count = search(tr->r, n-2, count, v);
    }
    else if (tr->info == 0){
        v[n] = count + 1;
        return v[n];
    }
    if(n >= 0)
        v[n] = count;
    return count;
}

int climbStairs(int n) {
    Tr* tr = NULL;
    int v[n+1];
    for(int i = 0; i <= n; i++)
        v[i] = -1;
    int ways;
    ways = search(tr, n, 0, v);
    return ways;
}