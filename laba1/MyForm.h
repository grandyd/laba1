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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(12, 235);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Решение";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(639, 401);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(57, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(331, 66);
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
			this->groupBox1->Location = System::Drawing::Point(727, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(359, 230);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1181, 648);
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

	this->chart1->Series["Решение"]->Points->Clear();

	double x = 0;
	double v = System::Convert::ToDouble(textBoxU0->Text);
	double vkr = v;
	double h = System::Convert::ToDouble(textBoxH->Text);
	double Epsilon = System::Convert::ToDouble(textBoxEpsilon->Text);
	int N = System::Convert::ToInt32(textBoxN->Text);

	if (!checkBox1->Checked)
	{
		for (int i = 0; i < N; i++)
		{
			chart1->Series["Решение"]->Points->AddXY(x, v);
			x = nextX(x, h);
			v = nextV(x, v, h);
		}
	}
	else
	{
		double modS = 0;
		for (int i = 0; i < N; i++)
		{
			modS = mods(x, v, h);
			if (modS<Epsilon)
			{
				h = 2*h;
				//if (maxH < h)
				//{
				//	maxH = h;
				//}
				//counterU++;
			}
			else if (modS > Epsilon)
			{
				double prevX=x,prevV=v;
				h /= 2;
				//if (minH > h)
				//{
				//	minH = h;
				//}
				//counterL++;
				vkr = vkrNext(prevX, prevV, h);
				x = nextX(prevX, h);
				v = nextV(prevX, prevV, h);
				//en = pow(2, 3) * (vkr - prevV) / (pow(2, 3) - 1) * pow(2, 3);
			}


			chart1->Series["Решение"]->Points->AddXY(x, v);


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
