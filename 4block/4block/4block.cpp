//4.1
// #include <iostream>
// #include <fstream>
// #include <cstring>
// using namespace std;

// int main()
// {
    
//     setlocale(LC_ALL, "Rus");
//     ofstream NumSum("sum.txt");
//     int num[10];
//     int sum[10];
//     int b;
//     b = 0;
//     for (int i = 0; i < 10; i++) {
//         cin >> num[i];
//         NumSum << num[i]<<" ";
//     }
//     NumSum.close();
//     ifstream Summ("sum.txt");
//     for (int i = 0; i < 10; i++) {
//         Summ >> sum[i];
//         b += sum[i];
//     }
//     cout << b;
//     return 0;
// }


////4.2
//#include <iostream>
//#include <string>
//#include <math.h>
//
//using namespace std;
//
//
//
//void sing()
//{
//	int x;
//	cout << "Введите число: ";
//	cin >> x;
//	
//	if (x > 0) {
//		x = 1;
//		cout << "x = " << x;
//	}
//	else if (x == 0) {
//		x = 0;
//		cout << "x = " << x;
//	}
//	else if (x < 0) {
//		x = -1;
//		cout << "x = " << x;
//	}
//}
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	sing();
//	return 0;
//}



// //4.3
//#include <iostream>
//#include <string>
//#include <math.h>
//
//using namespace std;
//
//void prug()
//{
//	int a, b, S;
//	cout << "Введите a: ";
//	cin >> a;
//	cout << "Введите b: ";
//	cin >> b;
//	S = a * b;
//	cout << "Площадь прямоугольника: " << S << endl;
//}
//void treug()
//{
//	int a, b, c, P, S;
//	cout << "Введите a: ";
//	cin >> a;
//	cout << "Введите b: ";
//	cin >> b;
//	cout << "Введите c: ";
//	cin >> c;
//	P = (a + b + c) / 2;
//	S= sqrt(P * (P - a) * (P - b) * (P - c));
//	cout << "Площадь треугольника: " << S << endl;
//	cout << "Треугольник не существует";
//}
//
//void krug()
//{
//	float r, Pi, S;
//	Pi = 3.1415;
//	cout << "Введите r: ";
//	cin >> r;
//	S = Pi * pow(r, 2);
//	cout << "Площадь круга: " << S << endl;
//}
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int s;
//	cout << "Площадь фигуры: " << endl;
//	cout << "1 - Прямоугольник" << endl;
//	cout << "2 - Треугольник " << endl;
//	cout << "3 - Круг" << endl;
//	cin >> s;
//	if (s == 1) {
//		prug();
//	}
//	else if (s == 2) {
//		treug();
//	}
//	else if (s == 3) {
//		krug();
//	}
//	else if (s < 1 || s>3) {
//		cout << "Ошибка!";
//	}
//	return 0;
//}



////4.4
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	cout << "Белая слава 1912 года" << endl;
//	cout << " " << endl;
//	for (int i = 0; i < 6; i++) {
//		cout << "********------------------------------------" << endl;
//	}
//	for (int i = 0; i < 7; i ++) {
//		cout << "--------------------------------------------" << endl;
//	}
//	return 0;
//}




////4.5
//#include <iostream> 
//using namespace std;
//
//int main()
//{
//#define WIDTH 80 
//#define HEIGHT 20 
//	int a = -8, b = 8, c = 1, d = -1, wid = WIDTH, hei = HEIGHT;
//	string place[HEIGHT + 3][WIDTH + 3];
//	int x0 = abs(a) * wid / (b - a), y0 = abs(c) * hei / (c - d), i, j;
//	for (i = 0; i <= hei + 2; i++)
//	{
//		for (j = 0; j <= wid + 2; j++)
//		{
//			place[i][j] = " ";
//		}
//	}
//
//	for (i = 2; i <= hei; i++)
//	{
//		place[i][x0] = "|";
//	}
//
//	for (j = 0; j <= wid; j++)
//	{
//		place[y0][j] = "-";
//	}
//
//	float s_x = (float)(b - a) / wid, s_y = (float)(c - d) / hei, y, x;
//	int graph_x, graph_y;
//	for (x = a; x <= b; x = x + s_x)
//	{
//		y = sin(x);
//		graph_x = round(abs(x - a) / (float)(b - a) * wid);
//		graph_y = round(abs(y - d) / (float)(c - d) * hei);
//		place[graph_y + 2][graph_x] = "*";
//	}
//
//	place[0][x0] = "y";
//	place[1][x0] = "^";
//	place[y0][wid + 2] = "x";
//	place[y0][wid + 1] = ">";
//	for (i = 0; i <= hei + 2; i++)
//	{
//		for (j = 0; j <= wid + 2; j++)
//		{
//			cout << place[i][j];
//		}
//		cout<< "\n";
//	}
//
//}

//4.6
//#include <exception>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//namespace Roman
//{
//	int ToInt(char c)
//	{
//		switch (c)
//		{
//			case 'I': return 1;
//			case 'V': return 5;
//			case 'X': return 10;
//			case 'L': return 50;
//			case 'C': return 100;
//			case 'D': return 500;
//			case 'M': return 1000;
//		}
//		
//	}
//
//	int ToInt(const string& s)
//	{
//		int retval = 0;
//		int pvs = 0;
//		for (auto pc = s.rbegin(); pc != s.rend(); ++pc)
//		{
//			const int inc = ToInt(*pc);
//			retval += inc < pvs ? -inc : inc;
//			pvs = inc;
//		}
//		return retval;
//	}
//}
//
//int main(int agrc, char* argv[])
//{
//	setlocale(LC_ALL, "Rus");
//	string numrom ;
//	string n1 ;
//	cout << "Введите число: ";
//	cin >> numrom;
//	n1 = numrom;
//	cout << n1 << " = " << Roman::ToInt(numrom) << endl;
//}

////4.7
//#include <cmath>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    int m, b, c;
//    int res, si, m1;
//    cout << "Введите числа m, b , c " << endl;
//    cin >> m >> b >> c;
//    si = 0;
//    m1 = 0;
//    for (int i = 0; i < 10; i++)
//    {
//
//        res = (((m * si) + b) % c);
//        cout << " " << round(res) << endl;
//
//        si = round(res);
//
//    }
//}



////4.8
//#include <iostream>
//
//
//using namespace std;
//
//
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int aMatric[3][4] = { {5,2,0,10},{3,5,2,5},{20,0,0,0} };
//	float bMatric[4][2] = { {1.20, 0.50},{2.80, 0.40},{5.00,1.00}, {2.00,1.50} };
//	float result[3][2] = { {0,0},{0,0},{0,0} };
//
//
//
//	for (int row = 0; row < 3; row++) {
//		for (int col = 0; col < 2; col++) {
//			for (int inner = 0; inner < 4; inner++) {
//				result[row][col] += aMatric[row][inner] * bMatric[inner][col];
//			}
//			cout << result[row][col] << " ";
//		}
//		cout << "\n";
//	}
//	float max, min;
//	max = 0;
//	min = 100;
//	float maxpr = 0;
//	float minpr = 0;
//	for (int i = 0; i < 3; i++) {
//		if (result[i][0] > max) {
//			max = result[i][0];
//			maxpr = i + 1;
//		}
//		if (result[i][0] < min) {
//			min = result[i][0];
//			minpr = i + 1;
//		}
//	}
//	cout << "1) Больше всего денег с продажи у " << maxpr << "\n" << "Меньше всего денег с продаж у " << minpr << endl;
//	float max1, min1;
//	max1 = 0;
//	min1 = 100;
//	float maxpr1 = 0;
//	float minpr1 = 100;
//	for (int i = 0; i < 3; i++) {
//		if (result[i][1] > max1) {
//			max1 = result[i][1];
//			maxpr1 = i + 1;
//		}
//		if (result[i][1] < min1) {
//			min1 = result[i][1];
//			minpr1 = i + 1;
//		}
//	}
//	float sum = 0;
//	float sum1 = 0;
//	cout << "2) Наибольшие комиссионные у " << maxpr1 << "\n" << "Наименьшие комиссионные у " << minpr1 << endl;
//	for (int i = 0; i < 3; i++)
//		sum += result[i][0];
//	cout << "3) " << sum << endl;
//	for (int i = 0; i < 3; i++)
//		sum1 += result[i][1];
//	cout << "4) " << sum1 << endl;
//	cout << "5) " << sum + sum1 << endl;
//
//}


////4.9
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int a, b;
//	cout << "Введите исходную систему счисления: ";
//	cin >> a;
//	cout << "Введите новую систему счисления: ";
//	cin >> b;
//	cout << "Введите число: ";
//	char chislo[124]{};
//	char output[124]{};
//	const char diapazone[25] = "0123456789ABCDEFGHIJKLMN";
//	cin >> chislo;
//	int var10 = 0;
//	int vara;
//	int size = -1;
//	for (auto el : chislo) {
//		if (el == '\0') break;
//		size++;
//	}
//	cout << size << endl;
//	for (auto el : chislo) {
//		vara = 0;
//		if (el == '\0') break;
//		for (auto ch : diapazone) {
//			if (el == ch) break;
//			vara++;
//		}
//		var10 += vara * pow(a, size--);
//	}
//	cout << var10 << endl;
//	int indicate0 = var10;
//	size = 0;
//	do
//	{
//		indicate0 = var10 / b;
//		vara = 0;
//
//		for (auto ch : diapazone) {
//			if (vara == (var10 - indicate0 * b)) {
//				output[size++] = ch;
//				break;
//			}
//			vara++;
//		}
//		cout << var10 - indicate0 * b << endl;
//		var10 = indicate0;
//	} while (var10 > 0);
//	size = 0;
//	for (auto el : output) {
//		if (el == '\0') break;
//		size++;
//	}
//	cout << "Ваше число: ";
//	for (int i = 0; i < size; i++)
//		cout << output[size - 1 - i];
//	
//}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//									ШАРИКИИИИИИИИИИИИИИИИИИИИ                                      //
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <algorithm>

using namespace std;


bool perestanovka(int* urna, int n)
{
   for (int i = 0; i < n; ++i)
   {
       if (urna[i] == i)
       {
           return true;
       }
   }
   return false;
}

int main()
{
   setlocale(LC_ALL, "Rus");
   int ans = 0, n = 10, fac = 3628800;
   int urna[10] = { 0,1,2,3,4,5,6,7,8,9 };
   for (int i = 0; i < fac; ++i)
   {
       next_permutation(urna, urna + n);
       if (perestanovka(urna, n))
           ans++;
   }
   cout <<"Общее количество ситуаций, когда номер хотя бы одноговынутого шарика совпадает с порядковым номером 'вынимания': "<< ans << endl;

   return 0;
}



/////////////////////////////////////////////////////////////////////////////////////////////////////
//									Block №5!                                                      //
/////////////////////////////////////////////////////////////////////////////////////////////////////


////5.1(Общий)
//#include <iostream>
//
//using namespace std;
//
//void vichit()
//{
//	cout << "Второй способ"<<endl;
//	cout << "Вычитание: "<<endl;
//	int a, b;
//	cout << "Введите первое число: ";
//	cin >> a;
//	cout << "Введите второе число: ";
//	cin >> b;
//	while (a != b) {
//		if (a > b) {
//			a = a - b;
//		}
//		else {
//			b = b - a;
//		}
//	}
//	cout << "НОД: " << a << endl;
//}
//void delenie()
//{
//	cout << "Первый способ"<<endl;
//	cout << "Деление: "<<endl;
//	int a, b;
//	cout << "Введите первое число: ";
//	cin >> a;
//	cout << "Введите второе число: ";
//	cin >> b;
//	while (a != 0 && b != 0) {
//		if (a > b) {
//			a = a % b;
//	}
//		else {
//			b = b % a;
//		}
//	}
//cout << "НОД: " << a + b << endl;
//	
//}
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int c = 0;
//	
//	cout << "1 - Деление" << endl;
//	cout << "2 - Вычитание" << endl;
//	cout << "Выберите способ нахожднение НОД: ";
//	cin >> c;
//	if (c == 1) {
//		delenie();
//	}
//	else if (c == 2) {
//		vichit();
//	}
//	else {
//		cout << "Ошибка!"<<endl;
//	}
//
//
//}

// //5.2
// #include <iostream>
// #include <cmath>

// using namespace std;

// bool IsPrime(int N) {
// 	for (int i = 2; i <= sqrt(N); i++)
// 		if (N % i == 0)
// 			return false;
// 	if (N < 2)
// 		return false;
// 	return true;
// }

// int main()
// {
// 	setlocale(LC_ALL, "Rus");
// 	int a, b;
// 	a = 2;
// 	cout << "Введите число: ";
// 	cin >> b;
// 	cout << "Простые числа от 2 до " << b << ": ";
// 	for (int i = a; i <= b; i++) {
// 		if (IsPrime(i))
// 			cout << i << endl;

//     }
// }


////5.3



////5.4
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string reverse(string const& s)
//{
//    string rev;
//    for (int i = s.size() - 1; i >= 0; i--) {
//        rev = rev.append(1, s[i]);
//    };
//
//    return rev;
//}
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    int n;
//    int c;
//    string a="";
//    cout << "Введите количество чисел в массиве: ";
//    cin >> n;
//    int* F = new int[n];
//    int* F1 = new int[n];
//    for (int i = 0; i < n; i++) {
//        cout << i + 1 << ") ";
//        cin >> F[i];
//    }
//    for (int i = 0; i < n; i++) {
//        cout << F[i] << " ";
//    }
//    cout << endl;
//    for (int i = 0; i < n; i++) {
//        while (F[i] > 0)
//        {
//            c = F[i] % 3;
//            F[i] /= 3;
//            a += to_string(c);
//        }
//        a = reverse(a);
//        int s = stoi(a);
//        F1[i] = s;
//        a = "";
//    }
//    for (int i = 0; i < n; i++) {
//        cout << F1[i] << " ";
//    }
//}


// //5.5
// #include <iostream>
// #include <fstream>


// using namespace std;

// int main()
// {
// 	ofstream Itog("Itog_Olimp.txt");
// 	Itog << "";
// 	setlocale(LC_ALL, "Rus");
// 	int klvB[10] =
// 	{ 0,0,0,0,0,0,0,0,0,0 };
// 	int klvS[10] =
// 	{ 0,0,0,0,0,0,0,0,0,0 };
// 	int klvZ[10] =
// 	{ 0,0,0,0,0,0,0,0,0,0 };
// 	int score[10] =
// 	{ 0,0,0,0,0,0,0,0,0,0 };
// 	string countries[10] =
// 	{ "Австрии","Германии","Канады","Китая","Кореи","Норвегии","России","США","Финляндии","Японии" };
// 	for (int i = 0; i < 10; i++)
// 	{
// 		cout << "Количество бронзовых медалей у " << countries[i] << ": ";
// 		cin >> klvB[i];
// 		score[i] = score[i] + klvB[i] * 5;
// 		cout << "Количество серебряных медалей у " << countries[i] << ": ";
// 		cin >> klvS[i];
// 		score[i] = score[i] + klvS[i] * 6;
// 		cout << "Количество золотых медалей у " << countries[i] << ": ";
// 		cin >> klvZ[i];
// 		score[i] = score[i] + klvZ[i] * 7;
// 		cout << endl;

// 	}
	
// 	for (int i = 0; i < 10; i++)
// 	{
// 		Itog << "Очки " << countries[i] << ": " << score[i] << endl;
// 		Itog << "Общее количество медалей " << countries[i] << ": " << klvB[i] + klvS[i] + klvZ[i] << endl;
// 		Itog << endl;
// 	}
// 	return 0;
// }


// //3.5
// #include <iostream>
// #include <algorithm>
// #include <cmath>
// using namespace std;
 
// // Функция для выполнения сортировки вставками в подмассиве `a[low…high]`
// void insertionsort(int a[], int low, int high)
// {
//     // начинаем со второго элемента подмассива
//     // (элемент с индексом `low` уже отсортирован)
//     for (int i = low + 1; i <= high; i++)
//     {
//         int value = a[i];
//         int j = i;
 
//         // найти индекс `j` в отсортированном подмножестве a[0…i-1]
//         // где находится элемент a[i]
//         while (j > low && a[j - 1] > value)
//         {
//             a[j] = a[j - 1];
//             j--;
//         }
 
//         // Обратите внимание, что подмассив `a[j…i-1]` сдвинут на
//         // вправо на одну позицию, т.е. `a[j+1…i]`
 
//         a[j] = value;
//     }
// }
 
// // Функция для разбиения массива по схеме разбиения Lomuto
// int partition(int a[], int low, int high)
// {
//     // Выбираем крайний правый элемент в качестве опорного элемента массива
//     int pivot = a[high];
 
//     // элементы, меньшие точки поворота, будут перемещены влево от `pIndex`
//     // элементы больше, чем точка поворота, будут сдвинуты вправо от `pIndex`
//     // равные элементы могут идти в любом направлении
//     int pIndex = low;
 
//     // каждый раз, когда мы находим элемент, меньший или равный опорному, `pIndex`
//     // увеличивается, и этот элемент будет помещен перед опорной точкой.
//     for (int i = low; i < high; i++)
//     {
//         if (a[i] <= pivot)
//         {
//             swap(a[i], a[pIndex]);
//             pIndex++;
//         }
//     }
 
//     // поменять местами `pIndex` с пивотом
//     swap (a[pIndex], a[high]);
 
//     // вернуть `pIndex` (индекс опорного элемента)
//     return pIndex;
// }
 
// // Быстрая сортировка рандомизированного раздела для перестановки элементов по оси
// int randPartition(int a[], int low, int high)
// {
//     // выбираем случайный индекс между `[low, high]`
//     int pivotIndex = rand() % (high - low + 1) + low;
 
//     // поменять местами конечный элемент с элементом, имеющим случайный индекс
//     swap(a[pivotIndex], a[high]);
 
//     // вызов процедуры разделения
//     return partition(a, low, high);
// }
 
// // Функция для выполнения пирамидальной сортировки заданного диапазона элементов
// void heapsort(int *begin, int *end)
// {
//     make_heap(begin, end);
//     sort_heap(begin, end);
// }
 
// // Функция для выполнения начальной сортировки заданного массива
// void introsort(int a[], int *begin, int *end, int maxdepth)
// {
//     // выполняем сортировку вставками, если размер раздела 16 или меньше
//     if ((end - begin) < 16) {
//         insertionsort(a, begin - a, end - a);
//     }
//     // выполнить пирамидальную сортировку, если максимальная глубина равна 0
//     else if (maxdepth == 0) {
//         heapsort(begin, end + 1);
//     }
//     else {
//         // иначе выполняем быструю сортировку
//         int pivot = randPartition(a, begin - a, end - a);
//         introsort(a, begin, a + pivot - 1, maxdepth - 1);
//         introsort(a, a + pivot + 1, end, maxdepth - 1);
//     }
// }
 
// int main()
// {
//     int a[] = { 5, 7, -8, 9, 10, 4, -7, 0, -12, 1, 6, 2, 3, -4, -15, 12 };
//     int n = sizeof(a) / sizeof(a[0]);
 
//     // получаем максимальную глубину
//     int maxdepth = log(n) * 2;
 
//     // сортируем массив, используя алгоритм introsort
//     introsort(a, a, a + n - 1, maxdepth);
 
//     // печатаем отсортированный массив
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
 
//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////Быки и Коровы//////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <stdlib.h>

// using namespace std;

// void func (const int &number){
//     int bik, korova, input;
//     do{
//         cin >> input;
//         bik = korova = 0;
 
//         for(int i = 1000; i != 0; i/= 10){
//             if( (input / i % 10)==(number / i % 10))
//             bik++;
//         }
//         for(int i = 1000; i != 0; i/= 10){
//             for(int j = 1000; j != 0; j/= 10)
//             {
//                 if(i != j && (input / i % 10)==(number / j % 10))
//                 korova++;
//             }
//         }
//         cout << "Количество плюсов: " << bik << "||" << " Количество минусов: " << korova << endl;
 
//     }while (bik < 4);
 
// }
// int main()
// {
// 	setlocale(LC_ALL,"Rus");
//     srand(time(NULL));
//     bool bmap[10];
//     cout<<"Введите число состоящее из 4 цифр: ";
//     for(int i = 0; i != 10; i++) bmap[i] = true;
//     int n, number = 0;
//     for(int i = 1; i != 10000; i*= 10)
//     {
//         do{
//             n=1+ rand()%9;
//         }while(bmap[n]== false);
//         bmap[n]=false;
//         number += i * n;
//     }
//     //cout << number << endl;
 
 
//     func(number);
 
 
//     return 0;
// }



///////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////Монахи/////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////


// #include <iostream>
// #include <stdio.h>
// #include <time.h>

// using namespace std;

// int monks[600][4];
// int cnt = -1;
// int chs = 100;
// int klv = 0;
// int a = 0;
// int b = 0;
// bool trig = false;
// bool trig1 = false;
// bool trig2 = false;
// bool trig3 = false;
// bool megatrig = false;
// int teachers[600];
// int teachers1[600];
// int cnt1 = -1;
// int cnt2 = -1;
// main(){
//     setlocale(LC_ALL, "Russian");
//     while (chs != 0) {
//     cnt++;
//     cout << "Введите информацию о монахах в одну строку(номера монахов от 1 до 600, 1й Святой Павел):\n";
//     cin >> monks[cnt][0];
//     cin >> monks[cnt][1];
//     cin >> monks[cnt][2];
//     cin >> monks[cnt][3];
//     cout << "Для выхода введите 0. Если хотите задать еще одну строчку введите 1:\n";
//     cin >> chs;
//     }
//     cnt = -1;
//     cout << "введите сколько будет монахов:\n";
//     cin >> klv;
//     if (klv == 1) {
//         cout << "введите номер монаха:\n";
//         cin >> a;
//     }
//     else if (klv == 2) {
//         cout << "введите номера монахов:\n";
//         cin >> a;
//         cin >> b;
//     }
//     if (klv == 1) {
//         while (a != 1) {
//             trig = false;
//             for (int q = 0; q < 600; q++) {
//                 if (trig == true) {
//                     break;
//                 }
//                 else {
//                     for (int j = 0; j < 4; j++) {
//                         if ((monks[q][j] == a) && (monks[q][0] != a)) {
//                             cout << a << " - монах, его учитель: " << monks[q][0] << ";\n"; //ищем учителя вплоть до первого
//                             a = monks[q][0];
//                             trig = true;
//                         }
//                     }
//                 }
//             }
//             if (trig==false) {
//                 cout<< a << " - не монах\n";
//                 a = 1;
//             }
//         //system("pause");
//         }
//     }

//     else if (klv == 2) {

//         while (a != 1) {
//             trig1 = false;
//             for (int q = 0; q < 600; q++) {
//                 if (trig1 == true) {
//                     break;
//                 }
//                 else {
//                     for (int j = 0; j < 4; j++) {
//                         if ((monks[q][j] == a) && (monks[q][0] != a)) {
//                             //cout « a « " - монах, его учитель: " « monks[q][0] « ";" « endl; //ищем учителей у a
//                             cnt1++;
//                             a = monks[q][0];
//                             teachers[cnt1] = a;
//                             trig1 = true;
//                         }
//                     }
//                 }
//             }
//             if (trig1 == false) {
//                 cout << a << " - не монах\n";
//                 cout << "номер " << a << " не монах. невозможно найти общего учителя!\n";
//                 megatrig = true;
//                 a = 1;
//                 b = 1;
//             }
//         }

//         while (b != 1) {
//             trig2 = false;
//             for (int q = 0; q < 600; q++) {
//                 if (trig2 == true) {
//                     break;
//                 }
//                 else {
//                     for (int j = 0; j < 4; j++) {
//                         if ((monks[q][j] == b) && (monks[q][0] != b)) {
//                             //cout « b « " - монах, его учитель: " « monks[q][0] « ";" « endl; //ищем учителей у b
//                             cnt2++;
//                             teachers1[cnt2] = b;
//                             b = monks[q][0];
//                             trig2 = true;
//                         }
//                     }
//                 }
//             }
//             if (trig2==false) {
//                 cout << b << " - не монах\n";
//                 cout << "номер " << b << " не монах. невозможно найти общего учителя!\n";
//                 megatrig = true;
//                 a = 1;
//                 b = 1;
//             }
//         }

//         if (megatrig==false) {
//             for (int l = 0; l < 600; l++) {
//                 if (trig3 == true) {
//                     break;
//                 }
//                 for (int p = 0; p < 600; p++) {
//                     if (teachers[l] == teachers1[p]) {
//                         cout << "ближайший общий учитель введенных монахов: " << teachers1[p] << endl; //ищем ближайщего общего учителя
//                         trig3 = true;
//                         break;
//                     }
//                 }
//             }
//         }
//     }
// }

///////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////Башни//////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

// #include <stdlib.h>
// #include <iostream>

// using namespace std;

// int nopr = 0;
// int n=0;


// void put(int from, int to) 
// {
//     cout << from << " => " << to << " | ";
//     if (0 == (++nopr % 5)) cout << endl;
// }

// void move(int from, int to, int n)  
// {
//     int temp = from ^ to;
//     if (1 == n) put(from, to);
//     else {
//         move(from, temp, n - 1);
//         put(from, to);
//         move(temp, to, n - 1);
//     }
// }

// int main(int argc, char** argv, char** envp)
// {
//     setlocale(LC_ALL, "Rus");
//     cout << "Введите количество колечек n:\n";
//     cin >> n;
//     if (argc > 1 && atoi(argv[1]) != 0)
//     n = atoi(argv[1]);
//     cout << "Размер пирамиды: " << n << endl;
//     move(1, 3, n);
//     if (0 != (nopr % 5)) cout << endl;
//     cout << "Общее число перемещений " << nopr << endl;
//     if(n>=10)
//         cout<<"КОНЕЦ СВЕТА!!!";
//     return 0;
// }