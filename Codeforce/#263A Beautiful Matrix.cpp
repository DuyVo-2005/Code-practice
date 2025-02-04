//Author: Vo Le Khanh Duy (DuyVo2005)
#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char *argv[])
{
	vector<vector<int>>matrix(5,vector<int>(5, 0));
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)	cin>>matrix[i][j];
	int i_pos = 0, j_pos = 0;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			if(matrix[i][j] == 1){
				i_pos = i;
				j_pos = j;
				break;
			}
	cout<<abs(i_pos - 2) + abs(j_pos - 2);// middle: M(2,2)
	return 0;
}
