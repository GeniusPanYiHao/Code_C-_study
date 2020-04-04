//：用优先队列模拟细胞分裂


#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<deque>
#include<queue>
#include<time.h>
using namespace std;
const int SPLIT_TIME_MIN = 500;
const int SPLIT_TIME_MAX = 2000;
class Cell;
priority_queue<Cell>cellQueue;
class Cell
{
public:
	Cell(int birth) :id(count++)
	{
		time = birth + (rand() % (SPLIT_TIME_MAX - SPLIT_TIME_MIN)) + SPLIT_TIME_MIN;
	}
	int getID()const
	{
		return id;
	}
	int getSplitTime()const
	{
		return time;
	}
	bool operator<(const Cell &s)const
	{
		return time>s.time;
	}
	void split()
	{
		Cell child1(time), child2(time);//:建立两个子细胞
		cout << time << "s:cell#" << id << "split to#" << child1.getID() << "and" << child2.getID() << endl;
		cellQueue.push(child1);
		cellQueue.push(child2);
	}
private:
	static int count;
	int id;//:细胞编号
	int time;//:细胞分裂时间
};
int Cell::count = 0;
int main()
{
	srand(static_cast<unsigned>(time(0)));
	int t;
	cout << "Simulation time";
	cin >> t;
	cellQueue.push(Cell(0));
	while (cellQueue.top().getSplitTime() <= t)
	{
		cellQueue.top().split();
		cellQueue.pop();
	}
	return 0;
}