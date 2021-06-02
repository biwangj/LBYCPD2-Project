#pragma once
#include "adminlogin.h"
#include "BookRoom.h"
#include "CheckOut.h"
#include "ViewBooking.h"
#include <string>
#include <vector>
#include <stdexcept>
#include <any>
#include <sstream>

namespace HotelCDP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
		Form^ objs;
		MenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		MenuForm(Form^ obj1)
		{
			obj = obj1;
			objs = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BackBtn;
	private: System::Windows::Forms::Button^ CheckIn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;







	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			this->CheckIn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// BackBtn
			// 
			this->BackBtn->ForeColor = System::Drawing::Color::Black;
			this->BackBtn->Location = System::Drawing::Point(131, 444);
			this->BackBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(100, 28);
			this->BackBtn->TabIndex = 6;
			this->BackBtn->Text = L"Back";
			this->BackBtn->UseVisualStyleBackColor = true;
			this->BackBtn->Click += gcnew System::EventHandler(this, &MenuForm::BackBtn_Click);
			// 
			// CheckIn
			// 
			this->CheckIn->ForeColor = System::Drawing::Color::Black;
			this->CheckIn->Location = System::Drawing::Point(429, 199);
			this->CheckIn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->CheckIn->Name = L"CheckIn";
			this->CheckIn->Size = System::Drawing::Size(172, 38);
			this->CheckIn->TabIndex = 7;
			this->CheckIn->Text = L"Book Room";
			this->CheckIn->UseVisualStyleBackColor = true;
			this->CheckIn->Click += gcnew System::EventHandler(this, &MenuForm::button1_Click);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(429, 268);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 38);
			this->button1->TabIndex = 8;
			this->button1->Text = L"View Bookings";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(429, 347);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 38);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Check Out";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(131, -89);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(803, 452);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1037, 542);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->CheckIn);
			this->Controls->Add(this->BackBtn);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Welcome";
			this->Load += gcnew System::EventHandler(this, &MenuForm::MenuForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=hoteldb;uid=root;password=admin1234";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		BookRoom^ bkroom= gcnew BookRoom();
		bkroom->Show();
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MenuForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		ViewBooking^ vbk = gcnew ViewBooking();
		vbk->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		CheckOut^ chkout = gcnew CheckOut();
		chkout->Show();
	}
};
}