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
	private: System::Windows::Forms::Button^ pay_button;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ refresh_button;



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
			this->pay_button = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->refresh_button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			// pay_button
			// 
			this->pay_button->Location = System::Drawing::Point(143, 284);
			this->pay_button->Name = L"pay_button";
			this->pay_button->Size = System::Drawing::Size(134, 23);
			this->pay_button->TabIndex = 7;
			this->pay_button->Text = L"Pay And Confirm";
			this->pay_button->UseVisualStyleBackColor = true;
			this->pay_button->Click += gcnew System::EventHandler(this, &payment::pay_button_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(417, 52);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(737, 211);
			this->dataGridView1->TabIndex = 8;
			// 
			// refresh_button
			// 
			this->refresh_button->Location = System::Drawing::Point(728, 284);
			this->refresh_button->Name = L"refresh_button";
			this->refresh_button->Size = System::Drawing::Size(134, 23);
			this->refresh_button->TabIndex = 9;
			this->refresh_button->Text = L"Refresh";
			this->refresh_button->UseVisualStyleBackColor = true;
			this->refresh_button->Click += gcnew System::EventHandler(this, &payment::refresh_button_Click);
			// 
			// payment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1190, 339);
			this->Controls->Add(this->refresh_button);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pay_button);
			this->Controls->Add(this->totalPrice_label);
			this->Controls->Add(this->listBox_billing);
			this->Controls->Add(this->label2);
			this->Name = L"payment";
			this->Text = L"payment";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: 

			void RefreshDataGridView() {
				try {
					// Ensure the connection is open
					EnsureSqlConnectionOpen();

					// Define your SELECT query
					String^ selectQuery = "SELECT * FROM Transactions";

					// Create a new SqlDataAdapter
					SqlDataAdapter^ adapter = gcnew SqlDataAdapter(selectQuery, connection);

					// Create a new DataTable to hold the data
					DataTable^ dataTable = gcnew DataTable();

					// Fill the DataTable with data from the SQL table
					adapter->Fill(dataTable);

					// Bind the DataTable to the DataGridView
					dataGridView1->DataSource = dataTable;
				}
				catch (Exception^ ex) {
					// Handle any exceptions
					MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

			
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



			// Connection string to your SQL Server database
			String^ connectionString = "Data Source=sairam\\SQLEXPRESS;Initial Catalog=dryfoodproject;Integrated Security=True;";
			// Create a SqlConnection
			SqlConnection^ connection = gcnew SqlConnection(connectionString);

			// Ensure connection to the SQL Server database
			void EnsureSqlConnectionOpen() {
				// Check if the connection is already open
				if (connection->State == ConnectionState::Open) {
					return; // Connection is already open
				}
				else {
					// Connection is not open, try to open it
					try {
						// Set the connection string if it's not set already
						if (connection->ConnectionString == nullptr || connection->ConnectionString->Trim()->Length == 0) {
							connection->ConnectionString = connectionString;
						}

						// Open the connection
						connection->Open();
					}
					catch (Exception^ ex) {
						// Connection could not be opened, handle the exception
						MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
			}




	
	

private: System::Void pay_button_Click(System::Object^ sender, System::EventArgs^ e) {

	// Get the customer name
	String^ customerName = "SaiRam"; // Assuming you want to use the hardcoded name

	// Get the item list from the listBox
	String^ itemList = "";
	for (int i = 0; i < listBox_billing->Items->Count; i++) {
		itemList += listBox_billing->Items[i]->ToString();
		if (i < listBox_billing->Items->Count - 1) {
			itemList += ", "; // Add comma between items
		}
	}

	// Get the total price from the label
	Decimal totalPrice = System::Convert::ToDecimal(totalPrice_label->Text);



	try {
		EnsureSqlConnectionOpen();

		// Create the INSERT query
		String^ query = "INSERT INTO Transactions (Customer_name, ItemList, Date_and_Time, Price_paid) VALUES (@CustomerName, @ItemList, @DateTime, @Price)";

		// Create a SqlCommand
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		// Add parameters to the command
		command->Parameters->AddWithValue("@CustomerName", customerName);
		command->Parameters->AddWithValue("@ItemList", itemList);
		command->Parameters->AddWithValue("@DateTime", DateTime::Now);
		command->Parameters->AddWithValue("@Price", totalPrice);

		// Execute the command
		command->ExecuteNonQuery();

		// Close the connection
		connection->Close();

		// Inform the user that the transaction has been successful
		MessageBox::Show("Transaction completed successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		RefreshDataGridView();
	}
	catch (Exception^ ex) {
		// Handle any exceptions
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	
}
private: System::Void refresh_button_Click(System::Object^ sender, System::EventArgs^ e) {
	 RefreshDataGridView();
}
};
}
