#include<bits/stdc++.h>
using namespace std;

typedef short ll;
typedef array<array<ll,9>,9> GRID;

#define endl '\n'
#define FasterIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<GRID> all_patterns;
bool got_one=false;

ll matrix_number(ll i, ll j)
{
    return
        i<3? j<3? 1 : j<6 ? 2 : 3
    :   i<6? j<3? 4 : j<6 ? 5 : 6
    :        j<3? 7 : j<6 ? 8 : 9
    ;
}

ll row[9][10],col[9][10],matrix[10][10];
GRID grid;

void create(ll x, ll y)
{
    ll new_x=x,new_y=y+1,i,mat_num=matrix_number(x,y);
    if(y==8) new_y=0,new_x++;

    set<ll> s;

    while(s.size()<9 and !got_one){

        do{
            i=rand()%9+1;
        }
        while(s.count(i));

        s.insert(i);

        if(!row[x][i] and !col[y][i] and !matrix[mat_num][i]){
            row[x][i]++;
            col[y][i]++;
            matrix[mat_num][i]++;

            grid[x][y]=i;

            if(x==8 and y==8)
                all_patterns.push_back(grid),got_one=true;
            else
                create(new_x,new_y);

            matrix[mat_num][i]--;
            row[x][i]--;
            col[y][i]--;
        }

    }

}


int main()
{
    FasterIO();
    srand(time(0));

    freopen("output.txt","w",stdout);       ///Erase this line if you don't want to see your output in a file

    ///if you want just one Sudoku pattern at a time, then 'grid' should be your final pattern
    ///else you can use my technique to generate as many pattern as you want.


    while(all_patterns.size()!=1000){   ///suppose I want to generate 1000 (One thousand) Possible Patterns now
        create(0,0);
        got_one=false;
    }

    for(auto uniq:all_patterns){
        for(ll i=0;i<9;i++){
            for(ll j=0;j<9;j++){
                cout<<uniq[i][j]<<' ';
                if(j==2 or j==5) cout<<' ';
            }
            cout<<endl;
            if(i==2 or i==5) cout<<endl;
        }
        cout<<endl<<endl;
    }
}



///Brainless_Loco Terminates Here.
