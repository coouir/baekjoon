#include <stdio.h>
#include <string.h>

typedef struct {
    char subject[51];
    double credit;
    char grade[3];
} S;

int main() {
    S subjects[20];
    double sum = 0, cnt = 0;
    int i;
    for (i=0; i<20; i++) 
        scanf("%s %lf %s", subjects[i].subject, &subjects[i].credit, subjects[i].grade);
    
    for (i=0; i<20; i++) {
        double C = subjects[i].credit;
        char G[3];
        strcpy(G, subjects[i].grade);

        if (G[0] == 'P') {
            continue;
        }

        if (G[0] == 'A' && G[1] == '+') 
            sum += (C*4.5);
        else if (G[0] == 'A' && G[1] == '0')
            sum += (C*4.0);
        else if (G[0] == 'B' && G[1] == '+')
            sum += (C*3.5);
        else if (G[0] == 'B' && G[1] == '0')
            sum += (C*3.0);
        else if (G[0] == 'C' && G[1] == '+')
            sum += (C*2.5);
        else if (G[0] == 'C' && G[1] == '0')
            sum += (C*2.0);
        else if (G[0] == 'D' && G[1] == '+')
            sum += (C*1.5);
        else if (G[0] == 'D' && G[1] == '0')
            sum += (C*1.0);
        cnt += C;
    }
    printf("%lf", sum/cnt);

    return 0;
}