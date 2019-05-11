#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class headquarter
{
	string headquarterName; // 本部司令部名
	int allLifeValue;   //所有生命值
	int warriorValue[5]; // 由给定的顺序和原始战士名字的数组
	string warriorName[5]; //由给定的顺序和原始战士名字的数组，得到该总部战士名字的数组
	int minWarriorValue;  //计算出战士中的最小生命值
	int warriorNumber[5];  //本部每种武士的生产个数。此处不能设置初始值0
	int currentPosition;  //记录生产战士类别的当前位置
	int totalNum;   //本部生产战士的总数

public:
	bool headstop;  //判断是否停止出兵，最好由构造函数初始化
	static int time;  //武士出场时间

	headquarter(string theheadquarterName, int theallLifeValue, const string thepriorallWarriorName[], const int thewarriorValue[], const int thewarriorOrder[]);
	void produceWarrior(int time, int position); // 生产战士
	void dispatchWarrior(); //出兵
};

//初始化相关数据
int headquarter::time = 0;  //两个司令部共用同一个时间
headquarter::headquarter(string theheadquarterName, int theallLifeValue, const string thepriorallWarriorName[],  
    const int thewarriorValue[], const int thewarriorOrder[]):headquarterName(theheadquarterName), 
    allLifeValue(theallLifeValue), currentPosition(0), totalNum(0), headstop(false)
{
	for (int i = 0; i < 5; i++){
        warriorNumber[i] = 0;
        warriorName[i] = thepriorallWarriorName[thewarriorOrder[i]]; //由给定的顺序和原始战士名字的数组，得到该总部战士名字的数组
        warriorValue[i] = thewarriorValue[thewarriorOrder[i]];  //由给定的顺序和原始战士名字的数组，得到该总部战士生命值的数组
    }

    minWarriorValue = warriorValue[0];
    for (int i = 1; i < 5; i++)
    {
        if (warriorValue[i] < minWarriorValue)
            minWarriorValue = warriorValue[i];
    }



}


//生产战士***
void headquarter::produceWarrior(int time, int position){
    totalNum++;
    warriorNumber[position]++;

    //按题目要求输出语句
    cout << setfill('0') << setw(3) << time << ' ' << headquarterName << ' ' << warriorName[position]  //注意加上 #include <string> https://stackoverflow.com/questions/6320995/why-i-cannot-cout-a-string
        << ' ' << totalNum << " born with strength " << warriorValue[position] << ',' << warriorNumber[position]
        << ' ' << warriorName[position] << " in " << headquarterName << " headquarter" << endl;

    allLifeValue -= warriorValue[position];
}

//出兵***
void headquarter::dispatchWarrior(){
    if (allLifeValue < minWarriorValue){
        cout << setfill('0') << setw(3) << time << ' ' << headquarterName << " headquarter stops making warriors" << endl;
        headstop = true;
    }
    else{
        //从上面的判断句筛选后，现在一定能出兵
        //从当前position开始增加，到某个位置出兵了停止
        while (true){
            if (allLifeValue >= warriorValue[currentPosition]){
                produceWarrior(time, currentPosition);
                currentPosition == 4 ? currentPosition = 0 : currentPosition++;
                break;
            }
            else
                currentPosition == 4 ? currentPosition = 0 : currentPosition++;
        }
    }
}

int main(){
    int n = 0, m = 0;
    string priorallWarriorName[5] = { "dragon", "ninja", "iceman", "lion", "wolf" }; //所有武士的姓名和原始排序 
    int warriorValue[5] = { 0 };  //依次是 dragon 、ninja、iceman、lion、wolf 的初始生命值
    const int redwarriorOrder[5] = { 2, 3, 4, 1, 0 };  //红部出兵顺序
    const int bluewarriorOrder[5] = { 3, 0, 1, 2, 4 }; //蓝部出兵顺序

    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> m;
        for (int j = 0; j < 5; j++)
            cin >> warriorValue[j];

        cout << "Case:" << i << endl;

        headquarter redQuarter("red", m, priorallWarriorName, warriorValue, redwarriorOrder);
        //headquarter redQuarter = headquarter("red", m, priorallWarriorName, warriorValue, redwarriorOrder); 这样也可以
        headquarter blueQuarter("blue", m, priorallWarriorName, warriorValue, bluewarriorOrder);
        //headquarter blueQuarter = headquarter("blue", m, priorallWarriorName, warriorValue, bluewarriorOrder); 这样也可以

        headquarter::time = 0; //派兵次数置零，没有此句在多组测试数据下时间会一直累加！
        while (!redQuarter.headstop || !blueQuarter.headstop){
            if (!redQuarter.headstop)
                redQuarter.dispatchWarrior();

            if (!blueQuarter.headstop)
                blueQuarter.dispatchWarrior();

            headquarter::time++;  //redQuarter.time++;也可以
        }
    }

    return 0;
}