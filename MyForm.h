#pragma once
#include "MyForm1.h"
#include "Registration.h"
#include "bill.h"
namespace dryfruits {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

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
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ next_button;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;









	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->next_button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::InfoText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(211, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(285, 38);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Dryfruits Merchant";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// next_button
			// 
			this->next_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->next_button->Location = System::Drawing::Point(171, 322);
			this->next_button->Name = L"next_button";
			this->next_button->Size = System::Drawing::Size(103, 35);
			this->next_button->TabIndex = 4;
			this->next_button->Text = L"Login";
			this->next_button->UseVisualStyleBackColor = true;
			this->next_button->Click += gcnew System::EventHandler(this, &MyForm::next_button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(59, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(171, 175);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 22);
			this->textBox1->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(59, 228);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Mobile";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(171, 228);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(123, 22);
			this->textBox2->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(44, 370);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"If not registered. Then click here";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(273, 370);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 35);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(515, 396);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 50);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Close form";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(59, 284);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 29);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Address";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(180, 291);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(114, 22);
			this->textBox3->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(725, 551);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->next_button);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Coral;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void next_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ Name = textBox1->Text;
		String^ Mobile = textBox2->Text;
		String^ Address = textBox3->Text;

		String^ con = "Data Source=sairam\\SQLEXPRESS;Initial Catalog=dryfoodproject;Integrated Security=True;";
		SqlConnection sqconn(con);
		sqconn.Open();
		String^ sqlquery = "SELECT Name, Mobile, Address FROM Registration WHERE Name = @Name AND Mobile = @Mobile AND Address = @Address";
		SqlCommand cmd(sqlquery, % sqconn);

		cmd.Parameters->AddWithValue("@Name", Name);
		cmd.Parameters->AddWithValue("@Mobile", Mobile);
		cmd.Parameters->AddWithValue("@Address", Address);
		SqlDataReader^ read = cmd.ExecuteReader();

		if (Name->Length == 0 || Mobile->Length == 0 || Address->Length == 0)
		{
			MessageBox::Show("Please Enter the Name and Mobile and Address", "Name or Mobile or Address is missing", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox1->Clear();
			textBox2->Clear();
			textBox3->Clear();
		}

		else if (read->Read())
		{
			MyForm1^ sa = gcnew MyForm1();
			sa->ShowDialog();
			textBox1->Clear();
			textBox2->Clear();
			textBox3->Clear();
		}
		else
		{
			MessageBox::Show("Enter The Correct Name or Mobile or Address", "Rejected", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			textBox1->Clear();
			textBox2->Clear();
			textBox3->Clear();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Registration^ rm = gcnew Registration();
		rm->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

