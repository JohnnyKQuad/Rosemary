 



/* ax + by = n 
 * 3x + 5y = n
 * 3x = n-5y --> x=n-5y / 3
 * 
 * ax+by=n
 *. a=3 b=5
 * ax=n-by
 * x=(n-by)a
 * y=(n-ax)/b
 *
 * 
 
  a=3;b=5;
  
  x=(n-(b*y)/a);
  y=(n-(a*x)/b);*/
  
  
int x,y;
string str="";
x=0;y=0;
  
  for(int i = n/3;i>=0;i--){
      if(i*3==n)
      {
          x=i;y=0;break;}
      
      if((n-(i*3))%5==0){
          x=i;
          y=(n-(i*3))/5;
          break;
      }
      
  }
  if(x||y){
  while(x--)
    str+="555";
  while(y--)
    str+="33333";
    }
  else {
      str=="-1";
  }
  cout<<str<<"\n";
  }
