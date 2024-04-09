
#pragma once
#include "bill.h"
#include "Registration.h"
#include "CartItem.h"
#include "payment.h"
#include "Calculation.h"

namespace dryfruits {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

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



	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::ListBox^ cart_listBox;
	private: System::Windows::Forms::Label^ customerName_label;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ price_label;
	private: System::Windows::Forms::Label^ TotalPricelabel;
	private: System::Windows::Forms::PictureBox^ AddCartpictureBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bill_button = (gcnew System::Windows::Forms::Button());
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->cart_listBox = (gcnew System::Windows::Forms::ListBox());
			this->customerName_label = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->price_label = (gcnew System::Windows::Forms::Label());
			this->TotalPricelabel = (gcnew System::Windows::Forms::Label());
			this->AddCartpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCartpictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->label2->Location = System::Drawing::Point(28, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(228, 16);
			this->label2->TabIndex = 27;
			this->label2->Text = L"pista                        100g=1pack=RS150";
			// 
			// bill_button
			// 
			this->bill_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bill_button->Location = System::Drawing::Point(1041, 301);
			this->bill_button->Name = L"bill_button";
			this->bill_button->Size = System::Drawing::Size(107, 64);
			this->bill_button->TabIndex = 31;
			this->bill_button->Text = L"Go to bill";
			this->bill_button->UseVisualStyleBackColor = true;
			this->bill_button->Click += gcnew System::EventHandler(this, &MyForm1::bill_button_Click);
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
			this->label12->Location = System::Drawing::Point(379, 85);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(126, 25);
			this->label12->TabIndex = 43;
			this->label12->Text = L"Select Item ";
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
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// cart_listBox
			// 
			this->cart_listBox->FormattingEnabled = true;
			this->cart_listBox->ItemHeight = 16;
			this->cart_listBox->Location = System::Drawing::Point(927, 45);
			this->cart_listBox->Name = L"cart_listBox";
			this->cart_listBox->Size = System::Drawing::Size(308, 196);
			this->cart_listBox->TabIndex = 49;
			// 
			// customerName_label
			// 
			this->customerName_label->AutoSize = true;
			this->customerName_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerName_label->Location = System::Drawing::Point(518, 321);
			this->customerName_label->Name = L"customerName_label";
			this->customerName_label->Size = System::Drawing::Size(174, 25);
			this->customerName_label->TabIndex = 50;
			this->customerName_label->Text = L"Custormer Name";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(571, 154);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(90, 22);
			this->numericUpDown1->TabIndex = 51;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm1::numericUpDown1_ValueChanged);
			// 
			// price_label
			// 
			this->price_label->AutoSize = true;
			this->price_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price_label->Location = System::Drawing::Point(542, 199);
			this->price_label->Name = L"price_label";
			this->price_label->Size = System::Drawing::Size(141, 25);
			this->price_label->TabIndex = 52;
			this->price_label->Text = L"Product Price";
			this->price_label->Click += gcnew System::EventHandler(this, &MyForm1::price_label_Click);
			// 
			// TotalPricelabel
			// 
			this->TotalPricelabel->AutoSize = true;
			this->TotalPricelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TotalPricelabel->Location = System::Drawing::Point(1007, 253);
			this->TotalPricelabel->Name = L"TotalPricelabel";
			this->TotalPricelabel->Size = System::Drawing::Size(116, 25);
			this->TotalPricelabel->TabIndex = 53;
			this->TotalPricelabel->Text = L"Total Price";
			this->TotalPricelabel->Click += gcnew System::EventHandler(this, &MyForm1::TotalPricelabel_Click);
			// 
			// AddCartpictureBox
			// 
			this->AddCartpictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddCartpictureBox.Image")));
			this->AddCartpictureBox->Location = System::Drawing::Point(768, 120);
			this->AddCartpictureBox->Name = L"AddCartpictureBox";
			this->AddCartpictureBox->Size = System::Drawing::Size(100, 89);
			this->AddCartpictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AddCartpictureBox->TabIndex = 54;
			this->AddCartpictureBox->TabStop = false;
			this->AddCartpictureBox->Click += gcnew System::EventHandler(this, &MyForm1::AddCartpictureBox_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(91, 293);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 89);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1257, 402);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->AddCartpictureBox);
			this->Controls->Add(this->TotalPricelabel);
			this->Controls->Add(this->price_label);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->customerName_label);
			this->Controls->Add(this->cart_listBox);
			this->Controls->Add(this->comboBox1);
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
			this->Controls->Add(this->bill_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCartpictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		public: void customerName(String^ Name) {

			customerName_label->Text = Name;

		}
		

		// List to hold items in the cart
		List<CartItem^>^ cartItems = gcnew List<CartItem^>();

		

		int CalculateTotalPrice(List<CartItem^>^ cartItems) {

			int totalPrice = 0;

			for each (CartItem ^ item in cartItems) {
				totalPrice += item->price;
			}
			return totalPrice;
	
		}

	
		void UpdateCartDisplay() {
			// Clear the existing items from the ListBox
			cart_listBox->Items->Clear();

			// Add the items in the cart to the ListBox
			for each (CartItem ^ item in cartItems) {
				// Format the item string as "item_name - quantity"
				String^ itemString = item->itemName + " - " + item->quantity.ToString() +"  price::" + item->price.ToString();

				// Add the formatted item string to the ListBox
				cart_listBox->Items->Add(itemString);
			}
		}




private: System::Void bill_button_Click(System::Object^ sender, System::EventArgs^ e) {

	


	// Get the instance of billing_dform
     payment^ billingForm = gcnew payment();

	 //Sending Customer Name

	 billingForm->customerName(customerName_label->Text);

	// Get data from MyForm1's listBox
	List<System::String^>^ listBoxData = gcnew List<System::String^>();

	for each (System::Object ^ item in cart_listBox->Items)
	{
		listBoxData->Add(item->ToString());
	}

	// Pass the data to billing_dform
	billingForm->ReceiveDataFromMyForm1(listBoxData);



	int totalprice = CalculateTotalPrice(cartItems);
	// Print the total price to the console
	Console::WriteLine("Total Price: " + totalprice);


	billingForm->printTotalpice(totalprice);

	// Show the billing form
	billingForm->Show();
}

private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	// Create an instance of the Calculation class
	Calculation^ calculator = gcnew Calculation();

	// Get the selected item from the ComboBox
	String^ selectedItem = comboBox1->SelectedItem->ToString();

	// Get the quantity from the NumericUpDown control
	int quantity = (int)numericUpDown1->Value;

	// Calculate the total price of the selected item using the CalculateItemTotal method
	int totalPrice = calculator->CalculateItemTotal(selectedItem, quantity);

	// Update the label to display the total price
	price_label->Text =  totalPrice.ToString();
}

private: System::Void price_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TotalPricelabel_Click(System::Object^ sender, System::EventArgs^ e) {


	int totalprice = CalculateTotalPrice(cartItems);
	// Print the total price to the console
	Console::WriteLine("Total Price: " + totalprice);


	TotalPricelabel->Text = System::Convert::ToString(totalprice);
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Create an instance of the Calculation class
	Calculation^ calculator = gcnew Calculation();

	// Get the selected item from the ComboBox
	String^ selectedItem = comboBox1->SelectedItem->ToString();

	// Get the quantity from the NumericUpDown control
	int quantity = (int)numericUpDown1->Value;

	// Calculate the total price of the selected item using the CalculateItemTotal method
	int totalPrice = calculator->CalculateItemTotal(selectedItem, quantity);

	// Update the label to display the total price
	price_label->Text = totalPrice.ToString();
}


private: System::Void AddCartpictureBox_Click(System::Object^ sender, System::EventArgs^ e) {

	// Get the selected item from the ComboBox
	String^ selectedItem = comboBox1->SelectedItem->ToString();

	// Get the quantity from the NumericUpDown control
	int quantity = (int)numericUpDown1->Value;

	// Get the selected item from the ComboBox
	int price = System::Convert::ToInt32(price_label->Text);

	// Add the item to the cart
	CartItem^ newItem = gcnew CartItem();
	newItem->itemName = selectedItem;
	newItem->quantity = quantity;
	newItem->price = price;
	cartItems->Add(newItem);

	// Update the ListView or DataGridView
	UpdateCartDisplay();
}
};
}
