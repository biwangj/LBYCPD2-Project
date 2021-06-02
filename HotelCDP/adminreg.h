#pragma once
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
	/// Summary for adminreg
	/// </summary>
	public ref class adminreg : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		adminreg(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		adminreg(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~adminreg()
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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ adminbox1;
	private: System::Windows::Forms::TextBox^ adminbox2;
	private: System::Windows::Forms::TextBox^ adminbox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ adminreg1;
	private: System::Windows::Forms::Button^ adminreg3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adminreg::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->adminbox1 = (gcnew System::Windows::Forms::TextBox());
			this->adminbox2 = (gcnew System::Windows::Forms::TextBox());
			this->adminbox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->adminreg1 = (gcnew System::Windows::Forms::Button());
			this->adminreg3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(521, 373);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(117, 101);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(120, 159);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(69, 217);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Confirm Password";
			// 
			// adminbox1
			// 
			this->adminbox1->Location = System::Drawing::Point(199, 97);
			this->adminbox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->adminbox1->Name = L"adminbox1";
			this->adminbox1->Size = System::Drawing::Size(205, 22);
			this->adminbox1->TabIndex = 4;
			// 
			// adminbox2
			// 
			this->adminbox2->Location = System::Drawing::Point(199, 155);
			this->adminbox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->adminbox2->Name = L"adminbox2";
			this->adminbox2->Size = System::Drawing::Size(205, 22);
			this->adminbox2->TabIndex = 5;
			// 
			// adminbox3
			// 
			this->adminbox3->Location = System::Drawing::Point(199, 213);
			this->adminbox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->adminbox3->Name = L"adminbox3";
			this->adminbox3->Size = System::Drawing::Size(205, 22);
			this->adminbox3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 58);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Register:";
			// 
			// adminreg1
			// 
			this->adminreg1->Location = System::Drawing::Point(323, 257);
			this->adminreg1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->adminreg1->Name = L"adminreg1";
			this->adminreg1->Size = System::Drawing::Size(83, 31);
			this->adminreg1->TabIndex = 9;
			this->adminreg1->Text = L"Enter";
			this->adminreg1->UseVisualStyleBackColor = true;
			this->adminreg1->Click += gcnew System::EventHandler(this, &adminreg::adminreg1_Click);
			// 
			// adminreg3
			// 
			this->adminreg3->Location = System::Drawing::Point(44, 300);
			this->adminreg3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->adminreg3->Name = L"adminreg3";
			this->adminreg3->Size = System::Drawing::Size(83, 31);
			this->adminreg3->TabIndex = 10;
			this->adminreg3->Text = L"Back";
			this->adminreg3->UseVisualStyleBackColor = true;
			this->adminreg3->Click += gcnew System::EventHandler(this, &adminreg::adminreg3_Click);
			// 
			// adminreg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 358);
			this->Controls->Add(this->adminreg3);
			this->Controls->Add(this->adminreg1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->adminbox3);
			this->Controls->Add(this->adminbox2);
			this->Controls->Add(this->adminbox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"adminreg";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin Register";
			this->Load += gcnew System::EventHandler(this, &adminreg::adminreg_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=hoteldb;uid=root;password=admin1234";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);
	private: System::Void adminreg_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void adminreg1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Username = adminbox1->Text;;
		String^ Password = adminbox2->Text;;

		bool isValid = true;

		if (adminbox1->Text->Trim()->Length <= 3) {
			MessageBox::Show("Username must be more than 3 characters. Try again", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			isValid = false;
		}

		if (adminbox2->Text->Trim()->Length <= 3) {
			MessageBox::Show("Username must be more than 3 characters. Try again", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			isValid = false;
		}

		else if (adminbox2->Text->Trim()->Length > 1) {
			if (adminbox3->Text->Trim() != adminbox2->Text) {
				MessageBox::Show("Password doesn't match. Try again", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				isValid = false;
			}
		}

		if (isValid) {
			conn->Open();

			String^ cmdString = "INSERT INTO admin_details (adminname,adminpass) VALUES (@adminname,@adminpass)";

			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

			cmd->Parameters->AddWithValue("@adminname", Username);
			cmd->Parameters->AddWithValue("@adminpass", Password);

			try
			{
				cmd->ExecuteNonQuery();
				MessageBox::Show("Registration Successful", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				conn->Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Registration failed");
			}
		}
	};
	private: System::Void adminreg3_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
