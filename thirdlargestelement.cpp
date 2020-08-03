 if(n<3)
        return -1;
     priority_queue<int> pq;
     for(int i=0;i<n;i++)
     {
         pq.push(a[i]);
     }
     int count=3;
     int result;
     while(count!=0){
         result=pq.top();
         pq.pop();
     }
     return result;