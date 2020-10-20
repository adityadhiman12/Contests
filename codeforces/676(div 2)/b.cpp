#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

const int maxD=200;
vector<vector<char>>mat(200+1,vector<char>(200+1));
    int dy[]={1,0,-1,0};
    int dx[]={0,1,0,-1};

bool isvalid(int i,int j,int n)
{
    return (i>=1 && i<n && j>=1 && j<n);
}

bool dfs(int i,int j, bool grid[][maxD],int n,char key)
{
	int ddx,ddy;
	cout<<i<<" "<<j<<" start"<<endl;
	grid[i][j] = true; //Marking the visited cell in the grid
	for(int k=0;k<4;k++) //Generating the neighbors coordinates using the direction vectors
	{
		
		ddx = i+dx[k];
		ddy = j+dy[k];
		
		if((ddx==n && ddy==n-1) ||(ddx==n-1 && ddy==n) )
			return true;
		//If the generated cell is within the grid and it is not visited, 
		//then we call the dfs recursively from that cell
		
		//mat[ddx][ddy]==key
		if(isvalid(ddx,ddy,n) && !grid[ddx][ddy] )
		{
			cout<<ddx<<" "<<ddy<<endl;
			dfs(ddx,ddy,grid,n,key);
		}
	}
	return false;
	
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
		int n;
		cin>>n;
		
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				cin>>mat[i][j];
		int s1=1,s2=1;
		int e1=n,e2=n;
		vector<pair<int,int>>res;
		if((mat[s1+dx[0]][s2+dy[0]]=='1') && (mat[s1+dx[1]][s2+dy[1]]=='1'))
		{
			//case where both the paths are 1
			for(int i=0;i<4;i++)
			{
				if((e1+dx[i]>=1 && e1+dx[i]<=n) && (e2+dy[i]>=1 && e2+dy[i]<=n) && mat[e1+dx[i]][e2+dy[i]]=='1')
				{
					res.push_back({e1+dx[i],e2+dy[i]});
				}
			}
		}		
		else if((mat[s1+dx[0]][s2+dy[0]]=='0') && (mat[s1+dx[1]][s2+dy[1]]=='0'))
		{
			//case where both the paths are 0
			for(int i=0;i<4;i++)
			{
				if((e1+dx[i]>=1 && e1+dx[i]<=n) && (e2+dy[i]>=1 && e2+dy[i]<=n) && mat[e1+dx[i]][e2+dy[i]]=='0')
				{
					res.push_back({e1+dx[i],e2+dy[i]});
				}
			}
		}	
		else
		{
			bool vis[maxD][maxD];			
			//both the  paths are different
			//checking if path with 1 is chosen
			if(mat[s1+dx[0]][s2+dy[0]]=='1')
			{
				for(int i=1;i<=n;i++)
				for(int j=1;j<=n;j++)
					vis[i][j]=false;
				int key=1;
				bool ans=dfs(s1+dx[0],s2+dy[0],vis,n,key);
				if(ans)
				{
					for(int i=0;i<4;i++)
					{
						if((e1+dx[i]>=1 && e1+dx[i]<=n) && (e2+dy[i]>=1 && e2+dy[i]<=n) && mat[e1+dx[i]][e2+dy[i]]=='1')
						{
							res.push_back({e1+dx[i],e2+dy[i]});
						}
					}
				}
				else 
				{
					//not reachable from 1 at right
				}
			}
			s1=1,s2=1;
			if(mat[s1+dx[0]][s2+dy[0]]=='0')
			{
				for(int i=1;i<=n;i++)
				for(int j=1;j<=n;j++)
					vis[i][j]=false;
				cout<<"here2"<<endl;
				cout<<s1+dx[0]<<" "<<s2+dy[0]<<endl;
				char key=0;
				bool ans=dfs(s1+dx[0],s2+dy[0],vis,n,key);
				cout<<ans<<endl;
				if(ans)
				{
					cout<<"here3"<<endl;
					for(int i=0;i<4;i++)
					{
						if((e1+dx[i]>=1 && e1+dx[i]<=n) && (e2+dy[i]>=1 && e2+dy[i]<=n) && mat[e1+dx[i]][e2+dy[i]]=='0')
						{
							res.push_back({e1+dx[i],e2+dy[i]});
						}
					}
					cout<<" "<<res.size();
				}
				else 
				{
					//not reachable from 0 at right
				}
			}
			s1=1,s2=1;
			if(mat[s1+dx[1]][s2+dy[1]]=='1')
			{
				for(int i=1;i<=n;i++)
				for(int j=1;j<=n;j++)
					vis[i][j]=false;
				char key=1;
				bool ans=dfs(s1+dx[1],s2+dy[1],vis,n,key);
				if(ans)
				{
					for(int i=0;i<4;i++)
					{
						if((e1+dx[i]>=1 && e1+dx[i]<=n) && (e2+dy[i]>=1 && e2+dy[i]<=n) && mat[e1+dx[i]][e2+dy[i]]=='1')
						{
							res.push_back({e1+dx[i],e2+dy[i]});
						}
					}
				}
				else 
				{
					//not reachable from 1 at bottom
				}
			}
			s1=1,s2=1;
			if(mat[s1+dx[1]][s2+dy[1]]=='0')
			{
				for(int i=1;i<=n;i++)
				for(int j=1;j<=n;j++)
					vis[i][j]=false;
				char key=0;
				bool ans=dfs(s1+dx[1],s2+dy[1],vis,n,key);
				if(ans)
				{
					for(int i=0;i<4;i++)
					{
						if((e1+dx[i]>=1 && e1+dx[i]<=n) && (e2+dy[i]>=1 && e2+dy[i]<=n) && mat[e1+dx[i]][e2+dy[i]]=='0')
						{
							res.push_back({e1+dx[i],e2+dy[i]});
						}
					}
				}
				else 
				{
					//not reachable from 0 at bottom
				}
			}
					
		}
		cout<<res.size()<<endl;
		for(int i=0;i<res.size();i++)
			cout<<res[i].first<<" "<<res[i].second<<endl;
		
	}
    cin.tie(NULL);
    return 0;	
}
