#include<bits/stdc++.h>
using namespace std; 

struct point{
    int x,y;
};
int orientation(point p, point q, point r){
    int val= (q.y-p.y)*(r.x- q.x) - (r.y-q.y)*(q.x-p.x);
    if(val==0) return 0; // collinear
    if(val>0) return 1; // clockwise
    else return 2; // counter clockwise
}
vector<point> hull;
bool cmp(point i, point j){
	if(i.x==j.x)return i.y<j.y;
	return i.x< j.x;
	
}
void convexhull(point a[], int n){
    if(n<3) return ;
    if(n==3 && orientation(a[0],a[1],a[2])==0) return;
    int l=0;
    for(int i=1;i<n;i++){
        if(a[i].x < a[l].x){
            l=i;
        }
    }
    int p=l; int q;
    do{
        hull.push_back(a[p]);
        q= (p+1)%n;
        for(int i=0;i<n;i++){
            if(orientation(a[p],a[i],a[q])==2) q=i;
            else continue;
        }
        
        p=q;
    }
    while(p!=l);
    sort(hull.begin(),hull.end(),cmp);
    // vector<point>::iterator it; 
   	//it= unique(hull.begin(),hull.begin()+hull.size()-1);
    //hull.resize(distance(hull.begin(), it));
    vector<pair<int,int> > v;
    for(auto itr: hull) v.push_back({itr.x, itr.y});
    v.erase( unique( v.begin(), v.end() ), v.end() );
    cout<< hull[0].x<<" "<< hull[0].y;
    for (int i = 1; i < v.size(); i++) 
		cout <<", " << v[i].first << " "
			<< v[i].second; 
    
}


int main()
 {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    point a[n];
	    for(int i=0;i<n;i++){
	        cin>> a[i].x>>a[i].y;
	    }
	    convexhull(a, n);
	    if(hull.size()==0) cout<<-1;
	    cout<<endl;
	    hull.clear();
	}
	
	
	return 0;
}