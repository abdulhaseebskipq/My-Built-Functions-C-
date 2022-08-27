#include<iostream>
using namespace std;
const int col=5;
const int row=5;
void output(int *array);
void twodinput(int array[row][col]);
void twodoutput(int array[row][col]);
void average(int array[row][col]);
void checkidentity(int array[row][col]);
void produceidentity(int array[row][col]);
void produce_not_identity(int array[row][col]);
void check_sum_equal(int array[row][col]);
void sum_of_left_diagnol(int array[row][col]);
void sum_of_right_diagnol(int array[row][col]);
void user_input(int array[row][col]);
void swap_rows(int array[row][col],int rno1,int rno2);
void swap(int array[row][col],int i,int j,int k, int l);
int j;
int main()
{
    int a[row][col],sum=0,averagee[col];
    int j,i,check=0;
   // produce_not_identity(a);
   produceidentity(a);
   //sum_of_left_diagnol(a);
   sum_of_right_diagnol(a);
    //twodinput(a);
    //user_input(a);
    //twodoutput(a);
    //check_sum_equal(a);
    //swap(a,0,0,1,0);
    //swap_rows(a,1,2);
    twodoutput(a);
}
void twodinput(int array[row][col])
{
        int j,i;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"name"
            cin>>array[i][j];
        }
    }
}
void twodoutput(int array[row][col])
{
    int j,i;
        for(i=0;i<row;i++)
    {

        cout<<"|";
        for(j=0;j<col;j++)
        {
            cout<<array[i][j];
             if(array[i][j]<=9)
                cout<<"  ";
             else
               cout<<" ";

        }
        cout<<"|"<<endl;
    }
}

void checkidentity(int array[row][col])
{
   int j,i,check=0;
       for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j && array[i][j]!=1)
                check=1;
            if(i!=j && array[i][j]!=0)
                check=1;

        }
    }
    if(check==1)
        cout<<"this is not identity matrix";
    else
        cout<<"it is an identity matrix";
}
void produceidentity(int array[row][col])
{
    int j,i,check=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j )
                array[i][j]=1;
            if(i!=j )
                array[i][j]=0;
        }
    }
}
void produce_not_identity(int array[row][col])
{
        int j,i,check=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j )
                array[i][j]=1;
            if(i!=j )
                array[i][j]=0;
        }
    }
    array[1][0]=2;
}
void check_sum_equal(int array[row][col])
{
    int j,i,sum1=0,sum2=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<j )
                sum1=sum1+array[i][j];
            if(i>j )
                sum2=sum2+array[i][j];
        }
    }
    if (sum1==sum2)
        cout<<"SUM IS EQUAL";
    else
        cout<<"SUM IS NOT EQUAL";
}
void user_input(int array[row][col])
{
    int j,i;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>array[i][j];
        }
    }
}
void swap(int array[row][col],int i,int j,int k, int l)
{
    int v;
    v=array[i][j];
    array[i][j]=array[k][l];
    array[k][l]=v;
}
void swap_rows(int array[row][col],int rno1,int rno2)
{
    rno1=rno1-1;rno2=rno2-1;
    for(j=0;j<col;j++)
    swap(array,rno1,j,rno2,j);
}
void sum_of_left_diagnol(int array[row][col])
{
        int j,i,sum=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j )
               sum=sum+ array[i][j];

        }
    }
    cout<<"SUM OF LEFT DIAGNOL IS = "<<sum<<endl;
}
void sum_of_right_diagnol(int array[row][col])
{
    int i,cv=col-1,sum=0;
    for(i=0;i<row;i++)
    {
        sum=sum+array[i][cv];
        cv--;
    }
    cout<<"SUM OF RIGHT DIAGNOL IS = "<<sum<<endl;
}
