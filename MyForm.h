#pragma once

namespace Calculator {

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

















	private: System::Windows::Forms::RichTextBox^ richTextBox1;




	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ button25;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(4, 69);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richTextBox1->Size = System::Drawing::Size(330, 104);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"0";
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Black;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(307, 5);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(32, 23);
			this->button21->TabIndex = 2;
			this->button21->Text = L"X";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			this->button21->MouseEnter += gcnew System::EventHandler(this, &MyForm::button21_MouseEnter);
			this->button21->MouseLeave += gcnew System::EventHandler(this, &MyForm::button21_MouseLeave);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(41, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(63, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(158, 18);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(72, 13);
			this->textBox2->TabIndex = 4;
			this->textBox2->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(140, 58);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(207, 144);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(124, 13);
			this->textBox3->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(243, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(245, 165);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(85, 53);
			this->button16->TabIndex = 15;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(82, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 48);
			this->button3->TabIndex = 2;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Clicker);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(161, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 48);
			this->button2->TabIndex = 1;
			this->button2->Text = L"3";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Clicker);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(245, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"/";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(3, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(73, 48);
			this->button4->TabIndex = 3;
			this->button4->Text = L"1";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Clicker);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(3, 57);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(73, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Clicker);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(82, 57);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(73, 50);
			this->button6->TabIndex = 5;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Clicker);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(161, 57);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(78, 50);
			this->button7->TabIndex = 6;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Clicker);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(245, 57);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(85, 50);
			this->button8->TabIndex = 7;
			this->button8->Text = L"*";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(3, 113);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(73, 46);
			this->button9->TabIndex = 8;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Clicker);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(82, 113);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(73, 46);
			this->button10->TabIndex = 9;
			this->button10->Text = L"8";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Clicker);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(161, 113);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(78, 46);
			this->button11->TabIndex = 10;
			this->button11->Text = L"9";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Clicker);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(245, 113);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(85, 46);
			this->button12->TabIndex = 11;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			this->button12->MouseEnter += gcnew System::EventHandler(this, &MyForm::button12_MouseEnter);
			this->button12->MouseLeave += gcnew System::EventHandler(this, &MyForm::button12_MouseLeave);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(3, 165);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(73, 53);
			this->button13->TabIndex = 12;
			this->button13->Text = L",";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(161, 281);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(78, 47);
			this->button14->TabIndex = 13;
			this->button14->Text = L"Clear";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(161, 165);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(78, 53);
			this->button15->TabIndex = 14;
			this->button15->Text = L"0";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Clicker);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(3, 224);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(73, 51);
			this->button17->TabIndex = 16;
			this->button17->Text = L" нож";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Red;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(245, 281);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(85, 47);
			this->button18->TabIndex = 17;
			this->button18->Text = L"=";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(161, 224);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(78, 51);
			this->button19->TabIndex = 18;
			this->button19->Text = L"X^2";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(82, 224);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(73, 51);
			this->button20->TabIndex = 19;
			this->button20->Text = L"√";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				84)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				93)));
			this->tableLayoutPanel1->Controls->Add(this->button23, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->button17, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->button15, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->button13, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button12, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->button10, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button9, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button8, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->button7, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->button6, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button5, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button4, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button16, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->button11, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->button22, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->button19, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->button25, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->button18, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->button14, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->button24, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->button20, 1, 4);
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(4, 179);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.25373F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.74627F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 52)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 59)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 57)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 52)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(335, 331);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(82, 281);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(73, 47);
			this->button23->TabIndex = 21;
			this->button23->Text = L"C";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(3, 281);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(73, 47);
			this->button22->TabIndex = 20;
			this->button22->Text = L"(";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(245, 224);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(85, 51);
			this->button25->TabIndex = 23;
			this->button25->Text = L"%";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(82, 165);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(73, 53);
			this->button24->TabIndex = 22;
			this->button24->Text = L"+/-";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// MyForm
			// 
			this->AcceptButton = this->button19;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(343, 512);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool log = false;
    private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
	
	}


public: System::Void Clicker(System::Object^ sender, System::EventArgs^ e) {
	Button^ knopka = safe_cast <Button^>(sender);
	
	if (this->richTextBox1->Text == "0") {
		
		this->richTextBox1->Text = knopka->Text;
		
			
	}
	else {
		

		this->richTextBox1->Text = this->richTextBox1->Text + knopka->Text;
		

	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	this->Close();
}
private: System::Void button21_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->button21->BackColor = System::Drawing::Color::Red;
}
private: System::Void button21_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->button21->BackColor = System::Drawing::Color::Black;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = "";
	this->textBox3->Text = "";
}
private: System::Void delit(){
	if (log == false) {
		this->textBox3->Text += this->richTextBox1->Text;
	}
	this->textBox1->Text = this->richTextBox1->Text;
	
	this->richTextBox1->Text = "";
	this->textBox2->Text = "/";
	
	
	this->textBox3->Text += "/";
	log = true;
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	delit();
	
}
 private:  System::Void arifmetic(){
	 
		  String^ second = this->richTextBox1->Text;
		 
		  String^ first = this->textBox1->Text;


		  double res = 0;
		  if (this->textBox2->Text == "/") {
			  res = Convert::ToDouble(first) / Convert::ToDouble(second);
		  }
		  else if (this->textBox2->Text == "*")
		  {
			  res = Convert::ToDouble(first) * Convert::ToDouble(second);
		  }
		  else if (this->textBox2->Text == "-") {
			  res = Convert::ToDouble(first) - Convert::ToDouble(second);
		  }
		  else if (this->textBox2->Text == "+") {
			  res = Convert::ToDouble(first) + Convert::ToDouble(second);
		  }
		  else if (this->textBox2->Text == "%") {
			  res = Convert::ToDouble(first) * Convert::ToDouble(second) / 100;
		  }
		  this->textBox3->Text += this->richTextBox1->Text;
		  
		  this->richTextBox1->Text = Convert::ToString(res);
		  
	  }

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		arifmetic();

}
 private: System::Void mnoz() {
			   String^ first = this->richTextBox1->Text;
			   this->textBox1->Text = this->richTextBox1->Text;
			   this->textBox3->Text += first;
			   this->richTextBox1->Text = "";
			   this->textBox2->Text = "*";
			   this->textBox3->Text += "*";
			 
		   }
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	mnoz();

	   }
	   private: System::Void minus() {
		   String^ first = this->richTextBox1->Text;
		   this->textBox1->Text = this->richTextBox1->Text;
		   this->textBox3->Text += this->richTextBox1->Text;
		   this->richTextBox1->Text = "";
		   this->textBox2->Text = "-";

		   this->textBox3->Text += "-";

	   }

private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	minus();
}
private: System::Void plus() {
	String^ first = this->richTextBox1->Text;
	this->textBox1->Text = this->richTextBox1->Text;
	this->textBox3->Text += this->richTextBox1->Text;
	this->richTextBox1->Text = "";
	this->textBox2->Text = "+";
	this->textBox3->Text += "+";

}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	plus();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	double res;
	
	String^ first = this->richTextBox1->Text;
	this->textBox1->Text = this->richTextBox1->Text;
	this->richTextBox1->Text = "";
	int f = Convert::ToDouble(first);
	res = Math::Sqrt(f);
	this->textBox3->Text += "sqrt(";
	this->textBox3->Text += first;
	this->textBox3->Text += ")";
	
	this->richTextBox1->Text = Convert::ToString(res);

}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	double res;

	String^ first = this->richTextBox1->Text;
	this->textBox1->Text = this->richTextBox1->Text;


	this->richTextBox1->Text = "";
	int f = Convert::ToDouble(first);

	res = f * f;
	this->textBox3->Text += "(" + first;
	this->textBox3->Text += "^2)";
	this->richTextBox1->Text = Convert::ToString(res);
	

}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

	this->richTextBox1->Text += ".";
	String^ first = this->richTextBox1->Text;
	
	this->textBox1->Text = this->richTextBox1->Text;
	this->textBox3->Text += ".";
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	
	System::Diagnostics::Process::Start("C:/Users/dimu2/Laby/Project2/x64/Debug/Project2.exe");
}
	   private: System::Void VisitLink()
	   {
		   // Change the color of the link text by setting LinkVisited
		   // to true.
		  // this->linkLabel1->LinkVisited = true;
		   //Call the Process.Start method to open the default browser
		   //with a URL:
		   System::Diagnostics::Process::Start("https://k1ego.github.io/bs5proj.github.io/index.html");
	   }
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	VisitLink();
}
 

private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {

}
private: System::Void button12_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	
}

	private: System::Void button12_MouseLeave(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox3->Text += "(";
	

	
	
}
	   private: System::Void back() {
		   String^ tex = richTextBox1->Text;
		   String^ buff;
	
		   String^ buffer = this->textBox3->Text;
		   for (int i = 0; i < tex->Length; i++) {

			   if (i != tex->Length - 1) {
				   buff += tex[i];
			   }
		   }


		   this->richTextBox1->Text = buff;
	   }
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	back();

}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	double b = Convert::ToDouble(this->richTextBox1->Text);
	b *= -1;
	this->richTextBox1->Text = Convert::ToString(b);
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ first = this->richTextBox1->Text;
	this->textBox1->Text = this->richTextBox1->Text;
	this->richTextBox1->Text = "0";
	this->textBox2->Text = "%";
	this->textBox3->Text += "%";
}


private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	    
	
	
	
	
	 
	
	 if (e->KeyChar >= '0' && e->KeyChar <= '9' && this->richTextBox1->Text->Length >= 1 && this->richTextBox1->Text != "0") {
		this->richTextBox1->Text += e->KeyChar;
		
	}
	else  if (e->KeyChar >= '0' && e->KeyChar <= '9' && this->richTextBox1->Text=="0" || this->richTextBox1->Text =="") {
		this->richTextBox1->Text="";
		this->richTextBox1->Text += e->KeyChar;
		
	}
	
    else if (e->KeyChar >= '/') 
	{
		delit();
	}
	else if (e->KeyChar >= '*') {
		mnoz();
	}
	else if (e->KeyChar >= '-') {
		minus();
	}
	else if (e->KeyChar >= '+') {
		plus();
	}


		
	
	
	
}

private: System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Back) {
		back();
	}

	else if (e->KeyCode == Keys::Enter) {
		arifmetic();
	}

}
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	
	if(e->KeyCode == Keys::Back) {
		back();
	}
	else if (e->KeyCode == Keys::Enter) {
		arifmetic();
	}
}
};
}
