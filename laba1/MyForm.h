#pragma once
#include "solution.cpp"
#include <utility>


namespace laba1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ labelU0;
	private: System::Windows::Forms::TextBox^ textBoxEpsilon;

	private: System::Windows::Forms::Label^ labelEpsilon;

	private: System::Windows::Forms::TextBox^ textBoxN;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxH;

	private: System::Windows::Forms::Label^ labelH;

	private: System::Windows::Forms::TextBox^ textBoxU0;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ ColumnHeader1;

	private: System::Windows::Forms::ColumnHeader^ Xi;
	private: System::Windows::Forms::ColumnHeader^ Vi;
	private: System::Windows::Forms::ColumnHeader^ V2i;
	private: System::Windows::Forms::ColumnHeader^ viMINUSv2i;
	private: System::Windows::Forms::ColumnHeader^ ОЛП;
	private: System::Windows::Forms::ColumnHeader^ hi;
	private: System::Windows::Forms::ColumnHeader^ C1;
	private: System::Windows::Forms::ColumnHeader^ C2;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ labelmaxx;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ labelmaxh;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ labelOLP;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ labelB;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labeln;

	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Label^ labelminhx;

	private: System::Windows::Forms::Label^ labelminh;



	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBoxX0;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxB;
	private: System::Windows::Forms::Label^ label4;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxX0 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxEpsilon = (gcnew System::Windows::Forms::TextBox());
			this->labelEpsilon = (gcnew System::Windows::Forms::Label());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxH = (gcnew System::Windows::Forms::TextBox());
			this->labelH = (gcnew System::Windows::Forms::Label());
			this->textBoxU0 = (gcnew System::Windows::Forms::TextBox());
			this->labelU0 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->ColumnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->Xi = (gcnew System::Windows::Forms::ColumnHeader());
			this->Vi = (gcnew System::Windows::Forms::ColumnHeader());
			this->V2i = (gcnew System::Windows::Forms::ColumnHeader());
			this->viMINUSv2i = (gcnew System::Windows::Forms::ColumnHeader());
			this->ОЛП = (gcnew System::Windows::Forms::ColumnHeader());
			this->hi = (gcnew System::Windows::Forms::ColumnHeader());
			this->C1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->C2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->labelminhx = (gcnew System::Windows::Forms::Label());
			this->labelminh = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->labelmaxx = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->labelmaxh = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->labelOLP = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labeln = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 235);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Численное решение";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Истинное решение";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(515, 401);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(379, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 168);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxB);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBoxX0);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->textBoxEpsilon);
			this->groupBox1->Controls->Add(this->labelEpsilon);
			this->groupBox1->Controls->Add(this->textBoxN);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBoxH);
			this->groupBox1->Controls->Add(this->labelH);
			this->groupBox1->Controls->Add(this->textBoxU0);
			this->groupBox1->Controls->Add(this->labelU0);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(349, 168);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Задай меня";
			// 
			// textBoxX0
			// 
			this->textBoxX0->Location = System::Drawing::Point(39, 129);
			this->textBoxX0->Name = L"textBoxX0";
			this->textBoxX0->Size = System::Drawing::Size(118, 20);
			this->textBoxX0->TabIndex = 9;
			this->textBoxX0->Text = L"-3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"X0=";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(163, 106);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(156, 17);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"Учитывать погрешность\?";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// textBoxEpsilon
			// 
			this->textBoxEpsilon->Location = System::Drawing::Point(39, 103);
			this->textBoxEpsilon->Name = L"textBoxEpsilon";
			this->textBoxEpsilon->Size = System::Drawing::Size(118, 20);
			this->textBoxEpsilon->TabIndex = 7;
			this->textBoxEpsilon->Text = L"0,000001";
			// 
			// labelEpsilon
			// 
			this->labelEpsilon->AutoSize = true;
			this->labelEpsilon->Location = System::Drawing::Point(6, 106);
			this->labelEpsilon->Name = L"labelEpsilon";
			this->labelEpsilon->Size = System::Drawing::Size(20, 13);
			this->labelEpsilon->TabIndex = 6;
			this->labelEpsilon->Text = L"E=";
			// 
			// textBoxN
			// 
			this->textBoxN->Location = System::Drawing::Point(39, 77);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(118, 20);
			this->textBoxN->TabIndex = 5;
			this->textBoxN->Text = L"1000";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"N=";
			// 
			// textBoxH
			// 
			this->textBoxH->Location = System::Drawing::Point(39, 51);
			this->textBoxH->Name = L"textBoxH";
			this->textBoxH->Size = System::Drawing::Size(118, 20);
			this->textBoxH->TabIndex = 3;
			this->textBoxH->Text = L"0,0001";
			// 
			// labelH
			// 
			this->labelH->AutoSize = true;
			this->labelH->Location = System::Drawing::Point(6, 54);
			this->labelH->Name = L"labelH";
			this->labelH->Size = System::Drawing::Size(19, 13);
			this->labelH->TabIndex = 2;
			this->labelH->Text = L"h=";
			// 
			// textBoxU0
			// 
			this->textBoxU0->Location = System::Drawing::Point(39, 25);
			this->textBoxU0->Name = L"textBoxU0";
			this->textBoxU0->Size = System::Drawing::Size(118, 20);
			this->textBoxU0->TabIndex = 1;
			this->textBoxU0->Text = L"1";
			// 
			// labelU0
			// 
			this->labelU0->AutoSize = true;
			this->labelU0->Location = System::Drawing::Point(6, 28);
			this->labelU0->Name = L"labelU0";
			this->labelU0->Size = System::Drawing::Size(27, 13);
			this->labelU0->TabIndex = 0;
			this->labelU0->Text = L"U0=";
			this->labelU0->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {
				this->ColumnHeader1, this->Xi,
					this->Vi, this->V2i, this->viMINUSv2i, this->ОЛП, this->hi, this->C1, this->C2
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(533, 335);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(645, 213);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// ColumnHeader1
			// 
			this->ColumnHeader1->Text = L"i";
			this->ColumnHeader1->Width = 31;
			// 
			// Xi
			// 
			this->Xi->Text = L"Xi";
			// 
			// Vi
			// 
			this->Vi->Text = L"Vi";
			// 
			// V2i
			// 
			this->V2i->Text = L"V2i";
			// 
			// viMINUSv2i
			// 
			this->viMINUSv2i->Text = L"vi-v2i";
			// 
			// ОЛП
			// 
			this->ОЛП->Text = L"ОЛП";
			// 
			// hi
			// 
			this->hi->Text = L"hi";
			// 
			// C1
			// 
			this->C1->Text = L"C1";
			// 
			// C2
			// 
			this->C2->Text = L"C2";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labelminhx);
			this->groupBox2->Controls->Add(this->labelminh);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->labelmaxx);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->labelmaxh);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->labelOLP);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->labelB);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->labeln);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(615, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(528, 255);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Справка";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// labelminhx
			// 
			this->labelminhx->AutoSize = true;
			this->labelminhx->Location = System::Drawing::Point(73, 102);
			this->labelminhx->MaximumSize = System::Drawing::Size(350, 0);
			this->labelminhx->Name = L"labelminhx";
			this->labelminhx->Size = System::Drawing::Size(0, 13);
			this->labelminhx->TabIndex = 15;
			// 
			// labelminh
			// 
			this->labelminh->AutoSize = true;
			this->labelminh->Location = System::Drawing::Point(73, 89);
			this->labelminh->MaximumSize = System::Drawing::Size(350, 0);
			this->labelminh->Name = L"labelminh";
			this->labelminh->Size = System::Drawing::Size(0, 13);
			this->labelminh->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 102);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(18, 13);
			this->label12->TabIndex = 11;
			this->label12->Text = L"x=";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 89);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 13);
			this->label13->TabIndex = 10;
			this->label13->Text = L"min hi=";
			// 
			// labelmaxx
			// 
			this->labelmaxx->AutoSize = true;
			this->labelmaxx->Location = System::Drawing::Point(73, 76);
			this->labelmaxx->MaximumSize = System::Drawing::Size(350, 0);
			this->labelmaxx->Name = L"labelmaxx";
			this->labelmaxx->Size = System::Drawing::Size(0, 13);
			this->labelmaxx->TabIndex = 9;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 76);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(18, 13);
			this->label11->TabIndex = 8;
			this->label11->Text = L"x=";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// labelmaxh
			// 
			this->labelmaxh->AutoSize = true;
			this->labelmaxh->Location = System::Drawing::Point(73, 63);
			this->labelmaxh->MaximumSize = System::Drawing::Size(350, 0);
			this->labelmaxh->Name = L"labelmaxh";
			this->labelmaxh->Size = System::Drawing::Size(0, 13);
			this->labelmaxh->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 63);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"max hi=";
			// 
			// labelOLP
			// 
			this->labelOLP->AutoSize = true;
			this->labelOLP->Location = System::Drawing::Point(73, 50);
			this->labelOLP->MaximumSize = System::Drawing::Size(350, 0);
			this->labelOLP->Name = L"labelOLP";
			this->labelOLP->Size = System::Drawing::Size(0, 13);
			this->labelOLP->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 50);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"max|ОЛП|=";
			// 
			// labelB
			// 
			this->labelB->AutoSize = true;
			this->labelB->Location = System::Drawing::Point(73, 37);
			this->labelB->MaximumSize = System::Drawing::Size(350, 0);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(0, 13);
			this->labelB->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"b-Xn=";
			// 
			// labeln
			// 
			this->labeln->AutoSize = true;
			this->labeln->Location = System::Drawing::Point(73, 24);
			this->labeln->MaximumSize = System::Drawing::Size(350, 0);
			this->labeln->Name = L"labeln";
			this->labeln->Size = System::Drawing::Size(0, 13);
			this->labeln->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"n=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(185, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"b=";
			// 
			// textBoxB
			// 
			this->textBoxB->Location = System::Drawing::Point(210, 25);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(118, 20);
			this->textBoxB->TabIndex = 11;
			this->textBoxB->Text = L"10000";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1181, 648);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   double mods(double x, double v, double h)
		   {
			   double x12, v12;
			   x12 = nextX(x, h / 2);
			   v12 = nextV(x, v, h / 2);
			   double v1kr = nextV(x12, v12, h / 2);
			   double v1 = nextV(x, v, h);
			   double s = (v1kr - v1) / (pow(2, 3) - 1);
			   return abs(s);
		   }



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->chart1->Series["Численное решение"]->Points->Clear();
	this->chart1->Series["Истинное решение"]->Points->Clear();
	this->listView1->Items->Clear();


	double maxx=0;
	double minx=0;
	double maxux=0;

	double maxUV = -1;
	double x = System::Convert::ToDouble(textBoxX0->Text);
	double maxOLP = 0;
	int CounterL = 0;
	int CounterU = 0;
	double b = System::Convert::ToDouble(textBoxB->Text);
	double v = System::Convert::ToDouble(textBoxU0->Text);
	double vkr = v;
	double h = System::Convert::ToDouble(textBoxH->Text);
	double Epsilon = System::Convert::ToDouble(textBoxEpsilon->Text);
	int N = System::Convert::ToInt32(textBoxN->Text);
	double en = 0;
	double u0 = 0;
	double maxH = h, minH = h;

	array<String^>^ ms = gcnew array< System::String^ >(9);
	double prevX = x, prevV = v;
	int i = 0;

	
	if (!checkBox1->Checked)
	{

		for (i; i < N || x>b; i++)
		{
			ms[0] = i.ToString();
			ms[1] = x.ToString();
			ms[2] = v.ToString();
			ms[3] = vkr.ToString();
			ms[4] = (v-vkr).ToString();
			ms[5] = en.ToString();
			ms[6] = h.ToString();
			ms[7] = CounterL.ToString();
			ms[8] = CounterU.ToString();
			ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
			listView1->Items->Add(listViewItem0);



			if (maxUV<abs(u0-v))
			{
				maxUV = abs((u0 - v));
				maxux = x;
			}
			chart1->Series["Численное решение"]->Points->AddXY(x, v);
			en = pow(2, 4) * (vkr - v) / (pow(2, 4) - 1) * pow(2, 4);
			if (maxOLP<abs(en))
			{
				maxOLP = abs(en);
			}
			prevX = x;
			x = nextX(x, h);
			v = nextV(x, v, h);
			
		}
	}
	else
	{
		double modS = 0;
		
		for (i ; i < N; i++)
		{
			if (x>=b)
			{
				break;
			}

			ms[0] = i.ToString();
			ms[1] = x.ToString();
			ms[2] = v.ToString();
			ms[3] = vkr.ToString();
			ms[4] = (v - vkr).ToString();
			ms[5] = en.ToString();
			ms[6] = h.ToString();
			ms[7] = CounterL.ToString();
			ms[8] = CounterU.ToString();
			ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
			listView1->Items->Add(listViewItem0);
			modS = mods(x, v, h);
			if (modS<Epsilon)
			{
				h = 2*h;
				if (maxH < h)
				{
					maxH = h;
					maxx = x;
				}
				CounterU++;
			}
			else if (modS > Epsilon)
			{
				
				h /= 2;
				if (minH > h)
				{
					minH = h;
					minx = x;
				}
				CounterL++;
				en = pow(2, 4) * (vkr - v) / (pow(2, 4) - 1) * pow(2, 4);
				vkr = vkrNext(prevX, prevV, h);
				x = nextX(prevX, h);
				v = nextV(prevX, prevV, h);
			}

			if (maxOLP < abs(en))
			{
				maxOLP = abs(en);
			}
			if (maxUV < abs(u0 - v))
			{
				maxUV = abs((u0 - v));
				maxux = x;
			}
			//MessageBox::Show((vkr - v).ToString());
			chart1->Series["Численное решение"]->Points->AddXY(x, v);

			prevX = x, prevV = v;
			x = nextX(x, h);
			v = nextV(x, v, h);
		}
		
	}
	
	labeln->Text = i.ToString();
	MessageBox::Show(x.ToString());
	labelB->Text = (b-prevX).ToString();
	labelOLP->Text = maxOLP.ToString();
	labelmaxh->Text = maxH.ToString();
	labelmaxx->Text = maxx.ToString();
	labelminh->Text = minH.ToString();
	labelminhx->Text = minx.ToString();


}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
