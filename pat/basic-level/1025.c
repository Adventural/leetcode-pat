#include <stdio.h>
#include <stdlib.h>

struct _node{
    int address;
    int value;
    int next;
}node[100000];

static inline void my_print(int a, int b, int c)
{
    if (c == -1)
        printf("%05d %d -1\n", a, b);
    else
        printf("%05d %d %05d\n", a, b, c);
}

int main()
{
    int s, n, k;
    int i = 0;
    scanf("%d %d %d", &s, &n, &k);
    for (i=0; i<n; i++){
        int address;
        scanf("%d", &address);
        scanf("%d %d",&node[address].value, &node[address].next);
        node[address].address = address;
    }
    
    int* tmp = (int*)malloc(sizeof(int) * k);
    i = 0;
    int end_node =  -1;
    int start;
    for (s; s != -1; s = node[s].next){
        tmp[i] = node[s].address;
        if(i == k-1){
            if (end_node != -1)
                my_print(node[end_node].address, node[end_node].value, node[tmp[i]].address);
            for (int j=k-1; j>0; j--)
                my_print(node[tmp[j]].address, node[tmp[j]].value, node[tmp[j-1]].address);
            i = 0;
            end_node = tmp[0];
        }
        else
            i++;
    }
    if (end_node != -1 && end_node != tmp[0])
        my_print(node[end_node].address, node[end_node].value, node[tmp[0]].address);
    else if(end_node != -1)
        my_print(node[end_node].address, node[end_node].value, -1);
    for(int j=0; j<i; j++)
        my_print(node[tmp[j]].address, node[tmp[j]].value, node[tmp[j]].next);
}   