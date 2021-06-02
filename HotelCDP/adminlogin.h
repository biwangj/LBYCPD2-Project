#pragma once
#include "AdminMenu.h"
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
	/// Summary for Admin
	/// </summary>
	public ref class adminlogin : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Form^ objs;
		adminlogin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		adminlogin(Form^ obj2)
		{
			obj = obj2;
			objs = obj2;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~adminlogin()
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
	private: System::Windows::Forms::TextBox^ AdminUser;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ AdminPass;


	private: System::Windows::Forms::Button^ EnterBtn;
	private: System::Windows::Forms::Button^ BackBtn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adminlogin::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AdminUser = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->AdminPass = (gcnew System::Windows::Forms::TextBox());
			this->EnterBtn = (gcnew System::Windows::Forms::Button());
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(-8, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(335, 149);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username";
			this->label1->Click += gcnew System::EventHandler(this, &adminlogin::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Login:";
			// 
			// AdminUser
			// 
			this->AdminUser->Location = System::Drawing::Point(111, 40);
			this->AdminUser->Name = L"AdminUser";
			this->AdminUser->Size = System::Drawing::Size(145, 20);
			this->AdminUser->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Password";
			// 
			// AdminPass
			// 
			this->AdminPass->Location = System::Drawing::Point(111, 71);
			this->AdminPass->Name = L"AdminPass";
			this->AdminPass->PasswordChar = '*';
			this->AdminPass->Size = System::Drawing::Size(145, 20);
			this->AdminPass->TabIndex = 6;
			// 
			// EnterBtn
			// 
			this->EnterBtn->Location = System::Drawing::Point(198, 104);
			this->EnterBtn->Name = L"EnterBtn";
			this->EnterBtn->Size = System::Drawing::Size(58, 23);
			this->EnterBtn->TabIndex = 7;
			this->EnterBtn->Text = L"Enter";
			this->EnterBtn->UseVisualStyleBackColor = true;
			this->EnterBtn->Click += gcnew System::EventHandler(this, &adminlogin::EnterBtn_Click);
			// 
			// BackBtn
			// 
			this->BackBtn->Location = System::Drawing::Point(111, 104);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(58, 23);
			this->BackBtn->TabIndex = 8;
			this->BackBtn->Text = L"Back";
			this->BackBtn->UseVisualStyleBackColor = true;
			this->BackBtn->Click += gcnew System::EventHandler(this, &adminlogin::BackBtn_Click);
			// 
			// adminlogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(314, 139);
			this->Controls->Add(this->BackBtn);
			this->Controls->Add(this->EnterBtn);
			this->Controls->Add(this->AdminPass);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->AdminUser);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"adminlogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &adminlogin::adminlogin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=hoteldb;uid=root;password=admin1234";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void EnterBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Username = AdminUser->Text;
	String^ Password = AdminPass->Text;

	conn->Open();
	String^ commandString = "SELECT PID FROM admin_details WHERE adminname = '" + Username + "' AND adminpass = '" + Password + "'";
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
			this->Hide();
			AdminMenu^ adm = gcnew AdminMenu(this);
			adm->ShowDialog();
		}
		else {
			MessageBox::Show("Invalid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed");
	}
	
}
private: System::Void BackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void adminlogin_Load(System::Object^ sender, System::EventArgs^ e) {
	AdminUser->Clear();
	AdminPass->Clear();

}
};
}
