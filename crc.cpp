#include<iostream>
#include "crc1.cpp" //eg. including CRC1.cpp file from F: drive
using namespace std;
int gen,msg;
int main()
{
 int msg_pass[20],msg_temp[20],chc,i=0,lenght_msg,lenght_gen,rem[6],ori_msg_len;
cout<<"Enter the message to be passed(in decimal):\n";
cin>>msg;
cout<<"The message in binary code:\n";
dec_to_bin(msg,msg_pass);
lenght_msg=lenght;
cout<<"Enter the generator number i.e, the divisor:(in decimal)\n";
cin>>gen;
cout<<"the binary value of generator is:\n";
int genr[6];
dec_to_bin(gen,genr);
lenght_gen=lenght;
for(int j=0;j<lenght_msg;j++)
msg_temp[j]=msg_pass[j];
ori_msg_len=lenght_msg;
division(msg_pass,lenght_msg,genr,lenght_gen);
i=0;
while(msg_pass[i]!=1)
{
i++;
if(i>=lenght_msg)
break;
}
int r=ori_msg_len;
if(i<lenght_msg)
{
cout<<"The crc remainder is:\n";
for(int j=i;j<lenght_msg;j++)
{
cout<<msg_pass[j]<<" ";
msg_temp[r]=msg_pass[j];
r++;
}
cout<<endl;
}
cout<<"The msg to be passed:\n";
for(i=0;i<r;i++)
cout<<msg_temp[i]<<" ";
cout<<endl;
return 0;
}
