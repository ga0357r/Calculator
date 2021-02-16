#pragma once
#include "Input.h"
#include "Calculate.h"
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator_UI
	/// </summary>
	public ref class Calculator_UI : public System::Windows::Forms::Form
	{

		//variables
		//class to handle calculations
		Calculate brain;
		//class to handle input
		Input input;

	private: System::Windows::Forms::Button^ cube_root_button;
	private: System::Windows::Forms::ComboBox^ convert_from;
	private: System::Windows::Forms::ComboBox^ convert_to;



	private: System::Windows::Forms::Button^ Conversion;

		   //integer number_buttons
		Button^ number_buttons;

	public:
		Calculator_UI(void)
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
		~Calculator_UI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_0;
	private: System::Windows::Forms::Button^ button_1;
	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_3;
	private: System::Windows::Forms::Button^ button_6;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_9;
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_7;
	private: System::Windows::Forms::Button^ divide_button;

	private: System::Windows::Forms::Button^ multiply_button;

	private: System::Windows::Forms::Button^ add_button;

	private: System::Windows::Forms::Button^ subtract_button;
	private: System::Windows::Forms::Button^ equal_button;



	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ clear_screen_button;

	private: System::Windows::Forms::Button^ button_dot;
	private: System::Windows::Forms::Button^ modulus_button;

	private: System::Windows::Forms::Button^ square_root_button;
	private: System::Windows::Forms::Button^ square_number_button;
	private: System::Windows::Forms::Button^ cube_number_button;
	private: System::Windows::Forms::Button^ x_y_button;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator_UI::typeid));
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->divide_button = (gcnew System::Windows::Forms::Button());
			this->multiply_button = (gcnew System::Windows::Forms::Button());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->subtract_button = (gcnew System::Windows::Forms::Button());
			this->equal_button = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->clear_screen_button = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->modulus_button = (gcnew System::Windows::Forms::Button());
			this->square_root_button = (gcnew System::Windows::Forms::Button());
			this->square_number_button = (gcnew System::Windows::Forms::Button());
			this->cube_number_button = (gcnew System::Windows::Forms::Button());
			this->x_y_button = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->cube_root_button = (gcnew System::Windows::Forms::Button());
			this->convert_from = (gcnew System::Windows::Forms::ComboBox());
			this->convert_to = (gcnew System::Windows::Forms::ComboBox());
			this->Conversion = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_0
			// 
			this->button_0->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_0->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_0->Location = System::Drawing::Point(81, 351);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(50, 50);
			this->button_0->TabIndex = 1;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &Calculator_UI::Display_Number_Button);
			// 
			// button_1
			// 
			this->button_1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_1->Location = System::Drawing::Point(25, 295);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(50, 50);
			this->button_1->TabIndex = 1;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &Calculator_UI::Display_Number_Button);
			// 
			// button_2
			// 
			this->button_2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_2->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_2->Location = System::Drawing::Point(81, 295);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(50, 50);
			this->button_2->TabIndex = 1;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &Calculator_UI::Display_Number_Button);
			// 
			// button_3
			// 
			this->button_3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_3->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_3->Location = System::Drawing::Point(137, 295);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(50, 50);
			this->button_3->TabIndex = 1;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &Calculator_UI::Display_Number_Button);
			// 
			// button_6
			// 
			this->button_6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_6->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_6->Location = System::Drawing::Point(137, 239);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(50, 50);
			this->button_6->TabIndex = 7;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &Calculator_UI::Display_Number_Button);
			// 
			// button_5
			// 
			this->button_5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_5->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_5->Location = System::Drawing::Point(81, 239);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(50, 50);
			this->button_5->TabIndex = 1;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &Calculator_UI::Display_Number_Button);
			// 
			// button_4
			// 
			this->button_4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_4->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_4->Location = System::Drawing::Point(25, 239);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(50, 50);
			this->button_4->TabIndex = 1;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &Calculator_UI::Display_Number_Button);
			// 
			// button_9
			// 
			this->button_9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_9->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_9->Location = System::Drawing::Point(137, 183);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(50, 50);
			this->button_9->TabIndex = 1;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &Calculator_UI::Display_Number_Button);
			// 
			// button_8
			// 
			this->button_8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_8->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_8->Location = System::Drawing::Point(81, 183);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(50, 50);
			this->button_8->TabIndex = 1;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &Calculator_UI::Display_Number_Button);
			// 
			// button_7
			// 
			this->button_7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_7->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_7->Location = System::Drawing::Point(25, 183);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(50, 50);
			this->button_7->TabIndex = 1;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &Calculator_UI::Display_Number_Button);
			// 
			// divide_button
			// 
			this->divide_button->BackColor = System::Drawing::SystemColors::Control;
			this->divide_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->divide_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->divide_button->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide_button->Location = System::Drawing::Point(213, 127);
			this->divide_button->Name = L"divide_button";
			this->divide_button->Size = System::Drawing::Size(50, 50);
			this->divide_button->TabIndex = 8;
			this->divide_button->Text = L"÷";
			this->divide_button->UseVisualStyleBackColor = false;
			this->divide_button->Click += gcnew System::EventHandler(this, &Calculator_UI::StoreFirstNumberAndOperation_OperatorButton);
			// 
			// multiply_button
			// 
			this->multiply_button->BackColor = System::Drawing::SystemColors::Control;
			this->multiply_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->multiply_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->multiply_button->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiply_button->Location = System::Drawing::Point(213, 183);
			this->multiply_button->Name = L"multiply_button";
			this->multiply_button->Size = System::Drawing::Size(50, 50);
			this->multiply_button->TabIndex = 9;
			this->multiply_button->Text = L"x";
			this->multiply_button->UseVisualStyleBackColor = false;
			this->multiply_button->Click += gcnew System::EventHandler(this, &Calculator_UI::StoreFirstNumberAndOperation_OperatorButton);
			// 
			// add_button
			// 
			this->add_button->BackColor = System::Drawing::SystemColors::Control;
			this->add_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->add_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->add_button->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_button->Location = System::Drawing::Point(213, 239);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(50, 50);
			this->add_button->TabIndex = 10;
			this->add_button->Text = L"+";
			this->add_button->UseVisualStyleBackColor = false;
			this->add_button->Click += gcnew System::EventHandler(this, &Calculator_UI::StoreFirstNumberAndOperation_OperatorButton);
			// 
			// subtract_button
			// 
			this->subtract_button->BackColor = System::Drawing::SystemColors::Control;
			this->subtract_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->subtract_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->subtract_button->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtract_button->Location = System::Drawing::Point(213, 295);
			this->subtract_button->Name = L"subtract_button";
			this->subtract_button->Size = System::Drawing::Size(50, 50);
			this->subtract_button->TabIndex = 11;
			this->subtract_button->Text = L"-";
			this->subtract_button->UseVisualStyleBackColor = false;
			this->subtract_button->Click += gcnew System::EventHandler(this, &Calculator_UI::StoreFirstNumberAndOperation_OperatorButton);
			// 
			// equal_button
			// 
			this->equal_button->BackColor = System::Drawing::SystemColors::Control;
			this->equal_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->equal_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equal_button->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equal_button->Location = System::Drawing::Point(213, 351);
			this->equal_button->Name = L"equal_button";
			this->equal_button->Size = System::Drawing::Size(50, 50);
			this->equal_button->TabIndex = 12;
			this->equal_button->Text = L"=";
			this->equal_button->UseVisualStyleBackColor = false;
			this->equal_button->Click += gcnew System::EventHandler(this, &Calculator_UI::PerformArithmeticOperation);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(81, 127);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 13;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator_UI::Backspace_Button);
			// 
			// clear_screen_button
			// 
			this->clear_screen_button->BackColor = System::Drawing::SystemColors::Control;
			this->clear_screen_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->clear_screen_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clear_screen_button->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear_screen_button->Location = System::Drawing::Point(25, 127);
			this->clear_screen_button->Name = L"clear_screen_button";
			this->clear_screen_button->Size = System::Drawing::Size(50, 50);
			this->clear_screen_button->TabIndex = 1;
			this->clear_screen_button->Text = L"C";
			this->clear_screen_button->UseVisualStyleBackColor = false;
			this->clear_screen_button->Click += gcnew System::EventHandler(this, &Calculator_UI::Clear_screen_button_Click);
			// 
			// button_dot
			// 
			this->button_dot->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_dot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_dot->Location = System::Drawing::Point(137, 351);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(50, 50);
			this->button_dot->TabIndex = 14;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = false;
			this->button_dot->Click += gcnew System::EventHandler(this, &Calculator_UI::Display_Number_Button);
			// 
			// modulus_button
			// 
			this->modulus_button->BackColor = System::Drawing::SystemColors::Control;
			this->modulus_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->modulus_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->modulus_button->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modulus_button->Location = System::Drawing::Point(25, 351);
			this->modulus_button->Name = L"modulus_button";
			this->modulus_button->Size = System::Drawing::Size(50, 50);
			this->modulus_button->TabIndex = 15;
			this->modulus_button->Text = L"%";
			this->modulus_button->UseVisualStyleBackColor = false;
			this->modulus_button->Click += gcnew System::EventHandler(this, &Calculator_UI::StoreFirstNumberAndOperation_OperatorButton);
			// 
			// square_root_button
			// 
			this->square_root_button->BackColor = System::Drawing::SystemColors::Control;
			this->square_root_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->square_root_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->square_root_button->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->square_root_button->Location = System::Drawing::Point(283, 183);
			this->square_root_button->Name = L"square_root_button";
			this->square_root_button->Size = System::Drawing::Size(50, 50);
			this->square_root_button->TabIndex = 16;
			this->square_root_button->Text = L"√";
			this->square_root_button->UseVisualStyleBackColor = false;
			this->square_root_button->Click += gcnew System::EventHandler(this, &Calculator_UI::StoreFirstNumberAndOperation_OperatorButton);
			// 
			// square_number_button
			// 
			this->square_number_button->BackColor = System::Drawing::SystemColors::Control;
			this->square_number_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->square_number_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->square_number_button->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->square_number_button->Location = System::Drawing::Point(283, 239);
			this->square_number_button->Name = L"square_number_button";
			this->square_number_button->Size = System::Drawing::Size(50, 50);
			this->square_number_button->TabIndex = 17;
			this->square_number_button->Text = L"x²";
			this->square_number_button->UseVisualStyleBackColor = false;
			this->square_number_button->Click += gcnew System::EventHandler(this, &Calculator_UI::StoreFirstNumberAndOperation_OperatorButton);
			// 
			// cube_number_button
			// 
			this->cube_number_button->BackColor = System::Drawing::SystemColors::Control;
			this->cube_number_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->cube_number_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cube_number_button->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cube_number_button->Location = System::Drawing::Point(283, 295);
			this->cube_number_button->Name = L"cube_number_button";
			this->cube_number_button->Size = System::Drawing::Size(50, 50);
			this->cube_number_button->TabIndex = 18;
			this->cube_number_button->Text = L"x³";
			this->cube_number_button->UseVisualStyleBackColor = false;
			this->cube_number_button->Click += gcnew System::EventHandler(this, &Calculator_UI::StoreFirstNumberAndOperation_OperatorButton);
			// 
			// x_y_button
			// 
			this->x_y_button->BackColor = System::Drawing::SystemColors::Control;
			this->x_y_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->x_y_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->x_y_button->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x_y_button->Location = System::Drawing::Point(283, 351);
			this->x_y_button->Name = L"x_y_button";
			this->x_y_button->Size = System::Drawing::Size(50, 50);
			this->x_y_button->TabIndex = 19;
			this->x_y_button->Text = L"x^y";
			this->x_y_button->UseVisualStyleBackColor = false;
			this->x_y_button->Click += gcnew System::EventHandler(this, &Calculator_UI::StoreFirstNumberAndOperation_OperatorButton);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->HideSelection = false;
			this->textBox1->Location = System::Drawing::Point(25, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox1->Size = System::Drawing::Size(308, 40);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Calculator_UI::TextBox1_TextChanged);
			// 
			// cube_root_button
			// 
			this->cube_root_button->BackColor = System::Drawing::SystemColors::Control;
			this->cube_root_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->cube_root_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cube_root_button->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cube_root_button->Location = System::Drawing::Point(283, 127);
			this->cube_root_button->Name = L"cube_root_button";
			this->cube_root_button->Size = System::Drawing::Size(50, 50);
			this->cube_root_button->TabIndex = 20;
			this->cube_root_button->Text = L"∛";
			this->cube_root_button->UseVisualStyleBackColor = false;
			this->cube_root_button->Click += gcnew System::EventHandler(this, &Calculator_UI::StoreFirstNumberAndOperation_OperatorButton);
			// 
			// convert_from
			// 
			this->convert_from->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->convert_from->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->convert_from->FormattingEnabled = true;
			this->convert_from->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"None", L"Metres", L"Yards", L"Nautical Miles",
					L"Litres", L"Cubic Metres", L"Kilograms", L"Stone", L"Miles Per Hour", L"Degrees"
			});
			this->convert_from->Location = System::Drawing::Point(25, 85);
			this->convert_from->Name = L"convert_from";
			this->convert_from->Size = System::Drawing::Size(100, 21);
			this->convert_from->TabIndex = 21;
			// 
			// convert_to
			// 
			this->convert_to->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->convert_to->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->convert_to->FormattingEnabled = true;
			this->convert_to->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"None", L"Centimetres", L"Miles", L"Pints", L"Cubic Centimetres",
					L"Kilograms", L"Pounds", L"Kilometres Per Hour", L"Radians"
			});
			this->convert_to->Location = System::Drawing::Point(131, 85);
			this->convert_to->Name = L"convert_to";
			this->convert_to->Size = System::Drawing::Size(100, 21);
			this->convert_to->TabIndex = 22;
			// 
			// Conversion
			// 
			this->Conversion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Conversion->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Conversion->Location = System::Drawing::Point(258, 83);
			this->Conversion->Name = L"Conversion";
			this->Conversion->Size = System::Drawing::Size(75, 23);
			this->Conversion->TabIndex = 23;
			this->Conversion->Text = L"Convert";
			this->Conversion->UseVisualStyleBackColor = true;
			this->Conversion->Click += gcnew System::EventHandler(this, &Calculator_UI::Perform_Convertion);
			// 
			// Calculator_UI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 421);
			this->Controls->Add(this->Conversion);
			this->Controls->Add(this->convert_to);
			this->Controls->Add(this->convert_from);
			this->Controls->Add(this->cube_root_button);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->square_root_button);
			this->Controls->Add(this->square_number_button);
			this->Controls->Add(this->cube_number_button);
			this->Controls->Add(this->x_y_button);
			this->Controls->Add(this->modulus_button);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->clear_screen_button);
			this->Controls->Add(this->equal_button);
			this->Controls->Add(this->divide_button);
			this->Controls->Add(this->multiply_button);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->subtract_button);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_0);
			this->MaximizeBox = false;
			this->Name = L"Calculator_UI";
			this->Text = L"Calculator_UI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	//this is the textbox
		
}
//to display numbers into the textbox when any number_button is pressed
private: System::Void Display_Number_Button(System::Object^ sender, System::EventArgs^ e) 
{
	//if any button with a number on it is pressed run this event

	//input number into textbox
	input.InputNumberIntoTextbox(sender, number_buttons, textBox1);
	
}
//to clear the screen on the push of a button
private: System::Void Clear_screen_button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//clear the screen
	input.ClearScreen(textBox1);
}
private: System::Void StoreFirstNumberAndOperation_OperatorButton(System::Object^ sender, System::EventArgs^ e)
{
	//Store the first number and operation

	//store the 1st number variable in the brain class
	brain.number_1 = Double::Parse(textBox1->Text);

	//return the operation
	brain.operation = brain.ReturnOperation(sender,number_buttons,textBox1);

	//clear the screen if another input is expected 

	if (brain.operation == '+' || brain.operation == '-' || brain.operation == 'x' || brain.operation == '÷' || brain.operation == '%' || brain.operation == '^')
	{
		//clear the screen
		input.ClearScreen(textBox1);
	}

	else
	{

	}

}

private: System::Void PerformArithmeticOperation(System::Object^ sender, System::EventArgs^ e) 
{
	// store the second number and perform the operation

	//if the operation is addition,subtraction,multiplication or division, modulus or x^y 
	if (brain.operation == '+' || brain.operation == '-' || brain.operation == 'x' || brain.operation == '÷' || brain.operation == '%' || brain.operation == '^')
	{
		//store the second number in the brain class
		brain.number_2 = Double::Parse(textBox1->Text);

		//perform the operation between number 1 and 2
		brain.answer = brain.PerformArithmeticOperation(sender, number_buttons, brain, textBox1);

		//display the answer in the textbox
		input.Display(textBox1, brain.answer);
	}
	//else if the operation is square root, cube root, squared, cubed 
	else if (brain.operation == 's' || brain.operation == 'c' ||brain.operation == (char)-78 || brain.operation == (char)-77)
	{
		//return result
		brain.answer = brain.PerformArithmeticOperation(sender, number_buttons, brain, textBox1);

		//display the answer in the textbox
		input.Display(textBox1, brain.answer);
	}
	
}
	   //convert from one form to another
private: System::Void Perform_Convertion(System::Object^ sender, System::EventArgs^ e) 
{
	//check the comboxes

	//combobox 1, what we are converting from
	brain.convertion->convert_from = convert_from->Text;

	//combo box 2, what we are converting to
	brain.convertion->convert_to = convert_to->Text;

	//check if the convertion is possible
	brain.convertion->is_convertion_possible = brain.convertion->IsConvertionPossible(brain.convertion->convert_from, brain.convertion->convert_to);

	//if the convertion is possible
	if (brain.convertion->is_convertion_possible == true)
	{
		//begin convertion

		//1st step
		//assign the 1st number
		brain.number_1 = Double::Parse(textBox1->Text);

		//2nd step
		//perform convertion
		brain.answer = brain.PerformConvertion(sender, number_buttons, brain, textBox1);

		//3rd step
		//display the output
		input.Display(textBox1, brain.answer);
	}
	else
	{
		
	}
}
		 //perform a backspace
private: System::Void Backspace_Button(System::Object^ sender, System::EventArgs^ e) 
{
	//1st step
	//return the text 
	input.old_text = input.ReturnTextFromTextbox(textBox1, input);

	//2nd step 
	//store the length of the string
	input.length = input.old_text->Length;

	//3rd step 
	//remove the last index from the string
	input.new_text = input.old_text->Remove(input.length - 1);

	//4th step
	//display it in the textbox
	input.Display(textBox1, input.new_text);
}
};
}
