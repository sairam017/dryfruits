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
	/// Summary for bill
	/// </summary>
	public ref class bill : public System::Windows::Forms::Form
	{
	public:
		bill(void)
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
		~bill()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(31, 39);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(487, 202);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &bill::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(354, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bill and Related details of Customer";
			// 
			// bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(560, 253);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"bill";
			this->Text = L"bill";
			this->Load += gcnew System::EventHandler(this, &bill::bill_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		void loaddata()
		{
			String^ conn = "Data Source=sairam\\SQLEXPRESS;Initial Catalog=dryfoodproject;Integrated Security=True;";
			SqlConnection sqconn(conn);
			sqconn.Open();
			String^ sqlq = " SELECT * FROM list;";
			SqlCommand^ cmd = gcnew SqlCommand(sqlq, % sqconn);
			SqlDataAdapter^ da = gcnew 	SqlDataAdapter();
			da->SelectCommand = cmd;
			DataTable^ dbt = gcnew  DataTable();
			da->Fill(dbt);
			BindingSource^ bsource = gcnew BindingSource();
			bsource->DataSource = dbt;
			dataGridView1->DataSource = bsource;
			sqconn.Close();
		}
		private: System::Void dataGridView1_CellContentClick(System::Object ^ sender, System::Windows::Forms::DataGridViewCellEventArgs ^ e) {


		}
		private: System::Void bill_Load(System::Object ^ sender, System::EventArgs ^ e) {
			loaddata();
		}
		};
	}
