#include<iostream>
using namespace std;
const int size=10;
int i;
void input(int *array);
void output(int *array);
bool search_binary(int *array,int first,int last,int key);
bool search(int *array,int key);
void replace(int *array,int i,int j);
int find_max(int *array,int i,int max);
int maxindexsort(int *array,int last);
int maxindex(int *array);
int sort(int *array);
bool search(int *array,int first,int last,int key);
int main()
{
    int a[size],f,res,d;
    input(a);
    output(a);
    cout<<"enter key";
    cin>>d;
    cout<<search(a,0,size-1,d);
}
bool search(int *array,int key)
{
  int i,di;
  di=size/2;

  if (key==array[di])
    return true;
  else
  {
      if(key<array[di])
      {
          for(i=0;i<di;i++)
          {
              if(array[i]==key)
                return true;
          }
          return false;
      }
      else
      {
          for(i=di;i<size;i++)
          {
              if(array[i]==key)
                return true;
          }
          return false;
      }
  }

}

void input (int *array)
{
   for(i=0;i<size;i++)
        cin>>array[i];
}
bool search_binary(int *array,int first,int last,int key)
{
   if(first<=last)
     {int  middle=(first+last)/2;
   if(key==array[middle])
    return true;
   else
   {
       if(key<array[middle])
        return search_binary(array,last,middle-1,key);
       else
        return search_binary(array,middle+1,last,key);
   }
     }
   return false;
}
void replace(int *array,int i,int j)
{
    int k;
    k=array[i];
    array[i]=array[j];
    array[j]=k;
}
void output(int *array)
{
    for (i=0;i<size;i++)
        cout<<array[i]<<endl;
}
int find_max(int *array,int i,int max)
{
    if(i==0)
        max=array[0];
    if (i==(size))
        return max;
    if (max<array[i])
       {
        max=array[i];

       }
    find_max(array,i+1,max);
}
int maxindex(int *array)
{
 int index=0;
 int max_no=array[0];
 int i;
 for(i=1;i<size;i++)
 {
     if(max_no<array[i])
     {
         max_no=array[i];
         index=i;
     }
 }
 return index;
}
int sort(int *array)
{
    int check=0,mi,i;
    for(i=0;i<size-1;i++)
    {mi=maxindexsort(array,(size-1)-check);
    replace(array,mi,(size-1)-check);
    check++;
    }
}
int maxindexsort(int *array,int last)
{
 int index=0;
 int max_no=array[0];
 int i;
 for(i=0;i<=last;i++)
 {
     if(max_no<array[i])
     {
         max_no=array[i];
         index=i;
     }
 }
 return index;
}
bool search(int *array,int first,int last,int key)
{
    ///last & first are index
    int mid=(last+first)/2;
    if(key<array[first] || key>array[last])
        return false;
    if(key==array[first] || key==array[last])
        return true;
    else
    {
        if(array[mid]==key)
        {
            return true;
        }
        if(array[mid]>key)
        {
            search(array,first,mid,key);
        }
        else
            search(array,mid,last,key);
    }
}

