#pragma once

namespace dryfruits {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for payment
	/// </summary>
	public ref class payment : public System::Windows::Forms::Form
	{
	public:
		payment(void)
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
		~payment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(payment::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(52, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"No.of kgs";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(220, 36);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(119, 23);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(362, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// payment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(555, 339);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"payment";
			this->Text = L"payment";
			this->Load += gcnew System::EventHandler(this, &payment::payment_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void payment_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
