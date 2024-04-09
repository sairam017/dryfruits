
#pragma once
#include "bill.h"
#include "Registration.h"
namespace dryfruits {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;

























	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ bill_button;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ addtocart_button;













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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bill_button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->addtocart_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(213, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(292, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"LIST OF DRYFRUITS ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(228, 16);
			this->label2->TabIndex = 27;
			this->label2->Text = L"pista                        100g=1pack=RS150";
			// 
			// bill_button
			// 
			this->bill_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bill_button->Location = System::Drawing::Point(585, 314);
			this->bill_button->Name = L"bill_button";
			this->bill_button->Size = System::Drawing::Size(107, 64);
			this->bill_button->TabIndex = 31;
			this->bill_button->Text = L"Go to bill";
			this->bill_button->UseVisualStyleBackColor = true;
			this->bill_button->Click += gcnew System::EventHandler(this, &MyForm1::bill_button_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(339, 211);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(250, 16);
			this->label3->TabIndex = 32;
			this->label3->Text = L"By the conformation Enter Mobile number";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(547, 250);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 22);
			this->textBox1->TabIndex = 33;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(386, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 34;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(223, 16);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Cashew nuts        100g-1pack=RS100";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(227, 16);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Angeer(Fings)     100g=1pack=RS200";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(29, 148);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(216, 16);
			this->label7->TabIndex = 37;
			this->label7->Text = L"Dates                    100g=1pack=RS80";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(31, 175);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(223, 16);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Walnuts                100g=1pack=RS250";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(31, 199);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(223, 16);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Almod                   100g=1pack=RS120";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(31, 225);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(219, 16);
			this->label10->TabIndex = 40;
			this->label10->Text = L"Peanut                   100g=1pack=RS60";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(31, 253);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(208, 16);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Rasins(kismis)    100g=1pack=160";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel1->Location = System::Drawing::Point(324, 54);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(9, 328);
			this->panel1->TabIndex = 42;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(363, 81);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(126, 25);
			this->label12->TabIndex = 43;
			this->label12->Text = L"Select Item ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(361, 139);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(144, 25);
			this->label13->TabIndex = 45;
			this->label13->Text = L"No of packets";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(547, 145);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(145, 22);
			this->textBox3->TabIndex = 46;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Pista", L"Cashew nuts", L"Angeer(Fings)", L"Dates",
					L"Walnuts", L"Almod", L"Peanut", L"Rasins(Kismis)"
			});
			this->comboBox1->Location = System::Drawing::Point(547, 85);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(145, 24);
			this->comboBox1->TabIndex = 47;
			// 
			// addtocart_button
			// 
			this->addtocart_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addtocart_button->Location = System::Drawing::Point(389, 314);
			this->addtocart_button->Name = L"addtocart_button";
			this->addtocart_button->Size = System::Drawing::Size(106, 60);
			this->addtocart_button->TabIndex = 48;
			this->addtocart_button->Text = L"Add to cart";
			this->addtocart_button->UseVisualStyleBackColor = true;
			this->addtocart_button->Click += gcnew System::EventHandler(this, &MyForm1::addtocart_button_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(776, 402);
			this->Controls->Add(this->addtocart_button);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->bill_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	

private: System::Void addtocart_button_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ item = comboBox1->Text;
	String^ No_of_packets = textBox1->Text;
	String^ mobile = textBox3->Text;

	try {
		String^ con = "Data Source=sairam\\SQLEXPRESS;Initial Catalog=dryfoodproject;Integrated Security=True;";
		SqlConnection conn(con);
		conn.Open();
		String^ sqlquery = "Insert into list(item,No_of_packets,mobile ) VALUES(@item,@No_of_packets,@Mobile);";
		SqlCommand cmd(sqlquery, % conn);

		cmd.Parameters->AddWithValue("@item", item);
		cmd.Parameters->AddWithValue("@No_of_packets", No_of_packets);
		cmd.Parameters->AddWithValue("@mobile", mobile);

		if (item->Length == 0 || No_of_packets->Length <= 0 || mobile->Length == 0) {
			MessageBox::Show("Please Fill All Details", "Missing Details", MessageBoxButtons::OK, MessageBoxIcon::Error);
			comboBox1->Items->Clear();
			textBox1->Clear();
			textBox3->Clear();
		}
		else {
			MessageBox::Show("Added Succesfully", "Added Successfull", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			cmd.ExecuteNonQuery();
			conn.Close();
			comboBox1->Items->Clear();
			textBox1->Clear();
			textBox3->Clear();
			this->Close();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Exception", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}


}
private: System::Void bill_button_Click(System::Object^ sender, System::EventArgs^ e) {
	bill^ bi = gcnew bill();
	bi->ShowDialog();
}
};
}
