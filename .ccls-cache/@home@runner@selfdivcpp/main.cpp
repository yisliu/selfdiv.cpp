#include <iostream>
#include <string>
/*
Selfdiv:

Make a program that can divid itself with every digit in it.

Ex: 2, 48 = 48/4 = 12; 48/8 = 6

Input: two number for the range

1 22

Output: list of number that meet the requirement.

1 2 3 4 5 6 7 8 9 11 12 15 22

Explanation:

Think.

Plan:

int cal{
string.length  = n;
for(int i = 0; i<n){
if(a%a[i]==0){
continue;
}
break;
}
}
int main(){
int n = first int, a = second int;
make string to know number of digits
for(int i = n){
call function;
increase i
}
}
*/
using namespace std;

// int cal(string n, int a){
//   for(int i = 0; i<n.length(); i++){
//     char temp = n[i];
//     int temp2 = temp-'0';
//     if(a%temp2==0){
//       cout<<temp;
//       continue;
//     }
//     return 0;
//   }
  
//   return a;
// }

int main() {
  int n = 0, a = 0;
    // cout<<"h...";
  cin>>n>>a;
    // cout<<" k";
   string t = std::to_string(n);
//   stringstream t;
//   t<<n;
//   string str = t.str();
  for(int i = n; i<=a; i++){
    // cout<<"he"<<" breakthrough!!!";
    int temp = 0, h = 0;
    int u = i%10;
    int b = i;
    while(temp<t.length()){
        if(u%10==0){
            break;
        }
        if(i%u==0){
            // cout<<"lol";
            h = 1;
          if(b/10==0){
            break;
          }
            b = b/10;
          //10%10 = 0, 10/10 = 1, 1%10 = ???x
          //11%10 = 1, 11/10 = 1, 1%10
            u = b%10;
          temp++;
            continue;
        }
        // cout<<"wow";
        h = 0;
        break;
        // if(n+i%stoi(t[temp])==0){
        //     cout<<"lol";
        //     h = 1;
        // }
        // cout<<"wow";
        // break;
    }
//     //problem start
//     for(int j = 0; i<t.length(); i++){
//         cout<<" 2 + 2 = 5";
//     char temp = t[i];
//     int temp2 = temp-'0';
//     if(a%temp2==0){
//       cout<<temp;
//       continue;
//     }
//     cout<<"WOWOWWWWW";
//     break;
//   }
//   //problem end

    // cout<<"e";
    if(h==1){
        // cout<<"YAHOO";
        cout<<i<<" ";
    }
    int k = stoi(t)+1;
    t = to_string(k);
  }
}