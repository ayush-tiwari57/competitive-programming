/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long

//STL
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define mp make_pair
#define all(v) v.begin(), v.end()

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;


char pat[1000010];
char text[1000010];
int pref[1000010];
void prefix(char *s)
{
 int n=strlen(s),flag=1;
 int j=0,i;
 pref[0]=0;
 for(int i=1;i<n;i++)
 {
  while(j>0 && s[j]!=s[i])
  j=pref[j-1];
  if(s[i]==s[j]) 
  j++;
  pref[i]=j;
 }
 
 
}
void search(char *text,char *pat)
{
 int len=strlen(text),flag=1;
 int m=strlen(pat);
 int j=0;
 for(int i=0;i<len;i++)
 {
  while(j>0 && text[i]!=pat[j])
  j=pref[j-1];
  if(text[i]==pat[j])
  j++;
  if(j==m)
  {
  printf("%d\n",i-m+1);
  j=pref[j-1];
  }
 }
 if(flag==1)
        printf("\n");
}
int main()
{
 int n;
 while(scanf("%d\n",&n)!=EOF)
        {
      memset(pref,0,sizeof(pref));
      scanf("%s",pat);
  prefix(pat);
  scanf("%s",text);
  search(text,pat);
 }
 
} 