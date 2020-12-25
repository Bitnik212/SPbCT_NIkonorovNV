#pragma once
#include <iostream>
#include <mutex>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <thread>
#include <chrono>

using namespace std;



namespace Practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	protected:
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(396, 393);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(396, 406);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(396, 419);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(399, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(399, 74);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Вывод на экран";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 27);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(342, 88);
			this->textBox1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(15, 319);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(339, 124);
			this->textBox2->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(396, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(226, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Количество букв ( A ) в первом фрагменте:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(633, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(396, 163);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(231, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Количество букв ( A ) во втором фрагменте:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(396, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(230, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Количество букв ( A ) в третьем фрагменте:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(396, 189);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(241, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Количество букв ( A ) в четвертом фрагменте:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(396, 202);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(219, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Количество букв ( A ) в пятом фрагменте:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(396, 215);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(227, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Количество букв ( A ) в шестом фрагменте:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(396, 228);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(234, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Количество букв ( A ) в седьмом фрагменте:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(396, 241);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(234, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Количество букв ( A ) в восьмом фрагменте:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(396, 254);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(231, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Количество букв ( A ) в девятом фрагменте:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(396, 267);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(231, 13);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Количество букв ( A ) в десятом фрагменте:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(633, 163);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"label15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(633, 176);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(633, 189);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 25;
			this->label17->Text = L"label17";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(633, 202);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 26;
			this->label18->Text = L"label18";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(633, 215);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 13);
			this->label19->TabIndex = 27;
			this->label19->Text = L"label19";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(633, 228);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 13);
			this->label20->TabIndex = 28;
			this->label20->Text = L"label20";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(633, 241);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 13);
			this->label21->TabIndex = 29;
			this->label21->Text = L"label21";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(633, 254);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(41, 13);
			this->label22->TabIndex = 30;
			this->label22->Text = L"label22";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(633, 267);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(41, 13);
			this->label23->TabIndex = 31;
			this->label23->Text = L"label23";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 141);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(342, 143);
			this->textBox3->TabIndex = 32;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(12, 294);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(88, 13);
			this->label24->TabIndex = 33;
			this->label24->Text = L"Без сортировки";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(12, 125);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(67, 13);
			this->label25->TabIndex = 34;
			this->label25->Text = L"Сортировка";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(9, 9);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(144, 13);
			this->label26->TabIndex = 35;
			this->label26->Text = L"Исходный набор символов";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 455);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//template<typename T>
		void writeTo(const std::string& filepath, const  vector<char>& data)
		{

			ofstream filestream("bukv2.txt", ios::app);
			copy(data.begin(), data.end(), std::ostream_iterator<char>(filestream, " "));
			filestream.close();

		} // Создание функции вывода вектора в файл
		//template<typename T1>
		void writeTo1(const std::string& filepath, const  vector<char>& data)
		{

			ofstream filestream("bukv2.txt", ios::app);
			filestream << "\n";
			filestream.close();

		} // Создание (функции) отступа между строками
		//template<typename T2>
		void writeTo2(const std::string& filepath, const  vector<char>& data)
		{

			ofstream filestream("bukv3.txt", ios::app);
			copy(data.begin(), data.end(), std::ostream_iterator<char>(filestream, " "));
			filestream.close();

		} // Функция вывода вектора в другой файл
		//template<typename T3>
		void writeTo4(const std::string& filepath, const  vector<char>& data)
		{

			ofstream filestream("bukv3.txt", ios::app);
			filestream << "\n";
			filestream.close();

		} // Создание отступа (пропуска строки) после каждой группы букв, состоящих из 10 символов
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		char test_symbol = 'a'; // Создание переменной, для дальнейшего сравнения с другими символами
		

		vector<char> kit; // Объявление вектора
		int kol_a1 = 0; // Создание переменной, для подсчета количества букв
		char str[256];
		cout << "Enter the name of an existing text file: ";
		cin.get(str, 256); // get c-string
		ifstream is("bukv.txt"); // Осуществляется открытие файла
		is.seekg(0, ios::beg); // Определение символа, при помощи которого, будет осуществляться считывание
		char c;
		int i = 0;
		while (is.get(c) && i < 10) { // Реализуется считывание 10 букв
			i++;
			kit.push_back(c); // Считывание 10 букв
			if (c == test_symbol) // Реализация функции, для сравнения символов
			{
				kol_a1++; // Заполнение счетчика совпавших символов
			}
		}

		is.close(); // Закрытие файла
		copy(kit.begin(), kit.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
	
		writeTo("bukv2.txt", kit); // Вывод вектора в файл
		label5->Text = kol_a1.ToString(); // Вывод значения переменной (kol_a1) в lebel
		writeTo1("bukv2.txt", kit); // Отступ между строками
		sort(kit.begin(), kit.end()); // Сортировка по алфавиту (в порядке возрастания)

		vector <char> kit2; // Объявление вектора
		int kol_a2 = 0; // Создание переменной, для подсчета количества букв
		char str1[256];
		cin.get(str1, 256); // get c-string
		ifstream is1("bukv.txt"); // Осуществляется открытие файла
		is1.seekg(10, ios::beg); // Определение символа, при помощи которого, будет осуществляться считывание
		char g;
		int i1 = 0;
		while (is1.get(g) && i1 < 10) { // Реализуется считывание 10 букв
			i1++;
			kit2.push_back(g); // Считывание 10 букв
			if (g == test_symbol) // Реализация функции, для сравнения символов
			{
				kol_a2++; // Заполнение счетчика совпавших символов
			}
		}

		is1.close(); // Закрытие файла
		copy(kit2.begin(), kit2.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit2); // Вывод вектора в файл
		label15->Text = kol_a2.ToString(); // Вывод значения переменной (kol_a2) в lebel
		writeTo1("bukv2.txt", kit2); // Отступ между строками
		sort(kit2.begin(), kit2.end()); // Сортировка по алфавиту (в порядке возрастания)


		vector <char> kit3; // Объявление вектора
		int kol_a3 = 0; // Создание переменной, для подсчета количества букв
		char str2[256];
		cin.get(str2, 256); // get c-string
		ifstream is2("bukv.txt"); // Осуществляется открытие файла
		is2.seekg(20, ios::beg); // Определение символа, при помощи которого, будет осуществляться считывание
		char g1;
		int i2 = 0;
		while (is2.get(g1) && i2 < 10) {  // Реализуется считывание 10 букв
			i2++;
			kit3.push_back(g1); // Считывание 10 букв
			if (g1 == test_symbol) // Реализация функции, для сравнения символов
			{
				kol_a3++; // Заполнение счетчика совпавших символов
			}
		}

		is2.close(); // Закрытие файла
		copy(kit3.begin(), kit3.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit3); // Вывод вектора в файл
		label16->Text = kol_a3.ToString(); // Вывод значения переменной (kol_a3) в lebel
		writeTo1("bukv2.txt", kit3); // Отступ между строками
		sort(kit3.begin(), kit3.end()); // Сортировка по алфавиту (в порядке возрастания)


		vector <char> kit4; // Объявление вектора
		int kol_a4 = 0; // Создание переменной, для подсчета количества букв
		char str3[256];
		cin.get(str3, 256); // get c-string
		ifstream is3("bukv.txt"); // Осуществляется открытие файла
		is1.seekg(30, ios::beg); // Определение символа, при помощи которого, будет осуществляться считывание
		char g2;
		int i3 = 0;
		while (is3.get(g2) && i3 < 10) { // Реализуется считывание 10 букв
			i3++;
			kit4.push_back(g2); // Считывание 10 букв
			if (g2 == test_symbol) // Реализация функции, для сравнения символов
			{
				kol_a4++; // Заполнение счетчика совпавших символов
			}
		}

		is3.close(); // Закрытие файла
		copy(kit4.begin(), kit4.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit4);  // Вывод вектора в файл
		label17->Text = kol_a4.ToString(); // Вывод значения переменной (kol_a4) в lebel
		writeTo1("bukv2.txt", kit4); // Отступ между строками
		sort(kit4.begin(), kit4.end()); // Сортировка по алфавиту (в порядке возрастания)

		 
		vector <char> kit5; // Объявление вектора
		int kol_a5 = 0; // Создание переменной, для подсчета количества букв
		char str5[256];
		cin.get(str5, 256); // get c-string
		ifstream is5("bukv.txt"); // Осуществляется открытие файла
		is5.seekg(40, ios::beg); // Определение символа, при помощи которого, будет осуществляться считывание
		char g5;
		int i5 = 0;
		while (is5.get(g5) && i5 < 10) { // Реализуется считывание 10 букв
			i5++;
			kit5.push_back(g5); // Считывание 10 букв
			if (g5 == test_symbol) // Реализация функции, для сравнения символов
			{
				kol_a5++; // Заполнение счетчика совпавших символов
			}
		}

		is5.close(); // Закрытие файла
		copy(kit5.begin(), kit5.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit5); // Вывод вектора в файл
		label18->Text = kol_a5.ToString(); // Вывод значения переменной (kol_a5) в lebel
		writeTo1("bukv2.txt", kit5); // Отступ между строками
		sort(kit5.begin(), kit5.end()); // Сортировка по алфавиту (в порядке возрастания)


		vector <char> kit6; // Объявление вектора
		int kol_a6 = 0; // Создание переменной, для подсчета количества букв
		char str6[256];
		cin.get(str6, 256); // get c-string
		ifstream is6("bukv.txt"); // Осуществляется открытие файла
		is6.seekg(50, ios::beg); // Определение символа, при помощи которого, будет осуществляться считывание
		char g6;
		int i6 = 0;
		while (is6.get(g6) && i6 < 10) { // Реализуется считывание 10 букв
			i6++;
			kit6.push_back(g6); // Считывание 10 букв
			if (g6 == test_symbol) // Реализация функции, для сравнения символов
			{
				kol_a6++; // Заполнение счетчика совпавших символов
			}
		}

		is6.close(); // Закрытие файла
		copy(kit6.begin(), kit6.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit6); // Вывод вектора в файл
		label19->Text = kol_a6.ToString(); // Вывод значения переменной (kol_a6) в lebel
		writeTo1("bukv2.txt", kit6); // Отступ между строками
		sort(kit6.begin(), kit6.end()); // Сортировка по алфавиту (в порядке возрастания)


		vector <char> kit7; // Объявление вектора
		int kol_a7 = 0; // Создание переменной, для подсчета количества букв
		char str7[256];
		cin.get(str7, 256); // get c-string
		ifstream is7("bukv.txt"); // Осуществляется открытие файла
		is7.seekg(60, ios::beg); // Определение символа, при помощи которого, будет осуществляться считывание
		char g7;
		int i7 = 0;
		while (is7.get(g7) && i7 < 10) { // Реализуется считывание 10 букв
			i7++;
			kit7.push_back(g7); // Считывание 10 букв
			if (g7 == test_symbol) // Реализация функции, для сравнения символов
			{
				kol_a7++; // Заполнение счетчика совпавших символов
			}
		}

		is7.close(); // Закрытие файла
		copy(kit7.begin(), kit7.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit7); // Вывод вектора в файл
		label20->Text = kol_a7.ToString(); // Вывод значения переменной (kol_a7) в lebel
		writeTo1("bukv2.txt", kit7); // Отступ между строками
		sort(kit7.begin(), kit7.end()); // Сортировка по алфавиту (в порядке возрастания)


		vector <char> kit8; // Объявление вектора
		int kol_a8 = 0; // Создание переменной, для подсчета количества букв
		char str8[256];
		cin.get(str8, 256); // get c-string
		ifstream is8("bukv.txt"); // Осуществляется открытие файла
		is8.seekg(70, ios::beg); // Определение символа, при помощи которого, будет осуществляться считывание
		char g8;
		int i8 = 0;
		while (is8.get(g8) && i8 < 10) { // Реализуется считывание 10 букв
			i8++;
			kit8.push_back(g8); // Считывание 10 букв
			if (g8 == test_symbol) // Реализация функции, для сравнения символов
			{
				kol_a8++; // Заполнение счетчика совпавших символов
			}
		}

		is8.close(); // Закрытие файла
		copy(kit8.begin(), kit8.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit8); // Вывод вектора в файл
		label21->Text = kol_a8.ToString(); // Вывод значения переменной (kol_a8) в lebel
		writeTo1("bukv2.txt", kit8); // Отступ между строками
		sort(kit8.begin(), kit8.end()); // Сортировка по алфавиту (в порядке возрастания)


		vector <char> kit9; // Объявление вектора
		int kol_a9 = 0; // Создание переменной, для подсчета количества букв
		char str9[256];
		cin.get(str9, 256); // get c-string
		ifstream is9("bukv.txt"); // Осуществляется открытие файла
		is9.seekg(80, ios::beg); // Определение символа, при помощи которого, будет осуществляться считывание
		char g9;
		int i9 = 0;
		while (is9.get(g9) && i9 < 10) { // Реализуется считывание 10 букв
			i9++;
			kit9.push_back(g9); // Считывание 10 букв
			if (g9 == test_symbol) // Реализация функции, для сравнения символов
			{
				kol_a9++; // Заполнение счетчика совпавших символов
			}
		}

		is9.close(); // Закрытие файла
		copy(kit9.begin(), kit9.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit9); // Вывод вектора в файл
		label22->Text = kol_a9.ToString(); // Вывод значения переменной (kol_a9) в lebel
		writeTo1("bukv2.txt", kit9); // Отступ между строками
		sort(kit9.begin(), kit9.end()); // Сортировка по алфавиту (в порядке возрастания)


		vector <char> kit10; // Объявление вектора
		int kol_a10 = 0; // Создание переменной, для подсчета количества букв
		char str10[256];
		cin.get(str10, 256); // get c-string
		ifstream is10("bukv.txt"); // Осуществляется открытие файла
		is10.seekg(90, ios::beg); // Определение символа, при помощи которого, будет осуществляться считывание
		char g10;
		int i10 = 0;
		while (is10.get(g10) && i10 < 10) { // Реализуется считывание 10 букв
			i10++;
			kit10.push_back(g10); // Считывание 10 букв
			if (g10 == test_symbol) // Реализация функции, для сравнения символов
			{
				kol_a10++; // Заполнение счетчика совпавших символов
			}
		}

		is10.close(); // Закрытие файла
		copy(kit10.begin(), kit10.end(), std::ostream_iterator<char>(cout, " "));
		label23->Text = kol_a10.ToString(); // Вывод значения переменной (kol_a10) в lebel
		writeTo("bukv2.txt", kit10); // Вывод вектора в файл
		sort(kit10.begin(), kit10.end()); // Сортировка по алфавиту (в порядке возрастания)

		writeTo2("bukv3.txt", kit); // Функция вывода вектора в другой файл
		writeTo4("bukv3.txt", kit); // Создание отступа (пропуска строки) после каждой группы букв, состоящих из 10 символов
		writeTo2("bukv3.txt", kit2); // Функция вывода вектора в другой файл
		writeTo4("bukv3.txt", kit2); // Создание отступа (пропуска строки) после каждой группы букв, состоящих из 10 символов
		writeTo2("bukv3.txt", kit3); // Функция вывода вектора в другой файл
		writeTo4("bukv3.txt", kit3); // Создание отступа (пропуска строки) после каждой группы букв, состоящих из 10 символов
		writeTo2("bukv3.txt", kit4); // Функция вывода вектора в другой файл
		writeTo4("bukv3.txt", kit4); // Создание отступа (пропуска строки) после каждой группы букв, состоящих из 10 символов
		writeTo2("bukv3.txt", kit5); // Функция вывода вектора в другой файл
		writeTo4("bukv3.txt", kit5); // Создание отступа (пропуска строки) после каждой группы букв, состоящих из 10 символов
		writeTo2("bukv3.txt", kit6); // Функция вывода вектора в другой файл
		writeTo4("bukv3.txt", kit6); // Создание отступа (пропуска строки) после каждой группы букв, состоящих из 10 символов
		writeTo2("bukv3.txt", kit7); // Функция вывода вектора в другой файл
		writeTo4("bukv3.txt", kit7); // Создание отступа (пропуска строки) после каждой группы букв, состоящих из 10 символов
		writeTo2("bukv3.txt", kit8); // Функция вывода вектора в другой файл
		writeTo4("bukv3.txt", kit8); // Создание отступа (пропуска строки) после каждой группы букв, состоящих из 10 символов
		writeTo2("bukv3.txt", kit9); // Функция вывода вектора в другой файл
		writeTo4("bukv3.txt", kit9); // Создание отступа (пропуска строки) после каждой группы букв, состоящих из 10 символов
		writeTo2("bukv3.txt", kit10); // Функция вывода вектора в другой файл
		writeTo4("bukv3.txt", kit10); // Создание отступа (пропуска строки) после каждой группы букв, состоящих из 10 символов
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Filename = "bukv.txt"; // Занесли в переменную имя файла
	try
	{
		StreamReader^ file = File::OpenText(Filename); // Cчитывание файла
		textBox1->Text = file->ReadToEnd(); // Вывод файла в texbox
	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "Ошибка", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	String^ Filename1 = "bukv2.txt"; // Занесли в переменную имя файла
	try
	{
		StreamReader^ file = File::OpenText(Filename1); // Cчитывание файла
		textBox2->Text = file->ReadToEnd(); // Вывод файла в texbox
	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "Ошибка", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	String^ Filename2 = "bukv3.txt"; // Занесли в переменную имя файла
	try
	{
		StreamReader^ file = File::OpenText(Filename2); // Cчитывание файла
		textBox3->Text = file->ReadToEnd(); // Вывод файла в texbox
	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "Ошибка", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};


}
