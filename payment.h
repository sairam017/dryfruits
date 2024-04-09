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

	protected:


	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::ListBox^ listBox_billing;
	private: System::Windows::Forms::Label^ totalPrice_label;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox_billing = (gcnew System::Windows::Forms::ListBox());
			this->totalPrice_label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 3;
			// 
			// listBox_billing
			// 
			this->listBox_billing->FormattingEnabled = true;
			this->listBox_billing->ItemHeight = 16;
			this->listBox_billing->Location = System::Drawing::Point(61, 21);
			this->listBox_billing->Name = L"listBox_billing";
			this->listBox_billing->Size = System::Drawing::Size(281, 196);
			this->listBox_billing->TabIndex = 5;
			// 
			// totalPrice_label
			// 
			this->totalPrice_label->AutoSize = true;
			this->totalPrice_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->totalPrice_label->Location = System::Drawing::Point(119, 220);
			this->totalPrice_label->Name = L"totalPrice_label";
			this->totalPrice_label->Size = System::Drawing::Size(147, 32);
			this->totalPrice_label->TabIndex = 6;
			this->totalPrice_label->Text = L"Total price";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(143, 284);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Pay And Confirm";
			this->button1->UseVisualStyleBackColor = true;
			
			// 
			// payment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1190, 339);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->totalPrice_label);
			this->Controls->Add(this->listBox_billing);
			this->Controls->Add(this->label2);
			this->Name = L"payment";
			this->Text = L"payment";
			this->Load += gcnew System::EventHandler(this, &payment::payment_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: 

			
			
			void ReceiveDataFromMyForm1(System::Collections::Generic::List<System::String^>^ data){
			// Clear existing items
			listBox_billing->Items->Clear();

			// Add received data to listBox_billing
			for each (System::String ^ item in data)
			{
				listBox_billing->Items->Add(item);
			}
		}
			void printTotalpice(int total) {
				// Update the totalPrice_label text with the total price
				totalPrice_label->Text = total.ToString();
			}




	private: System::Void payment_Load(System::Object^ sender, System::EventArgs^ e) {


	}
	
};
}
