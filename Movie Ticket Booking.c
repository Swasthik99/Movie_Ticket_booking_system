#include <stdio.h>
#include<stdlib.h>
#include<string.h>
      
    int total=0;
    int choice,n,j,i,k,ss,d,M,y,h,m;
    int count1=0,count2=0,count3=0;
    char r1[10]={1,2,3,4,5,6,7,8,9,10};
    char r2[10]={11,12,13,14,15,16,17,18,19,20};
    char r3[10]={21,22,23,24,25,26,27,28,29,30};
    char ch;
    int m1,m2,m3;
void Spiderman() 
{
    int N=rand()%10000;
    
    while(1)
    {
    printf("Please enter the date: \n");
    scanf("%d-%d-%d",&d,&M,&y);
    printf("Please enter the time\n");
    scanf("%d:%d",&h,&m);
    printf("\n\t\tAvailable seats are \n");
    printf("\n\nRow One seats:50$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r1[i]);
    }
    printf("\n");
     printf("Row Two seats:70$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r2[i]);
    }
     printf("\n");
    printf("Row Three seats:100$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r3[i]);
    }
     printf("\n\n");
     
     
    printf("Please enter the number of tickets\n");
    scanf("%d",&n);
   
    for(int i=0;i<n;i++)
    {
     printf("Please enter the seat number \n");
     scanf("%d",&ss);
     if(ss<=10)
     {
        
         for(int i=0;i<10;i++)
         {
             if(r1[i]==ss)
             r1[i]=0;
         }
         count1++;
         total=total+50;
     }
      else if(ss>10&&ss<=20)
     {
         
         for(int i=0;i<10;i++)
         {
             if(r2[i]==ss)
             r2[i]=0;
             
         }
         count2++;
         total=total+70;
             
     }
      if(ss>20&&ss<=30)
     {
         
         for(int i=0;i<10;i++)
         {
             if(r3[i]==ss)
             r3[i]=0;
             
         }
         count3++;
         
         total=total+100;
     }
    }
    printf("\n\t\tAvailable seats are \n");
    printf("\n\nRow One seats:50$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r1[i]);
    }
    printf("\n");
     printf("Row Two seats:70$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r2[i]);
    }
     printf("\n");
    printf("Row Three seats:100$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r3[i]);
    }
    
    printf("\n\nDo you want add seat(y/n)");
    fflush(stdin);
    scanf(" %c",&ch);
    if(ch=='y')
     {
          printf("Please enter the number of tickets\n");
          scanf("%d",&n);
   
     for(int i=0;i<n;i++)
     {
      printf("Please enter the seat number \n");
      scanf("%d",&ss);
      if(ss<=10)
      {
         
         for(int i=0;i<10;i++)
         {
             if(r1[i]==ss)
             r1[i]=0;
             
             
         }
         count1++;
         total=total+50;
      }
      else if(ss>10&&ss<=20)
      {
        
         for(int i=0;i<10;i++)
         {
             if(r2[i]==ss)
             r2[i]=0;
             
         }
         count2++;
         total=total+70;
             
      }
      if(ss>20&&ss<=30)
      {
         
         for(int i=0;i<10;i++)
         {
             if(r3[i]==ss)
             r3[i]=0;
             
         }
         count3++;
         total=total+100;
      }
    }
    printf("\n\t\tAvailable seats are \n");
    printf("\n\nRow One seats:50$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r1[i]);
    }
    printf("\n");
    printf("Row Two seats:70$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r2[i]);
    }
     printf("\n");
    printf("Row Three seats:100$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r3[i]);
    }
         
    }
    
    printf("\n\n*******************************************************************");
    printf("\nName        : Rony");         
    printf("\nID          : %d",N);
    printf("\nMovies Name : Spiderman");
    printf("\nDate        : %d-%d-%d",d,M,y);
    printf("\nTime        : %d:%d ",h,m);
    printf("\nNo of seates: r1->50*%d",count1);
    printf("\n            : r2->70*%d",count2);
    printf("\n            : r3->100*%d",count3);
    printf("\nTicket Price: %d$",total);
    printf("\n*******************************************************************\n\n");
    return ;
  }
  
}
void No_time_to_die() 
{
    int N=rand()%10000;
    
    while(1)
    {
    printf("Please enter the date: \n");
    scanf("%d-%d-%d",&d,&M,&y);
    printf("Please enter the time\n");
    scanf("%d:%d",&h,&m);
    printf("\n\t\tAvailable seats are \n");
    printf("\n\nRow One seats:50$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r1[i]);
    }
    printf("\n");
     printf("Row Two seats:70$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r2[i]);
    }
     printf("\n");
    printf("Row Three seats:100$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r3[i]);
    }
     printf("\n\n");
     
     
    printf("Please enter the number of tickets\n");
    scanf("%d",&n);
   
    for(int i=0;i<n;i++)
    {
     printf("Please enter the seat number \n");
     scanf("%d",&ss);
     if(ss<=10)
     {
        
         for(int i=0;i<10;i++)
         {
             if(r1[i]==ss)
             r1[i]=0;
         }
         count1++;
         total=total+50;
     }
      else if(ss>10&&ss<=20)
     {
         
         for(int i=0;i<10;i++)
         {
             if(r2[i]==ss)
             r2[i]=0;
             
         }
         count2++;
         total=total+70;
             
     }
      if(ss>20&&ss<=30)
     {
         
         for(int i=0;i<10;i++)
         {
             if(r3[i]==ss)
             r3[i]=0;
             
         }
         count3++;
         
         total=total+100;
     }
    }
    printf("\n\t\tAvailable seats are \n");
    printf("\n\nRow One seats:50$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r1[i]);
    }
    printf("\n");
     printf("Row Two seats:70$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r2[i]);
    }
     printf("\n");
    printf("Row Three seats:100$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r3[i]);
    }
    
    printf("\n\nDo you want add seat(y/n)");
    fflush(stdin);
    scanf(" %c",&ch);
    if(ch=='y')
     {
          printf("Please enter the number of tickets\n");
          scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
      printf("Please enter the seat number \n");
      scanf("%d",&ss);
      if(ss<=10)
      {
         
         for(int i=0;i<10;i++)
         {
             if(r1[i]==ss)
             r1[i]=0;
             
             
         }
         count1++;
         total=total+50;
      }
      else if(ss>10&&ss<=20)
       {
        
         for(int i=0;i<10;i++)
         {
             if(r2[i]==ss)
             r2[i]=0;
             
         }
         count2++;
         total=total+70;
             
      }
      if(ss>20&&ss<=30)
      {
         
         for(int i=0;i<10;i++)
         {
             if(r3[i]==ss)
             r3[i]=0;
             
         }
         count3++;
         total=total+100;
      }
     }
      printf("\n\t\tAvailable seats are \n");
      printf("\n\nRow One seats:50$\n");
      for(int i=0;i<10;i++)
      {
        printf("%d \t",r1[i]);
     }
     printf("\n");
     printf("Row Two seats:70$\n");
     for(int i=0;i<10;i++)
     {
        printf("%d \t",r2[i]);
     }
     printf("\n");
     printf("Row Three seats:100$\n");
     for(int i=0;i<10;i++)
      {
        printf("%d \t",r3[i]);
      }
    }
    
     printf("\n\n*******************************************************************");
     printf("\nName        : Rony");         
     printf("\nID          : %d",N);
     printf("\nMovies Name : No time to die");
     printf("\nDate        : %d-%d-%d",d,M,y);
     printf("\nTime        : %d:%d",h,m);
     printf("\nNo of seates: r1->50*%d",count1);
     printf("\n            : r2->70*%d",count2);
     printf("\n            : r3->100*%d",count3);
     printf("\nTicket Price: %d",total);
     printf("\n*******************************************************************\n\n");
    return ;
   }
  
}
void Madagaja() 
{
    int N=rand()%10000;
    
    while(1)
    {
    printf("Please enter the date: \n");
    scanf("%d-%d-%d",&d,&M,&y);
    printf("Please enter the time\n");
    scanf("%d:%d",&h,&m);
    printf("\n\t\tAvailable seats are \n");
    printf("\n\nRow One seats:50$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r1[i]);
    }
    printf("\n");
     printf("Row Two seats:70$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r2[i]);
    }
     printf("\n");
    printf("Row Three seats:100$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r3[i]);
    }
     printf("\n\n");
     
     
    printf("Please enter the number of tickets\n");
    scanf("%d",&n);
   
    for(int i=0;i<n;i++)
    {
     printf("Please enter the seat number \n");
     scanf("%d",&ss);
     if(ss<=10)
     {
        
         for(int i=0;i<10;i++)
         {
             if(r1[i]==ss)
             r1[i]=0;
         }
         count1++;
         total=total+50;
      }
      else if(ss>10&&ss<=20)
      {
         
         for(int i=0;i<10;i++)
         {
             if(r2[i]==ss)
             r2[i]=0;
             
         }
         count2++;
         total=total+70;
             
      }
      if(ss>20&&ss<=30)
      {
         
         for(int i=0;i<10;i++)
         {
             if(r3[i]==ss)
             r3[i]=0;
             
         }
         count3++;
         
         total=total+100;
     }
    }
    printf("\n\t\tAvailable seats are \n");
    printf("\n\nRow One seats:50$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r1[i]);
    }
    printf("\n");
     printf("Row Two seats:70$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r2[i]);
    }
    printf("\n");
    printf("Row Three seats:100$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r3[i]);
    }
    
    printf("\n\nDo you want add seat(y/n)");
    fflush(stdin);
    scanf(" %c",&ch);
    if(ch=='y')
    {
          printf("Please enter the number of tickets\n");
          scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
      printf("Please enter the seat number \n");
      scanf("%d",&ss);
      if(ss<=10)
      {
         
         for(int i=0;i<10;i++)
         {
             if(r1[i]==ss)
             r1[i]=0;
             
             
         }
         count1++;
         total=total+50;
      }
      else if(ss>10&&ss<=20)
      {
        
         for(int i=0;i<10;i++)
         {
             if(r2[i]==ss)
             r2[i]=0;
             
         }
         count2++;
         total=total+70;
             
      }
      if(ss>20&&ss<=30)
      {
         
         for(int i=0;i<10;i++)
         {
             if(r3[i]==ss)
             r3[i]=0;
             
         }
         count3++;
         total=total+100;
      }
     }
     printf("\n\t\tAvailable seats are \n");
     printf("\n\nRow One seats:50$\n");
     for(int i=0;i<10;i++)
     {
        printf("%d \t",r1[i]);
     }
     printf("\n");
     printf("Row Two seats:70$\n");
     for(int i=0;i<10;i++)
     {
        printf("%d \t",r2[i]);
     }
     printf("\n");
     printf("Row Three seats:100$\n");
     for(int i=0;i<10;i++)
     {
        printf("%d \t",r3[i]);
    }
   }
    
    printf("\n\n*******************************************************************");
    printf("\nName        : Rony");         
    printf("\nID          : %d",N);
    printf("\nMovies Name : Madagaja");
    printf("\nDate        : %d-%d-%d",d,M,y);
    printf("\nTime        : %d:%d ",h,m);
    printf("\nNo of seates: r1->50*%d",count1);
    printf("\n            : r2->70*%d",count2);
    printf("\n            : r3->100*%d",count3);
    printf("\nTicket Price: %d",total);
    printf("\n*******************************************************************\n\n");
    return ;
  }
  
}
void Love_mocktail_2() 
{
    int N=rand()%10000;
    
    while(1)
    {
    printf("Please enter the date: \n");
    scanf("%d-%d-%d",&d,&M,&y);
    printf("Please enter the time\n");
    scanf("%d:%d",&h,&m);
    printf("\n\t\tAvailable seats are \n");
    printf("\n\nRow One seats:50$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r1[i]);
    }
    printf("\n");
     printf("Row Two seats:70$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r2[i]);
    }
     printf("\n");
    printf("Row Three seats:100$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r3[i]);
    }
     printf("\n\n");
     
     
    printf("Please enter the number of tickets\n");
    scanf("%d",&n);
   
    for(int i=0;i<n;i++)
    {
     printf("Please enter the seat number \n");
     scanf("%d",&ss);
     if(ss<=10)
     {
        
         for(int i=0;i<10;i++)
         {
             if(r1[i]==ss)
             r1[i]=0;
         }
         count1++;
         total=total+50;
     }
      else if(ss>10&&ss<=20)
     {
         
         for(int i=0;i<10;i++)
         {
             if(r2[i]==ss)
             r2[i]=0;
             
         }
         count2++;
         total=total+70;
             
     }
      if(ss>20&&ss<=30)
     {
         
         for(int i=0;i<10;i++)
         {
             if(r3[i]==ss)
             r3[i]=0;
             
         }
         count3++;
         
         total=total+100;
     }
 }
    printf("\n\t\tAvailable seats are \n");
    printf("\n\nRow One seats:50$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r1[i]);
    }
    printf("\n");
     printf("Row Two seats:70$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r2[i]);
    }
     printf("\n");
    printf("Row Three seats:100$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r3[i]);
    }
    
    printf("\n\nDo you want add seat(y/n)");
    fflush(stdin);
    scanf(" %c",&ch);
    if(ch=='y')
     {
          printf("Please enter the number of tickets\n");
          scanf("%d",&n);
   
     for(int i=0;i<n;i++)
     {
      printf("Please enter the seat number \n");
      scanf("%d",&ss);
       if(ss<=10)
        {
         
         for(int i=0;i<10;i++)
         {
             if(r1[i]==ss)
             r1[i]=0;
             
             
         }
         count1++;
         total=total+50;
      }
      else if(ss>10&&ss<=20)
      {
        
         for(int i=0;i<10;i++)
         {
             if(r2[i]==ss)
             r2[i]=0;
             
         }
         count2++;
         total=total+70;
             
      }
      if(ss>20&&ss<=30)
      {
         
         for(int i=0;i<10;i++)
         {
             if(r3[i]==ss)
             r3[i]=0;
             
         }
         count3++;
         total=total+100;
      }
     }
    printf("\n\t\tAvailable seats are \n");
    printf("\n\nRow One seats:50$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r1[i]);
    }
    printf("\n");
     printf("Row Two seats:70$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r2[i]);
    }
     printf("\n");
    printf("Row Three seats:100$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r3[i]);
    }
}
    printf("\n\n\t\t                MOVIE TICKET                                   ");
    printf("\n\n*******************************************************************");
    printf("\nName        : Rony");         
    printf("\nID          : %d",N);
    printf("\nMovies Name : Love mocktail 2");
    printf("\nDate        : %d-%d-%d",d,M,y);
    printf("\nTime        : %d:%d ",h,m);
    printf("\nNo of seates: r1->50*%d",count1);
    printf("\n            : r2->70*%d",count2);
    printf("\n            : r3->100*%d",count3);
    printf("\nTicket Price: %d",total);
    printf("\n*******************************************************************\n\n");
    return ;
  }
  
}
void Soda_Sharbath() 
{
    int N=rand()%10000;
    
    while(1)
    {
    printf("Please enter the date: \n");
    scanf("%d-%d-%d",&d,&M,&y);
    printf("Please enter the time\n");
    scanf("%d:%d",&h,&m);
    printf("\n\t\tAvailable seats are \n");
    printf("\n\nRow One seats:50$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r1[i]);
    }
    printf("\n");
     printf("Row Two seats:70$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r2[i]);
    }
     printf("\n");
    printf("Row Three seats:100$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r3[i]);
    }
     printf("\n\n");
     
     
    printf("Please enter the number of tickets\n");
    scanf("%d",&n);
   
    for(int i=0;i<n;i++)
    {
     printf("Please enter the seat number \n");
     scanf("%d",&ss);
     if(ss<=10)
     {
        
         for(int i=0;i<10;i++)
         {
             if(r1[i]==ss)
             r1[i]=0;
         }
         count1++;
         total=total+50;
     }
      else if(ss>10&&ss<=20)
     {
         
         for(int i=0;i<10;i++)
         {
             if(r2[i]==ss)
             r2[i]=0;
             
         }
         count2++;
         total=total+70;
             
     }
      if(ss>20&&ss<=30)
     {
         
         for(int i=0;i<10;i++)
         {
             if(r3[i]==ss)
             r3[i]=0;
             
         }
         count3++;
         
         total=total+100;
     }
     }
    printf("\n\t\tAvailable seats are \n");
    printf("\n\nRow One seats:50$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r1[i]);
    }
    printf("\n");
     printf("Row Two seats:70$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r2[i]);
    }
     printf("\n");
    printf("Row Three seats:100$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r3[i]);
    }
    
    printf("\n\nDo you want add seat(y/n)");
    fflush(stdin);
    scanf(" %c",&ch);
    if(ch=='y')
    {
          printf("Please enter the number of tickets\n");
          scanf("%d",&n);
   
     for(int i=0;i<n;i++)
     {
      printf("Please enter the seat number \n");
      scanf("%d",&ss);
      if(ss<=10)
      {
         
         for(int i=0;i<10;i++)
         {
             if(r1[i]==ss)
             r1[i]=0;
             
             
         }
         count1++;
         total=total+50;
      }
      else if(ss>10&&ss<=20)
      {
        
         for(int i=0;i<10;i++)
         {
             if(r2[i]==ss)
             r2[i]=0;
             
         }
         count2++;
         total=total+70;
             
      }
      if(ss>20&&ss<=30)
      {
         
         for(int i=0;i<10;i++)
         {
             if(r3[i]==ss)
             r3[i]=0;
             
         }
         count3++;
         total=total+100;
     }
    }
    printf("\n\t\tAvailable seats are \n");
    printf("\n\nRow One seats:50$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r1[i]);
    }
    printf("\n");
     printf("Row Two seats:70$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r2[i]);
    }
     printf("\n");
    printf("Row Three seats:100$\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",r3[i]);
    }
}
    
    printf("\n\n*******************************************************************");
    printf("\nName        : Rony");         
    printf("\nID          : %d",N);
    printf("\nMovies Name : Soda Sharbath");
    printf("\nDate        : %d-%d-%d",d,M,y);
    printf("\nTime        : %d:%d",h,m);
    printf("\nNo of seates: r1->50*%d",count1);
    printf("\n            : r2->70*%d",count2);
    printf("\n            : r3->100*%d",count3);
    printf("\nTicket Price: %d",total);
    printf("\n*******************************************************************\n\n");
    return ;
  }
  
}

void main()
{
    int choice;
    printf("\n\t\tMovies Available \n");
    printf("=====================================================================");
    printf("\n\t1.Spiderman\n");
    printf("\n\t2.No time to die\n");
    printf("\n\t3.Madagaja\n");
    printf("\n\t4.Love mocktail 2\n");
    printf("\n\t5.Soda Sharbath\n");
    printf("\n\tPress 6 to exit\n\n");
    printf("\n===================================================================");
    printf("\nPlease enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: Spiderman();
              break;
        case 2: No_time_to_die();
              break;
        case 3: Madagaja();
              break;
        case 4: Love_mocktail_2();
              break;
        case 5: Soda_Sharbath();
              break;
        case 6:exit(0);
               
             default: printf("Invalid choice\n");
    }
   return;  
}
