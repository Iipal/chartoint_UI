#pragma once

namespace ctiui {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for crt_form
	/// </summary>
	public ref class crt_form : public System::Windows::Forms::Form {
	public:
		crt_form(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~crt_form() {
			if (components)
				delete components;
		}
	private: 
		System::Windows::Forms::TextBox^  char_textBox;
		System::Windows::Forms::TextBox^  int_textBox;
	private: System::Windows::Forms::Label^  sumbol_counter;
			 /// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void) {
			this->char_textBox = (gcnew System::Windows::Forms::TextBox());
			this->int_textBox = (gcnew System::Windows::Forms::TextBox());
			this->sumbol_counter = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// char_textBox
			// 
			this->char_textBox->Location = System::Drawing::Point(12, 12);
			this->char_textBox->Name = L"char_textBox";
			this->char_textBox->Size = System::Drawing::Size(260, 20);
			this->char_textBox->TabIndex = 0;
			this->char_textBox->TextChanged += gcnew System::EventHandler(this, &crt_form::char_textBox_TextChanged);
			// 
			// int_textBox
			// 
			this->int_textBox->Location = System::Drawing::Point(12, 38);
			this->int_textBox->Multiline = true;
			this->int_textBox->Name = L"int_textBox";
			this->int_textBox->ReadOnly = true;
			this->int_textBox->Size = System::Drawing::Size(290, 100);
			this->int_textBox->TabIndex = 1;
			this->int_textBox->TextChanged += gcnew System::EventHandler(this, &crt_form::int_textBox_TextChanged);
			// 
			// sumbol_counter
			// 
			this->sumbol_counter->AutoSize = true;
			this->sumbol_counter->Location = System::Drawing::Point(278, 15);
			this->sumbol_counter->Name = L"sumbol_counter";
			this->sumbol_counter->Size = System::Drawing::Size(29, 13);
			this->sumbol_counter->TabIndex = 2;
			this->sumbol_counter->Text = L"label";
			this->sumbol_counter->Click += gcnew System::EventHandler(this, &crt_form::sumbol_counter_Click);
			// 
			// crt_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(317, 150);
			this->Controls->Add(this->sumbol_counter);
			this->Controls->Add(this->int_textBox);
			this->Controls->Add(this->char_textBox);
			this->Name = L"win_form";
			this->Text = L"string to int";
			this->Load += gcnew System::EventHandler(this, &crt_form::crt_form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		Void crt_form_Load(Object^  sender, EventArgs^  e)
		{
			char_textBox->Text = "by _ipal";
		}

		Void char_textBox_TextChanged(Object^ sender, EventArgs^ e)
		{
			if (!String::IsNullOrEmpty(char_textBox->Text))
			{
				int *tempArr;

				tempArr = new int[char_textBox->TextLength];
				for (int i(0); i != char_textBox->TextLength; ++i)
				{
					tempArr[i] = char_textBox->Text[i];
					int_textBox->Clear();
				}
				sumbol_counter->Text = "";
				sumbol_counter->Text += char_textBox->TextLength;
				for(int i(0); i != char_textBox->TextLength; ++i)
					int_textBox->Text += tempArr[i].ToString() + " ";
			}
			else
			{
				sumbol_counter->Text = "";
				int_textBox->Clear();
			}
		}

		Void int_textBox_TextChanged(Object^  sender, EventArgs^  e) {}
	private: System::Void sumbol_counter_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
