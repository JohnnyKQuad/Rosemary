w.sort();

std::vector<int>::iterator it0 = w.begin();
    curr = w.begin; j=0;
   for(int i=w.begin() ; i!=w.end() ; i++)
   {
       if (i<curr+4){}
       else{
           curr=i;
           j++;
       }
   }
   return j;
