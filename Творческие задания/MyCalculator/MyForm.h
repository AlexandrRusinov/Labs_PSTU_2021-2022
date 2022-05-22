#pragma once

namespace MyCalc {

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
	private: System::Windows::Forms::TextBox^ y1;
	protected:

	private: System::Windows::Forms::TextBox^ x1;
	private: System::Windows::Forms::TextBox^ z1;
	private: System::Windows::Forms::Button^ result;
	private: System::Windows::Forms::Button^ reset;
	protected:




	private: System::Windows::Forms::TextBox^ x2;
	private: System::Windows::Forms::TextBox^ y2;
	private: System::Windows::Forms::TextBox^ z2;
	private: System::Windows::Forms::TextBox^ a;
	private: System::Windows::Forms::TextBox^ b;





	private: System::Windows::Forms::TextBox^ x3;
	private: System::Windows::Forms::TextBox^ y3;
	private: System::Windows::Forms::TextBox^ z3;
	private: System::Windows::Forms::TextBox^ c;







	private: System::Windows::Forms::Label^ entsystem;
	private: System::Windows::Forms::Label^ koef;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ dX;
	private: System::Windows::Forms::Label^ dY;
	private: System::Windows::Forms::Label^ dZ;



	private: System::Windows::Forms::Label^ dA;
	private: System::Windows::Forms::Label^ label1;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->y1 = (gcnew System::Windows::Forms::TextBox());
			this->x1 = (gcnew System::Windows::Forms::TextBox());
			this->z1 = (gcnew System::Windows::Forms::TextBox());
			this->result = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->x2 = (gcnew System::Windows::Forms::TextBox());
			this->y2 = (gcnew System::Windows::Forms::TextBox());
			this->z2 = (gcnew System::Windows::Forms::TextBox());
			this->a = (gcnew System::Windows::Forms::TextBox());
			this->b = (gcnew System::Windows::Forms::TextBox());
			this->x3 = (gcnew System::Windows::Forms::TextBox());
			this->y3 = (gcnew System::Windows::Forms::TextBox());
			this->z3 = (gcnew System::Windows::Forms::TextBox());
			this->c = (gcnew System::Windows::Forms::TextBox());
			this->entsystem = (gcnew System::Windows::Forms::Label());
			this->koef = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dX = (gcnew System::Windows::Forms::Label());
			this->dY = (gcnew System::Windows::Forms::Label());
			this->dZ = (gcnew System::Windows::Forms::Label());
			this->dA = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// y1
			// 
			this->y1->Location = System::Drawing::Point(121, 71);
			this->y1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->y1->Name = L"y1";
			this->y1->Size = System::Drawing::Size(76, 20);
			this->y1->TabIndex = 0;
			this->y1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::y1_KeyPress);
			// 
			// x1
			// 
			this->x1->Location = System::Drawing::Point(34, 71);
			this->x1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(76, 20);
			this->x1->TabIndex = 1;
			this->x1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::x1_KeyPress);
			// 
			// z1
			// 
			this->z1->Location = System::Drawing::Point(210, 71);
			this->z1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->z1->Name = L"z1";
			this->z1->Size = System::Drawing::Size(76, 20);
			this->z1->TabIndex = 2;
			this->z1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::z1_KeyPress);
			// 
			// result
			// 
			this->result->BackColor = System::Drawing::SystemColors::Info;
			this->result->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->result->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->ForeColor = System::Drawing::Color::ForestGreen;
			this->result->Location = System::Drawing::Point(34, 255);
			this->result->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(83, 63);
			this->result->TabIndex = 3;
			this->result->Text = L"Вычислить";
			this->result->UseVisualStyleBackColor = false;
			this->result->Click += gcnew System::EventHandler(this, &MyForm::result_Click);
			// 
			// reset
			// 
			this->reset->BackColor = System::Drawing::SystemColors::Info;
			this->reset->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->reset->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->reset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reset->Location = System::Drawing::Point(121, 255);
			this->reset->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(89, 63);
			this->reset->TabIndex = 4;
			this->reset->Text = L"Очистить поля";
			this->reset->UseVisualStyleBackColor = false;
			this->reset->Click += gcnew System::EventHandler(this, &MyForm::reset_Click);
			// 
			// x2
			// 
			this->x2->Location = System::Drawing::Point(34, 115);
			this->x2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(76, 20);
			this->x2->TabIndex = 5;
			this->x2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::x2_KeyPress);
			// 
			// y2
			// 
			this->y2->Location = System::Drawing::Point(121, 115);
			this->y2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->y2->Name = L"y2";
			this->y2->Size = System::Drawing::Size(76, 20);
			this->y2->TabIndex = 6;
			this->y2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::y2_KeyPress);
			// 
			// z2
			// 
			this->z2->Location = System::Drawing::Point(210, 115);
			this->z2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->z2->Name = L"z2";
			this->z2->Size = System::Drawing::Size(76, 20);
			this->z2->TabIndex = 7;
			this->z2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::z2_KeyPress);
			// 
			// a
			// 
			this->a->Location = System::Drawing::Point(348, 71);
			this->a->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(76, 20);
			this->a->TabIndex = 8;
			this->a->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::a_KeyPress);
			// 
			// b
			// 
			this->b->Location = System::Drawing::Point(348, 115);
			this->b->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(76, 20);
			this->b->TabIndex = 9;
			this->b->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::b_KeyPress);
			// 
			// x3
			// 
			this->x3->Location = System::Drawing::Point(34, 159);
			this->x3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->x3->Name = L"x3";
			this->x3->Size = System::Drawing::Size(76, 20);
			this->x3->TabIndex = 10;
			this->x3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::x3_KeyPress);
			// 
			// y3
			// 
			this->y3->Location = System::Drawing::Point(121, 159);
			this->y3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->y3->Name = L"y3";
			this->y3->Size = System::Drawing::Size(76, 20);
			this->y3->TabIndex = 11;
			this->y3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::y3_KeyPress);
			// 
			// z3
			// 
			this->z3->Location = System::Drawing::Point(210, 159);
			this->z3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->z3->Name = L"z3";
			this->z3->Size = System::Drawing::Size(76, 20);
			this->z3->TabIndex = 12;
			this->z3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::z3_KeyPress);
			// 
			// c
			// 
			this->c->Location = System::Drawing::Point(348, 159);
			this->c->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(76, 20);
			this->c->TabIndex = 13;
			this->c->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::c_KeyPress);
			// 
			// entsystem
			// 
			this->entsystem->AutoSize = true;
			this->entsystem->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->entsystem->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->entsystem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->entsystem->Location = System::Drawing::Point(32, 46);
			this->entsystem->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->entsystem->Name = L"entsystem";
			this->entsystem->Size = System::Drawing::Size(136, 16);
			this->entsystem->TabIndex = 14;
			this->entsystem->Text = L"Заполните систему";
			// 
			// koef
			// 
			this->koef->AutoSize = true;
			this->koef->BackColor = System::Drawing::Color::Chartreuse;
			this->koef->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->koef->Location = System::Drawing::Point(232, 220);
			this->koef->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->koef->Name = L"koef";
			this->koef->Size = System::Drawing::Size(40, 13);
			this->koef->TabIndex = 15;
			this->koef->Text = L"Ответ:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, -99);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(524, 428);
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// dX
			// 
			this->dX->AutoSize = true;
			this->dX->Location = System::Drawing::Point(317, 280);
			this->dX->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->dX->Name = L"dX";
			this->dX->Size = System::Drawing::Size(16, 13);
			this->dX->TabIndex = 17;
			this->dX->Text = L"|x|";
			// 
			// dY
			// 
			this->dY->AutoSize = true;
			this->dY->Location = System::Drawing::Point(317, 305);
			this->dY->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->dY->Name = L"dY";
			this->dY->Size = System::Drawing::Size(16, 13);
			this->dY->TabIndex = 18;
			this->dY->Text = L"|y|";
			// 
			// dZ
			// 
			this->dZ->AutoSize = true;
			this->dZ->Location = System::Drawing::Point(317, 255);
			this->dZ->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->dZ->Name = L"dZ";
			this->dZ->Size = System::Drawing::Size(16, 13);
			this->dZ->TabIndex = 19;
			this->dZ->Text = L"|z|";
			// 
			// dA
			// 
			this->dA->AutoSize = true;
			this->dA->Location = System::Drawing::Point(232, 255);
			this->dA->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->dA->Name = L"dA";
			this->dA->Size = System::Drawing::Size(17, 13);
			this->dA->TabIndex = 20;
			this->dA->Text = L"|a|";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(304, 73);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 106);
			this->label1->TabIndex = 21;
			this->label1->Text = L"=";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 328);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dA);
			this->Controls->Add(this->dZ);
			this->Controls->Add(this->dY);
			this->Controls->Add(this->dX);
			this->Controls->Add(this->koef);
			this->Controls->Add(this->entsystem);
			this->Controls->Add(this->c);
			this->Controls->Add(this->z3);
			this->Controls->Add(this->y3);
			this->Controls->Add(this->x3);
			this->Controls->Add(this->b);
			this->Controls->Add(this->a);
			this->Controls->Add(this->z2);
			this->Controls->Add(this->y2);
			this->Controls->Add(this->x2);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->result);
			this->Controls->Add(this->z1);
			this->Controls->Add(this->x1);
			this->Controls->Add(this->y1);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор СЛАУ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
// события-методы
	private: System::Void result_Click(System::Object^ sender, System::EventArgs^ e)
	{
		array<TextBox^>^ numbers = { x1, x2, x3, y1, y2, y3, z1, z2, z3, a, b, c };
		for (int i = 0; i < numbers->Length; i++)
			if ((numbers[i]->Text == "" || numbers[i]->Text == "-")) // если пользователь не ввел коэф-ы или ввел все -
			{
				MessageBox::Show("Коэффициенты не введены или введены некорректно!");
				return;
			}
		double A[3][4], det, detX, detY, detZ; // матрица A
		double resX, resY, resZ;
		A[0][0] = System::Convert::ToDouble(x1->Text); // забираем значение из поля text из свойства текстбокса 
		A[1][0] = System::Convert::ToDouble(x2->Text); //convert для конвертации в целое число, т.к изначально тип данных в текст-боксе - "string"
		A[2][0] = System::Convert::ToDouble(x3->Text);
		A[0][1] = System::Convert::ToDouble(y1->Text);
		A[1][1] = System::Convert::ToDouble(y2->Text);
		A[2][1] = System::Convert::ToDouble(y3->Text);
		A[0][2] = System::Convert::ToDouble(z1->Text);
		A[1][2] = System::Convert::ToDouble(z2->Text);
		A[2][2] = System::Convert::ToDouble(z3->Text);
		A[0][3] = System::Convert::ToDouble(a->Text);
		A[1][3] = System::Convert::ToDouble(b->Text);
		A[2][3] = System::Convert::ToDouble(c->Text);



		det = (A[0][0] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][0]) + (A[0][2] * A[1][0] * A[2][1]) - (A[0][2] * A[1][1] * A[2][0]) - (A[0][0] * A[1][2] * A[2][1]) - (A[0][1] * A[1][0] * A[2][2]);
		detX = (A[0][3] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][3]) + (A[0][2] * A[1][3] * A[2][1]) - (A[0][2] * A[1][1] * A[2][3]) - (A[0][3] * A[1][2] * A[2][1]) - (A[0][1] * A[1][3] * A[2][2]);
		detY = (A[0][0] * A[1][3] * A[2][2]) + (A[0][3] * A[1][2] * A[2][0]) + (A[0][2] * A[1][0] * A[2][3]) - (A[0][2] * A[1][3] * A[2][0]) - (A[0][0] * A[1][2] * A[2][3]) - (A[0][3] * A[1][0] * A[2][2]);
		detZ = (A[0][0] * A[1][1] * A[2][3]) + (A[0][1] * A[1][3] * A[2][0]) + (A[0][3] * A[1][0] * A[2][1]) - (A[0][3] * A[1][1] * A[2][0]) - (A[0][0] * A[1][3] * A[2][1]) - (A[0][1] * A[1][0] * A[2][3]);

		resX = detX / det; // код нагляден - горжусь
		resY = detY / det;
		resZ = detZ / det;

		if (det == 0 || detX == 0 || detY == 0 || detZ == 0)
		{
			MessageBox::Show("Один из определителей равен нулю! На ноль делить нельзя!");
		}
		else
		{
			koef->Text = System::Convert::ToString("Ответ: x: " + resX + " y: " + resY + " z: " + resZ); // ->Text - вывод в поле лейбла "text" // (res) - значение такой переменной будет хранится в лейбле
			dA->Text = System::Convert::ToString("detA: " + det);
			dX->Text = System::Convert::ToString("detX: " + detX);
			dY->Text = System::Convert::ToString("detY: " + detY);
			dZ->Text = System::Convert::ToString("detZ: " + detZ);
		}
	
}
		   

//
//	Кнопка "Очистить"
//
private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) 
{
	array<TextBox^>^ numbers = { x1, x2, x3, y1, y2, y3, z1, z2, z3, a, b, c };
	for (int i = 0; i < numbers->Length; i++)
		numbers[i]->Text = "";
	
	koef->Text = "Ответ:";
	dA->Text = "|a|";
	dX->Text = "|x|";
	dY->Text = "|y|";
	dZ->Text = "|z|";
}



//
// Защита от некорректного ввода
//
private: System::Void x1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 46 && number != 45) // исключения: цифры, клавиша BackSpace, точка и - в ASCII // Просто не даст ввести буквы, запятую и 0 в ячейку, тем самым избегаем проблемы с делением на нуль
	{
		e->Handled = true;
	}
}
	   
private: System::Void y1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 46 && number != 45)
	{
		e->Handled = true;
	}
}
private: System::Void z1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 46 && number != 45)
	{
		e->Handled = true;
	}
}
private: System::Void a_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 46 && number != 45)
	{
		e->Handled = true;
	}
}
private: System::Void x2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 46 && number != 45)
	{
		e->Handled = true;
	}
}
private: System::Void y2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 46 && number != 45)
	{
		e->Handled = true;
	}
}
private: System::Void z2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 46 && number != 45)
	{
		e->Handled = true;
	}
}
private: System::Void b_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 46 && number != 45)
	{
		e->Handled = true;
	}
}
private: System::Void x3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 46 && number != 45)
	{
		e->Handled = true;
	}
}
private: System::Void y3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 46 && number != 45)
	{
		e->Handled = true;
	}
}
private: System::Void z3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 46 && number != 45)
	{
		e->Handled = true;
	}
}
private: System::Void c_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 46 && number != 45)
	{
		e->Handled = true;
	}
}



};
}
