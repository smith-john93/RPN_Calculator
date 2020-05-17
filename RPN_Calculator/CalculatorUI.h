#pragma once
#include "CalculatorFunctions.h"
#include <msclr\marshal_cppstd.h>

namespace CppGUI_Porject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ DisplayLabel;
	private: System::Windows::Forms::Button^ SevenButton;
	private: System::Windows::Forms::Button^ FourButton;
	private: System::Windows::Forms::Button^ OneButton;
	private: System::Windows::Forms::Button^ EightButton;
	private: System::Windows::Forms::Button^ FiveButton;
	private: System::Windows::Forms::Button^ TwoButton;
	private: System::Windows::Forms::Button^ ZeroButton;
	private: System::Windows::Forms::Button^ NineButton;
	private: System::Windows::Forms::Button^ SixButton;
	private: System::Windows::Forms::Button^ ThreeButton;
	private: System::Windows::Forms::Button^ LeftParensButton;
	private: System::Windows::Forms::Button^ PlusButton;
	private: System::Windows::Forms::Button^ MultiplyButton;
	private: System::Windows::Forms::Button^ EqualsButton;
	private: System::Windows::Forms::Button^ DecimalButton;
	private: System::Windows::Forms::Button^ DivideButton;
	private: System::Windows::Forms::Button^ MinusButton;
	private: System::Windows::Forms::Button^ RightParensButton;
	private: System::Windows::Forms::RadioButton^ InfixRadio;
	private: System::Windows::Forms::RadioButton^ ReversePolishRadio;
	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::Button^ DelimitButton;
	private: System::Windows::Forms::Label^ RPN_label;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->DisplayLabel = (gcnew System::Windows::Forms::Label());
			this->SevenButton = (gcnew System::Windows::Forms::Button());
			this->FourButton = (gcnew System::Windows::Forms::Button());
			this->OneButton = (gcnew System::Windows::Forms::Button());
			this->EightButton = (gcnew System::Windows::Forms::Button());
			this->FiveButton = (gcnew System::Windows::Forms::Button());
			this->TwoButton = (gcnew System::Windows::Forms::Button());
			this->ZeroButton = (gcnew System::Windows::Forms::Button());
			this->NineButton = (gcnew System::Windows::Forms::Button());
			this->SixButton = (gcnew System::Windows::Forms::Button());
			this->ThreeButton = (gcnew System::Windows::Forms::Button());
			this->LeftParensButton = (gcnew System::Windows::Forms::Button());
			this->PlusButton = (gcnew System::Windows::Forms::Button());
			this->MultiplyButton = (gcnew System::Windows::Forms::Button());
			this->EqualsButton = (gcnew System::Windows::Forms::Button());
			this->DecimalButton = (gcnew System::Windows::Forms::Button());
			this->DivideButton = (gcnew System::Windows::Forms::Button());
			this->MinusButton = (gcnew System::Windows::Forms::Button());
			this->RightParensButton = (gcnew System::Windows::Forms::Button());
			this->InfixRadio = (gcnew System::Windows::Forms::RadioButton());
			this->ReversePolishRadio = (gcnew System::Windows::Forms::RadioButton());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->DelimitButton = (gcnew System::Windows::Forms::Button());
			this->RPN_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// DisplayLabel
			// 
			this->DisplayLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->DisplayLabel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->DisplayLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayLabel->Location = System::Drawing::Point(12, 29);
			this->DisplayLabel->Name = L"DisplayLabel";
			this->DisplayLabel->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->DisplayLabel->Size = System::Drawing::Size(407, 31);
			this->DisplayLabel->TabIndex = 0;
			this->DisplayLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// SevenButton
			// 
			this->SevenButton->AutoSize = true;
			this->SevenButton->BackColor = System::Drawing::SystemColors::Control;
			this->SevenButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SevenButton->Location = System::Drawing::Point(12, 81);
			this->SevenButton->Name = L"SevenButton";
			this->SevenButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->SevenButton->Size = System::Drawing::Size(65, 52);
			this->SevenButton->TabIndex = 1;
			this->SevenButton->TabStop = false;
			this->SevenButton->Text = L"7";
			this->SevenButton->UseVisualStyleBackColor = false;
			this->SevenButton->Click += gcnew System::EventHandler(this, &Form1::SevenButton_Click);
			// 
			// FourButton
			// 
			this->FourButton->AutoSize = true;
			this->FourButton->BackColor = System::Drawing::SystemColors::Control;
			this->FourButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FourButton->Location = System::Drawing::Point(12, 138);
			this->FourButton->Name = L"FourButton";
			this->FourButton->Size = System::Drawing::Size(65, 52);
			this->FourButton->TabIndex = 2;
			this->FourButton->TabStop = false;
			this->FourButton->Text = L"4";
			this->FourButton->UseVisualStyleBackColor = false;
			this->FourButton->Click += gcnew System::EventHandler(this, &Form1::FourButton_Click);
			// 
			// OneButton
			// 
			this->OneButton->AutoSize = true;
			this->OneButton->BackColor = System::Drawing::SystemColors::Control;
			this->OneButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OneButton->Location = System::Drawing::Point(12, 196);
			this->OneButton->Name = L"OneButton";
			this->OneButton->Size = System::Drawing::Size(65, 52);
			this->OneButton->TabIndex = 4;
			this->OneButton->TabStop = false;
			this->OneButton->Text = L"1";
			this->OneButton->UseVisualStyleBackColor = false;
			this->OneButton->Click += gcnew System::EventHandler(this, &Form1::OneButton_Click);
			// 
			// EightButton
			// 
			this->EightButton->AutoSize = true;
			this->EightButton->BackColor = System::Drawing::SystemColors::Control;
			this->EightButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EightButton->Location = System::Drawing::Point(97, 81);
			this->EightButton->Name = L"EightButton";
			this->EightButton->Size = System::Drawing::Size(65, 52);
			this->EightButton->TabIndex = 5;
			this->EightButton->TabStop = false;
			this->EightButton->Text = L"8";
			this->EightButton->UseVisualStyleBackColor = false;
			this->EightButton->Click += gcnew System::EventHandler(this, &Form1::EightButton_Click);
			// 
			// FiveButton
			// 
			this->FiveButton->AutoSize = true;
			this->FiveButton->BackColor = System::Drawing::SystemColors::Control;
			this->FiveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->FiveButton->Location = System::Drawing::Point(97, 138);
			this->FiveButton->Name = L"FiveButton";
			this->FiveButton->Size = System::Drawing::Size(65, 52);
			this->FiveButton->TabIndex = 6;
			this->FiveButton->TabStop = false;
			this->FiveButton->Text = L"5";
			this->FiveButton->UseVisualStyleBackColor = false;
			this->FiveButton->Click += gcnew System::EventHandler(this, &Form1::FiveButton_Click);
			// 
			// TwoButton
			// 
			this->TwoButton->AutoSize = true;
			this->TwoButton->BackColor = System::Drawing::SystemColors::Control;
			this->TwoButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->TwoButton->Location = System::Drawing::Point(97, 196);
			this->TwoButton->Name = L"TwoButton";
			this->TwoButton->Size = System::Drawing::Size(65, 52);
			this->TwoButton->TabIndex = 7;
			this->TwoButton->TabStop = false;
			this->TwoButton->Text = L"2";
			this->TwoButton->UseVisualStyleBackColor = false;
			this->TwoButton->Click += gcnew System::EventHandler(this, &Form1::TwoButton_Click);
			// 
			// ZeroButton
			// 
			this->ZeroButton->AutoSize = true;
			this->ZeroButton->BackColor = System::Drawing::SystemColors::Control;
			this->ZeroButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->ZeroButton->Location = System::Drawing::Point(97, 254);
			this->ZeroButton->Name = L"ZeroButton";
			this->ZeroButton->Size = System::Drawing::Size(65, 52);
			this->ZeroButton->TabIndex = 8;
			this->ZeroButton->TabStop = false;
			this->ZeroButton->Text = L"0";
			this->ZeroButton->UseVisualStyleBackColor = false;
			this->ZeroButton->Click += gcnew System::EventHandler(this, &Form1::ZeroButton_Click);
			// 
			// NineButton
			// 
			this->NineButton->AutoSize = true;
			this->NineButton->BackColor = System::Drawing::SystemColors::Control;
			this->NineButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->NineButton->Location = System::Drawing::Point(184, 81);
			this->NineButton->Name = L"NineButton";
			this->NineButton->Size = System::Drawing::Size(65, 52);
			this->NineButton->TabIndex = 9;
			this->NineButton->TabStop = false;
			this->NineButton->Text = L"9";
			this->NineButton->UseVisualStyleBackColor = false;
			this->NineButton->Click += gcnew System::EventHandler(this, &Form1::NineButton_Click);
			// 
			// SixButton
			// 
			this->SixButton->AutoSize = true;
			this->SixButton->BackColor = System::Drawing::SystemColors::Control;
			this->SixButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->SixButton->Location = System::Drawing::Point(184, 139);
			this->SixButton->Name = L"SixButton";
			this->SixButton->Size = System::Drawing::Size(65, 52);
			this->SixButton->TabIndex = 10;
			this->SixButton->TabStop = false;
			this->SixButton->Text = L"6";
			this->SixButton->UseVisualStyleBackColor = false;
			this->SixButton->Click += gcnew System::EventHandler(this, &Form1::SixButton_Click);
			// 
			// ThreeButton
			// 
			this->ThreeButton->AutoSize = true;
			this->ThreeButton->BackColor = System::Drawing::SystemColors::Control;
			this->ThreeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->ThreeButton->Location = System::Drawing::Point(184, 196);
			this->ThreeButton->Name = L"ThreeButton";
			this->ThreeButton->Size = System::Drawing::Size(65, 52);
			this->ThreeButton->TabIndex = 11;
			this->ThreeButton->TabStop = false;
			this->ThreeButton->Text = L"3";
			this->ThreeButton->UseVisualStyleBackColor = false;
			this->ThreeButton->Click += gcnew System::EventHandler(this, &Form1::ThreeButton_Click);
			// 
			// LeftParensButton
			// 
			this->LeftParensButton->AutoSize = true;
			this->LeftParensButton->BackColor = System::Drawing::SystemColors::Control;
			this->LeftParensButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->LeftParensButton->Location = System::Drawing::Point(271, 80);
			this->LeftParensButton->Name = L"LeftParensButton";
			this->LeftParensButton->Size = System::Drawing::Size(65, 52);
			this->LeftParensButton->TabIndex = 12;
			this->LeftParensButton->TabStop = false;
			this->LeftParensButton->Text = L"(";
			this->LeftParensButton->UseVisualStyleBackColor = false;
			this->LeftParensButton->Click += gcnew System::EventHandler(this, &Form1::LeftParensButton_Click);
			// 
			// PlusButton
			// 
			this->PlusButton->AutoSize = true;
			this->PlusButton->BackColor = System::Drawing::SystemColors::Control;
			this->PlusButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->PlusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->PlusButton->Location = System::Drawing::Point(271, 138);
			this->PlusButton->Name = L"PlusButton";
			this->PlusButton->Size = System::Drawing::Size(65, 52);
			this->PlusButton->TabIndex = 13;
			this->PlusButton->TabStop = false;
			this->PlusButton->Text = L"+";
			this->PlusButton->UseVisualStyleBackColor = false;
			this->PlusButton->Click += gcnew System::EventHandler(this, &Form1::PlusButton_Click);
			// 
			// MultiplyButton
			// 
			this->MultiplyButton->AutoSize = true;
			this->MultiplyButton->BackColor = System::Drawing::SystemColors::Control;
			this->MultiplyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->MultiplyButton->Location = System::Drawing::Point(271, 196);
			this->MultiplyButton->Name = L"MultiplyButton";
			this->MultiplyButton->Size = System::Drawing::Size(65, 52);
			this->MultiplyButton->TabIndex = 14;
			this->MultiplyButton->TabStop = false;
			this->MultiplyButton->Text = L"X";
			this->MultiplyButton->UseVisualStyleBackColor = false;
			this->MultiplyButton->Click += gcnew System::EventHandler(this, &Form1::MultiplyButton_Click);
			// 
			// EqualsButton
			// 
			this->EqualsButton->AutoSize = true;
			this->EqualsButton->BackColor = System::Drawing::SystemColors::Control;
			this->EqualsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->EqualsButton->Location = System::Drawing::Point(271, 254);
			this->EqualsButton->Name = L"EqualsButton";
			this->EqualsButton->Size = System::Drawing::Size(65, 52);
			this->EqualsButton->TabIndex = 15;
			this->EqualsButton->TabStop = false;
			this->EqualsButton->Text = L"=";
			this->EqualsButton->UseVisualStyleBackColor = false;
			this->EqualsButton->Click += gcnew System::EventHandler(this, &Form1::EqualsButton_Click);
			// 
			// DecimalButton
			// 
			this->DecimalButton->AutoSize = true;
			this->DecimalButton->BackColor = System::Drawing::SystemColors::Control;
			this->DecimalButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->DecimalButton->Location = System::Drawing::Point(184, 254);
			this->DecimalButton->Name = L"DecimalButton";
			this->DecimalButton->Size = System::Drawing::Size(65, 52);
			this->DecimalButton->TabIndex = 16;
			this->DecimalButton->TabStop = false;
			this->DecimalButton->Text = L".";
			this->DecimalButton->UseVisualStyleBackColor = false;
			this->DecimalButton->Click += gcnew System::EventHandler(this, &Form1::DecimalButton_Click);
			// 
			// DivideButton
			// 
			this->DivideButton->AutoSize = true;
			this->DivideButton->BackColor = System::Drawing::SystemColors::Control;
			this->DivideButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->DivideButton->Location = System::Drawing::Point(354, 196);
			this->DivideButton->Name = L"DivideButton";
			this->DivideButton->Size = System::Drawing::Size(65, 52);
			this->DivideButton->TabIndex = 20;
			this->DivideButton->TabStop = false;
			this->DivideButton->Text = L"/";
			this->DivideButton->UseVisualStyleBackColor = false;
			this->DivideButton->Click += gcnew System::EventHandler(this, &Form1::DivideButton_Click);
			// 
			// MinusButton
			// 
			this->MinusButton->AutoSize = true;
			this->MinusButton->BackColor = System::Drawing::SystemColors::Control;
			this->MinusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->MinusButton->Location = System::Drawing::Point(354, 138);
			this->MinusButton->Name = L"MinusButton";
			this->MinusButton->Size = System::Drawing::Size(65, 52);
			this->MinusButton->TabIndex = 19;
			this->MinusButton->TabStop = false;
			this->MinusButton->Text = L"-";
			this->MinusButton->UseVisualStyleBackColor = false;
			this->MinusButton->Click += gcnew System::EventHandler(this, &Form1::MinusButton_Click);
			// 
			// RightParensButton
			// 
			this->RightParensButton->AutoSize = true;
			this->RightParensButton->BackColor = System::Drawing::SystemColors::Control;
			this->RightParensButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->RightParensButton->Location = System::Drawing::Point(354, 80);
			this->RightParensButton->Name = L"RightParensButton";
			this->RightParensButton->Size = System::Drawing::Size(65, 52);
			this->RightParensButton->TabIndex = 18;
			this->RightParensButton->TabStop = false;
			this->RightParensButton->Text = L")";
			this->RightParensButton->UseVisualStyleBackColor = false;
			this->RightParensButton->Click += gcnew System::EventHandler(this, &Form1::RightParensButton_Click);
			// 
			// InfixRadio
			// 
			this->InfixRadio->AutoSize = true;
			this->InfixRadio->Checked = true;
			this->InfixRadio->Location = System::Drawing::Point(12, 0);
			this->InfixRadio->Name = L"InfixRadio";
			this->InfixRadio->Size = System::Drawing::Size(44, 17);
			this->InfixRadio->TabIndex = 21;
			this->InfixRadio->TabStop = true;
			this->InfixRadio->Text = L"Infix";
			this->InfixRadio->UseVisualStyleBackColor = true;
			this->InfixRadio->Click += gcnew System::EventHandler(this, &Form1::InfixRadio_Click);
			// 
			// ReversePolishRadio
			// 
			this->ReversePolishRadio->AutoSize = true;
			this->ReversePolishRadio->Location = System::Drawing::Point(62, 0);
			this->ReversePolishRadio->Name = L"ReversePolishRadio";
			this->ReversePolishRadio->Size = System::Drawing::Size(48, 17);
			this->ReversePolishRadio->TabIndex = 22;
			this->ReversePolishRadio->Text = L"RPN";
			this->ReversePolishRadio->UseVisualStyleBackColor = true;
			this->ReversePolishRadio->Click += gcnew System::EventHandler(this, &Form1::RPNRadio_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->AutoSize = true;
			this->ClearButton->BackColor = System::Drawing::SystemColors::Control;
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->ClearButton->Location = System::Drawing::Point(12, 254);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(65, 52);
			this->ClearButton->TabIndex = 23;
			this->ClearButton->TabStop = false;
			this->ClearButton->Text = L"Clr";
			this->ClearButton->UseVisualStyleBackColor = false;
			this->ClearButton->Click += gcnew System::EventHandler(this, &Form1::ClearButton_Click);
			// 
			// DelimitButton
			// 
			this->DelimitButton->AutoSize = true;
			this->DelimitButton->BackColor = System::Drawing::SystemColors::Control;
			this->DelimitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DelimitButton->Location = System::Drawing::Point(354, 254);
			this->DelimitButton->Name = L"DelimitButton";
			this->DelimitButton->Size = System::Drawing::Size(65, 52);
			this->DelimitButton->TabIndex = 24;
			this->DelimitButton->TabStop = false;
			this->DelimitButton->Text = L"Space";
			this->DelimitButton->UseVisualStyleBackColor = false;
			this->DelimitButton->Click += gcnew System::EventHandler(this, &Form1::Delimit_Click);
			// 
			// RPN_label
			// 
			this->RPN_label->AutoSize = true;
			this->RPN_label->Location = System::Drawing::Point(117, 0);
			this->RPN_label->Name = L"RPN_label";
			this->RPN_label->Size = System::Drawing::Size(307, 13);
			this->RPN_label->TabIndex = 25;
			this->RPN_label->Text = L"You are in RPN Mode. You must separate numbers with spaces";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(446, 329);
			this->Controls->Add(this->RPN_label);
			this->Controls->Add(this->DelimitButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->ReversePolishRadio);
			this->Controls->Add(this->InfixRadio);
			this->Controls->Add(this->DivideButton);
			this->Controls->Add(this->MinusButton);
			this->Controls->Add(this->RightParensButton);
			this->Controls->Add(this->DecimalButton);
			this->Controls->Add(this->EqualsButton);
			this->Controls->Add(this->MultiplyButton);
			this->Controls->Add(this->PlusButton);
			this->Controls->Add(this->LeftParensButton);
			this->Controls->Add(this->ThreeButton);
			this->Controls->Add(this->SixButton);
			this->Controls->Add(this->NineButton);
			this->Controls->Add(this->ZeroButton);
			this->Controls->Add(this->TwoButton);
			this->Controls->Add(this->FiveButton);
			this->Controls->Add(this->EightButton);
			this->Controls->Add(this->OneButton);
			this->Controls->Add(this->FourButton);
			this->Controls->Add(this->SevenButton);
			this->Controls->Add(this->DisplayLabel);
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		DelimitButton->Hide();
		RPN_label->Hide();
	}
	private: System::Void InfixRadio_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DelimitButton->Hide();
		RPN_label->Hide();
	}
	private: System::Void RPNRadio_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DelimitButton->Show();
		RPN_label->Show();
	}
	private: System::Void OneButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "1";
	}
	private: System::Void TwoButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "2";
	}
	private: System::Void ThreeButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "3";
	}
	private: System::Void FourButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "4";
	}
	private: System::Void FiveButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "5";
	}
	private: System::Void SixButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "6";
	}
	private: System::Void SevenButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "7";
	}
	private: System::Void EightButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "8";
	}
	private: System::Void NineButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "9";
	}
	private: System::Void ZeroButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "0";
	}
	private: System::Void LeftParensButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "(";
	}
	private: System::Void RightParensButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += ")";
	}
	private: System::Void DecimalButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += ".";
	}
	private: System::Void MultiplyButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "*";
	}
	private: System::Void DivideButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "/";
	}
	private: System::Void PlusButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "+";
	}
	private: System::Void MinusButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += "-";
	}
	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text = "";
	}
	private: System::Void Delimit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text += " ";
	}
	private: System::Void EqualsButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayLabel->Text = evaluate(msclr::interop::marshal_as<std::string>(DisplayLabel->Text), InfixRadio->Checked).ToString();
	}

	};
}
