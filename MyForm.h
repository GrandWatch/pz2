#pragma once
#include<cmath>
#include <Windows.h>
namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabPage3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox1;



	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	protected:












	protected:









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->radioButton2);
			this->tabPage3->Controls->Add(this->radioButton1);
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(724, 406);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"zavd1";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(480, 277);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 60);
			this->button2->TabIndex = 26;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(342, 277);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 60);
			this->button1->TabIndex = 25;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(116, 69);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(126, 24);
			this->radioButton2->TabIndex = 24;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(448, 69);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(126, 24);
			this->radioButton1->TabIndex = 23;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(314, 165);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 22;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(314, 102);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(149, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 20;
			this->label3->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(149, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 19;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(149, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 18;
			this->label1->Text = L"label1";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->comboBox2);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(724, 406);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"zavd4";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ma", L"ba", L"ha" });
			this->comboBox2->Location = System::Drawing::Point(231, 14);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(70, 170);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(17, 20);
			this->label11->TabIndex = 11;
			this->label11->Text = L"c";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(70, 123);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 20);
			this->label10->TabIndex = 10;
			this->label10->Text = L"b";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(70, 77);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 20);
			this->label9->TabIndex = 9;
			this->label9->Text = L"a";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(359, 77);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(164, 113);
			this->richTextBox2->TabIndex = 8;
			this->richTextBox2->Text = L"";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(221, 251);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(104, 50);
			this->button6->TabIndex = 7;
			this->button6->Text = L"clear";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(190, 164);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 26);
			this->textBox9->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(190, 117);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 26);
			this->textBox8->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(190, 71);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 26);
			this->textBox7->TabIndex = 4;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(74, 251);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(104, 50);
			this->button5->TabIndex = 3;
			this->button5->Text = L"calc";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(732, 439);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(724, 406);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"zavd3";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"pryamo", L"try", L"trap", L"colo" });
			this->comboBox1->Location = System::Drawing::Point(157, 30);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(236, 28);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(229, 236);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(229, 203);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(229, 171);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(229, 134);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 12;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(463, 74);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(209, 230);
			this->richTextBox1->TabIndex = 11;
			this->richTextBox1->Text = L"";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(71, 242);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 20);
			this->label8->TabIndex = 10;
			this->label8->Text = L"r";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(71, 206);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 20);
			this->label7->TabIndex = 9;
			this->label7->Text = L"h";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(71, 171);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"b";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(71, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"a";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(546, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"label4";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(245, 306);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 42);
			this->button4->TabIndex = 1;
			this->button4->Text = L"clear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(100, 306);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 42);
			this->button3->TabIndex = 0;
			this->button3->Text = L"calc";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 439);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Focus();
		label1->Text = "=>";
	}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Focus();
	label1->Text = "<=";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double rez1, rez2;
	if (radioButton1->Checked == true) {
		rez1 = Convert::ToDouble(textBox1->Text);
		rez1 = rez1 / 27.15;
		textBox2->Text = Convert::ToString(rez1);
	}
	if (radioButton2->Checked == true) {
		rez2 = Convert::ToDouble(textBox2->Text);
		rez2 = rez2 * 27.15;
		textBox1->Text = Convert::ToString(rez2);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	float a, b, h, r, s;
	const double PI = 3.14;
	int n = comboBox1->SelectedIndex;
	switch (n)
	{
	case 0:
		a = System::Convert::ToDouble(textBox3->Text);
		b = System::Convert::ToDouble(textBox4->Text);
		s = a * b;
		break;
	case 1:
		a = System::Convert::ToDouble(textBox3->Text);
		h = System::Convert::ToDouble(textBox5->Text);
		s = (a * h) / 2;
		break;
	case 2:
		a = System::Convert::ToDouble(textBox3->Text);
		b = System::Convert::ToDouble(textBox4->Text);
		h = System::Convert::ToDouble(textBox5->Text);
		s = ((a + b) / 2) * h;
		break;
	case 3:
		r = System::Convert::ToDouble(textBox6->Text);
		s = PI * pow(r, 2);
		break;
	};

	richTextBox1->AppendText(comboBox1->Text + "S= " + Convert::ToString(s) + "\r\n");

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int n = comboBox1->SelectedIndex;

	// Î÷èùåííÿ âì³ñòó label
	label4->Text = "";

	// Â³äêëþ÷åííÿ âñ³õ textBox
	textBox3->Enabled = false;
	textBox4->Enabled = false;
	textBox5->Enabled = false;
	textBox6->Enabled = false;

	// Â³äïîâ³äíî äî âèáðàíîãî çíà÷åííÿ â comboBox, âñòàíîâëåííÿ âì³ñòó label òà âêëþ÷åííÿ â³äïîâ³äíèõ textBox
	switch (n) {
	case 0:
		label4->Text = "Ââåä³òü a, b";
		label4->Visible = true;
		textBox3->Enabled = true;
		textBox4->Enabled = true;
		break;
	case 1:
		label4->Text = "Ââåä³òü a, h";
		textBox3->Enabled = true;
		textBox5->Enabled = true;
		break;
	case 2:
		label4->Text = "Ââåä³òü a, b, h";
		textBox3->Enabled = true;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		break;
	case 3:
		label4->Text = "Ââåä³òü r";
		textBox6->Enabled = true;
		break;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Clear(); textBox4->Clear();
	textBox5->Clear(); textBox6->Clear();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	float a, b, c, p, m;
	int n = comboBox2->SelectedIndex;
	if (n < 0) {
		MessageBox::Show("Оберіть значення!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	switch (n)
	{
	case 0:
		a = System::Convert::ToDouble(textBox5->Text);
		b = System::Convert::ToDouble(textBox6->Text);
		c = System::Convert::ToDouble(textBox7->Text);
		m = 0, 5 * (sqrt(2*(b * b + c * c) - a * a));
		break;
	case 1:
		a = System::Convert::ToDouble(textBox5->Text);
		b = System::Convert::ToDouble(textBox6->Text);
		c = System::Convert::ToDouble(textBox7->Text);
		m = (sqrt((b * c) * ((b + c) * (b + c) - a * a))) / (b + c);
		break;
	case 2:
		a = System::Convert::ToDouble(textBox5->Text);
		b = System::Convert::ToDouble(textBox6->Text);
		c = System::Convert::ToDouble(textBox7->Text);
		p = (a + b + c) / 2;
		m = 2 / c * (sqrt(p * (p - a) * (p - b) * (p - c)));
		break;
	}
	richTextBox2->AppendText(comboBox2->Text + "m= " + Convert::ToString(m) + "\r\n");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox7->Clear();
	textBox8->Clear();
	textBox9->Clear();

}
};
}
