#pragma once

namespace dryfruits {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
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
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	public:
		String^ con = "Data Source=sairam\\SQLEXPRESS;Initial Catalog=company;Integrated Security=True;Encrypt=False";

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(82, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(82, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mobile";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(144, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(144, 111);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(127, 22);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(157, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 32);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Registration::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(288, 211);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 32);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Registration::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(82, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Address";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(144, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 22);
			this->textBox3->TabIndex = 7;
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 290);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Registration";
			this->Text = L"Registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ Name = textBox1->Text;
		String^ Mobile = textBox2->Text;
		String^ Address = textBox3->Text;

		String^ con = "Data Source=sairam\\SQLEXPRESS;Initial Catalog=dryfoodproject;Integrated Security=True;";
		SqlConnection conn(con);
		conn.Open();
		String^ sqlquery = "Insert into Registration(Name,Mobile,Address) VALUES(@name,@Mobile,@Address);";
		SqlCommand cmd(sqlquery, % conn);

		cmd.Parameters->AddWithValue("@Name", Name);
		cmd.Parameters->AddWithValue("@Mobile", Mobile);
		cmd.Parameters->AddWithValue("@Address", Address);


		if (Name->Length == 0 || Mobile->Length == 0 || Address->Length == 0)
		{
			MessageBox::Show("Please Fill All Details", "Missing Details", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox1->Clear();
			textBox2->Clear();
			textBox3->Clear();
		}
		else
		{
			cmd.ExecuteNonQuery();
			conn.Close();
			MessageBox::Show("Registered Succesfully", "Registration Successfull", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			textBox1->Clear();
			textBox2->Clear();
			textBox3->Clear();

		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
