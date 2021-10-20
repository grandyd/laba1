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
	private: System::Windows::Forms::ColumnHeader^ Ui;
	private: System::Windows::Forms::ColumnHeader^ UiMINUSVi;



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
			this->Ui = (gcnew System::Windows::Forms::ColumnHeader());
			this->UiMINUSVi = (gcnew System::Windows::Forms::ColumnHeader());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
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
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(11) {
				this->ColumnHeader1, this->Xi,
					this->Vi, this->V2i, this->viMINUSv2i, this->ОЛП, this->hi, this->C1, this->C2, this->Ui, this->UiMINUSVi
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(533, 423);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(645, 213);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// ColumnHeader1
			// 
			this->ColumnHeader1->Text = L"i";
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
			// Ui
			// 
			this->Ui->Text = L"Ui";
			// 
			// UiMINUSVi
			// 
			this->UiMINUSVi->Text = L"|Ui-Vi|";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1181, 648);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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


	double x = -3;
	int CounterL = 0;
	int CounterU = 0;
	double v = System::Convert::ToDouble(textBoxU0->Text);
	double vkr = v;
	double h = System::Convert::ToDouble(textBoxH->Text);
	double Epsilon = System::Convert::ToDouble(textBoxEpsilon->Text);
	int N = System::Convert::ToInt32(textBoxN->Text);
	double en = 0;
	double u0 = 0;

	array<String^>^ ms = gcnew array< System::String^ >(11);


	if (!checkBox1->Checked)
	{

		for (int i = 0; i < N; i++)
		{
			u0 = u(x);
			ms[0] = i.ToString();
			ms[1] = x.ToString();
			ms[2] = v.ToString();
			ms[3] = vkr.ToString();
			ms[4] = (v-vkr).ToString();
			ms[5] = en.ToString();
			ms[6] = h.ToString();
			ms[7] = CounterL.ToString();
			ms[8] = CounterU.ToString();
			ms[9] = u0.ToString();
			ms[10] = (u0-v).ToString();
			ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
			listView1->Items->Add(listViewItem0);

			chart1->Series["Численное решение"]->Points->AddXY(x, v);
			chart1->Series["Истинное решение"]->Points->AddXY(x, u0);
			en = pow(2, 4) * (vkr - v) / (pow(2, 4) - 1) * pow(2, 4);
			x = nextX(x, h);
			v = nextV(x, v, h);
			
		}
	}
	else
	{
		double modS = 0;
		for (int i = 0; i < N; i++)
		{
			u0 = u(x);
			ms[0] = i.ToString();
			ms[1] = x.ToString();
			ms[2] = v.ToString();
			ms[3] = vkr.ToString();
			ms[4] = (v - vkr).ToString();
			ms[5] = en.ToString();
			ms[6] = h.ToString();
			ms[7] = CounterL.ToString();
			ms[8] = CounterU.ToString();
			ms[9] = u0.ToString();
			ms[10] = (u0 - v).ToString();
			ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
			listView1->Items->Add(listViewItem0);
			modS = mods(x, v, h);
			if (modS<Epsilon)
			{
				h = 2*h;
				//if (maxH < h)
				//{
				//	maxH = h;
				//}
				CounterU++;
			}
			else if (modS > Epsilon)
			{
				double prevX=x,prevV=v;
				h /= 2;
				//if (minH > h)
				//{
				//	minH = h;
				//}
				CounterL++;
				en = pow(2, 4) * (vkr - v) / (pow(2, 4) - 1) * pow(2, 4);
				vkr = vkrNext(prevX, prevV, h);
				x = nextX(prevX, h);
				v = nextV(prevX, prevV, h);
			}


			chart1->Series["Численное решение"]->Points->AddXY(x, v);
			chart1->Series["Истинное решение"]->Points->AddXY(x, u(x));


			x = nextX(x, h);
			v = nextV(x, v, h);
		}
	}
	

}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
