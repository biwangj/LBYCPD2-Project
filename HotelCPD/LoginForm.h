#pragma once
#include "RegisterForm.h"
#include "MenuForm.h"
#include "adminlogin.h"
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
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;






	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ QuitBtn;

	private: System::Windows::Forms::Button^ LoginBtn;
	private: System::Windows::Forms::Button^ NewBtn;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->QuitBtn = (gcnew System::Windows::Forms::Button());
			this->LoginBtn = (gcnew System::Windows::Forms::Button());
			this->NewBtn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(-171, -247);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(928, 793);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(104, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(104, 186);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// QuitBtn
			// 
			this->QuitBtn->Location = System::Drawing::Point(42, 291);
			this->QuitBtn->Name = L"QuitBtn";
			this->QuitBtn->Size = System::Drawing::Size(75, 23);
			this->QuitBtn->TabIndex = 5;
			this->QuitBtn->Text = L"Quit";
			this->QuitBtn->UseVisualStyleBackColor = true;
			this->QuitBtn->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// LoginBtn
			// 
			this->LoginBtn->Location = System::Drawing::Point(269, 236);
			this->LoginBtn->Name = L"LoginBtn";
			this->LoginBtn->Size = System::Drawing::Size(75, 23);
			this->LoginBtn->TabIndex = 6;
			this->LoginBtn->Text = L"Enter";
			this->LoginBtn->UseVisualStyleBackColor = true;
			this->LoginBtn->Click += gcnew System::EventHandler(this, &LoginForm::LoginBtn_Click);
			// 
			// NewBtn
			// 
			this->NewBtn->Location = System::Drawing::Point(162, 236);
			this->NewBtn->Name = L"NewBtn";
			this->NewBtn->Size = System::Drawing::Size(75, 23);
			this->NewBtn->TabIndex = 7;
			this->NewBtn->Text = L"New User";
			this->NewBtn->UseVisualStyleBackColor = true;
			this->NewBtn->Click += gcnew System::EventHandler(this, &LoginForm::NewBtn_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(165, 137);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(165, 183);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(162, 20);
			this->textBox2->TabIndex = 9;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(42, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Admin";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click_1);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(472, 353);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->NewBtn);
			this->Controls->Add(this->LoginBtn);
			this->Controls->Add(this->QuitBtn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=hoteldb;uid=root;password=amen";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		textBox2->Clear();

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	
	private: System::Void LoginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Username = textBox1->Text;
		String^ Password = textBox2->Text;
		
		conn->Open();
		String^ commandString = "SELECT PID FROM acct WHERE username = '" + Username + "' AND wordpass = '" + Password + "'";
		MySqlCommand^ command = gcnew MySqlCommand(commandString, conn);
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(commandString, conn);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		MySqlDataReader^ datat = command->ExecuteReader();

		try
		{
			if (datat->Read()) {
			
				int login = (int)data->Rows[0]->ItemArray[0];
				MessageBox::Show("Login Successful", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				MenuForm^ mnu = gcnew MenuForm();
				mnu->ShowDialog();
			}
			else {
				MessageBox::Show("Invalid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			conn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed");
		}
		

		
	}
	private: System::Void NewBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		RegisterForm^ rega = gcnew RegisterForm();
		rega->ShowDialog();
		}


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	adminlogin^ menus = gcnew adminlogin();
	menus->Show();
}
};
	}
	
