  #include <stdio.h>
void main(){
    int x,y,i,n;
    float k1,k2,k3,k4,k20,k21,k30,k31,k40,k41;
    static int  count1,count2,count11,count22,
     count3,count33;
     float h[4],x0,y0,x1,x2,x3,y1;
     
     
    char numx[4],numy[4];
    printf("Enter the char for the value of x= ");
    scanf("%s",numx);
    printf("Enter the char for the value of y= ");
    scanf("%s",numy);
    printf("Enter the value of x0= ");
    scanf("%f",&x0);
    printf("Enter the value of y0= ");
    scanf("%f",&y0);
    printf("----------------------------------------\n");
    printf("how many values of h values: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter h= ");
        scanf("%f",&h[i]);
    }
    
    // finging  the x0,x1,x2 values
      x1=x0+h[0]; 
      x2=x1+h[0];
      x3=x2+h[0];
      printf("here\n x1= %f \n x2=%.4f \n x3=%.4f",x1,x2,x3);
    
    // heare i am doing the knouing the how many values the use had entered form  the key bord//
    /* fro x be like x*y*/
    for(i=0; numx[i]=='x'&& numx[i+1]=='y' ;i++ ){
        count1++;
        break;
    }
    /*fro x like x*x */
    for(i=0; numx[i]=='x'&& numx[i+2]=='x'||numx[i+3]=='x';i++){
        count2++;
        break;
    }
    // fro x like x//
    for(i=0;numx[i]=='x'&&numx[i+1]=='\0';i++){
        count3++;
        break;
    }
    // y started from here
    
     // fro y like x*y
     for(i=0; numy[i]=='x'&& numy[i+1]=='y' ;i++ ){
        count11++;
        break;
    }
    // fro y like y*y
    for(i=0; numy[i]=='y'&& numy[i+2]=='y'||numy[i+3]=='y';i++){
        count22++;
        break;
    }
    //for y like y 
    for(i=0;numy[i]=='y' && numy[i+1]=='\0';i++){
        count33++;
        break;
    }
    // quction is like xy+xy
    if(count1==1 && count11==1){
        k1=h[0]*(x0*y0 + x0*y0);
        // fro k2;
            k20=x0+h[0]/2;
          k21=y0+k1/2;
          
          k2=h[0]*(k20*k21+k21*k20);
          // for k3
          k30=x0+h[0]/2;
          k31=y0+k2/2;
          k3=h[0]*(k30*k31+k31*k30);
          // fro k4
           k40=x0+h[0];
              k41=y0+k3;
              k4=h[0]*(k40*k41+k40*k41);
        
          
    }
    // the quction is like xy+y
    else if(count1==1 && count33==1){
         k1=h[0]*(x0*y0 + y0);
        // fro k2;
            k20=x0+h[0]/2;
          k21=y0+k1/2;
          
          k2=h[0]*(k20*k21+k21);
          // for k3
          k30=x0+h[0]/2;
          k31=y0+k2/2;
          k3=h[0]*(k30*k31+k31);
          // fro k4
           k40=x0+h[0];
              k41=y0+k3;
              k4=h[0]*(k40*k41+k41);
        
    }
    // if the quction is x+xy
    else if(count3==1 && count11==1){
          k1=h[0]*(x0+y0*x0);
          // for k2
          k20=x0+h[0]/2;
          k21=y0+k1/2;
          k2=h[0]*(k20+k20*k21);
          // for k3
          k30=x0+h[0]/2;
          k31=y0+k2/2;
          k3=h[0]*(k30+k30*k31);
          // for k4
          k40=x0+h[0];
          k41=y0+k3;
          k4=h[0]*(k40+k40*k41);
    }
    // for the quction is like x+ or - y
    else if(count3==1 && count33==1){
          k1=h[0]*(x0+y0);
          // for k2
          k20=x0+h[0]/2;
          k21=y0+k1/2;
          k2=h[0]*(k20+k21);
          // for k3
          k30=x0+h[0]/2;
          k31=y0+k2/2;
          k3=h[0]*(k30+k31);
          // for k4
          k40=x0+h[0];
          k41=y0+k3;
          k4=h[0]*(k40+k41);
    }
    // if the problem is x+y*y;
    else if(count3==1 && count22==1){
          k1=h[0]*(x0+y0*y0);
          // for k2
          k20=x0+h[0]/2;
          k21=y0+k1/2;
          k2=h[0]*(k20+k20*k21);
          // for k3
          k30=x0+h[0]/2;
          k31=y0+k2/2;
          k3=h[0]*(k30+k30*k31);
          // for k4
          k40=x0+h[0];
          k41=y0+k3;
          k4=h[0]*(k40+k40*k41);
    }
    // if the problem is x*x + y
    if(count2==1 && count33==1 ){
          k1=h[0]*(x0*x0+y0);
          // for k2
          k20=x0+h[0]/2;
          k21=y0+k1/2;
          k2=h[0]*(k20*k20+k21);
          // for k3
          k30=x0+h[0]/2;
          k31=y0+k2/2;
          k3=h[0]*(k30*k30+k31);
          // for k4
          k40=x0+h[0];
          k41=y0+k3;
          k4=h[0]*(k40*k40+k41);
            }
            // if the quction  is x*x + y*y
            if(count2==1 && count22==1){
          k1=h[0]*(x0*x0+y0*y0);
          // for k2
          k20=x0+h[0]/2;
          k21=y0+k1/2;
          k2=h[0]*(k20*k20+k21*k21);
          // for k3
          k30=x0+h[0]/2;
          k31=y0+k2/2;
          k3=h[0]*(k30*k30+k31*k31);
          // for k4
          k40=x0+h[0];
          k41=y0+k3;
          k4=h[0]*(k40*k40+k41*k41);
          y1=y0+(0.1666*(k1+2*(k2)+2*(k3)+k4));
            }
             
     printf("The values are....");
     printf("-----------------------------------------------");
     printf("\nx0=%f\n x1=%f\n x2=%f x3=%f",x0,x1,x2,x3);
     /*printf("\nk1=%f\nk2=%f\nk3=%f\nk4=%f\n"k1,k2,k3,k4);
     printf("The finel y1 value is...");
     printf("y1(%f)=%f",h[0],y1);*/
     printf("\n k1=%f",k1);
     printf("\nk2=%f",k2);
     printf("\n k3=%f",k3);
     printf("\n k4=%f",k4);
     printf("\n y1=%f",y1);



  
}
