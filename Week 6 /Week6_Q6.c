 #include<stdio.h>
 int main()
 {
   int startday, days;
   printf("Enter the no of days in the month : ");
   scanf("%d", &days);
   printf("Enter the starting day of month (1=Mon, 2=Tue, ..., 7=Sun)");
   scanf("%d", &startday);
   printf("Mon Tue Wed Thu Fri Sat Sun\n");
   for(int i = 1 ; i<startday ;i ++)
   {
      printf("    ");
   }
   for(int day = 1 ; day<=days ;day++)
   {
      printf("%3d ", day);
      if((day + startday - 1) % 7 == 0)
      {
         printf("\n");
      }
   }
   return 0 ;
 }
