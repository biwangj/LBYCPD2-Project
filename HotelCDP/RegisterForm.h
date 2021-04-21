#pragma once


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
	/// Summary for MyForm3
	/// </summary>
	
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		RegisterForm(void)
		{
			InitializeComponent();
		}

		RegisterForm(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ NewUser;
	private: System::Windows::Forms::TextBox^ uname;

	private: System::Windows::Forms::TextBox^ pword;
	private: System::Windows::Forms::TextBox^ cpword;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ LoginBtn;
	private: System::Windows::Forms::Button^ back;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->NewUser = (gcnew System::Windows::Forms::Label());
			this->uname = (gcnew System::Windows::Forms::TextBox());
			this->pword = (gcnew System::Windows::Forms::TextBox());
			this->cpword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LoginBtn = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// NewUser
			// 
			this->NewUser->AutoSize = true;
			this->NewUser->BackColor = System::Drawing::Color::White;
			this->NewUser->Location = System::Drawing::Point(12, 97);
			this->NewUser->Name = L"NewUser";
			this->NewUser->Size = System::Drawing::Size(46, 13);
			this->NewUser->TabIndex = 2;
			this->NewUser->Text = L"Register";
			// 
			// uname
			// 
			this->uname->Location = System::Drawing::Point(154, 131);
			this->uname->Name = L"uname";
			this->uname->Size = System::Drawing::Size(182, 20);
			this->uname->TabIndex = 3;
			this->uname->TextChanged += gcnew System::EventHandler(this, &RegisterForm::uname_TextChanged);
			// 
			// pword
			// 
			this->pword->Location = System::Drawing::Point(154, 167);
			this->pword->Name = L"pword";
			this->pword->PasswordChar = '*';
			this->pword->Size = System::Drawing::Size(182, 20);
			this->pword->TabIndex = 4;
			this->pword->TextChanged += gcnew System::EventHandler(this, &RegisterForm::pword_TextChanged);
			// 
			// cpword
			// 
			this->cpword->Location = System::Drawing::Point(154, 203);
			this->cpword->Name = L"cpword";
			this->cpword->PasswordChar = '*';
			this->cpword->Size = System::Drawing::Size(182, 20);
			this->cpword->TabIndex = 5;
			this->cpword->TextChanged += gcnew System::EventHandler(this, &RegisterForm::cpword_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(93, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(95, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(57, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Confirm Password";
			this->label3->Click += gcnew System::EventHandler(this, &RegisterForm::label3_Click);
			// 
			// LoginBtn
			// 
			this->LoginBtn->Location = System::Drawing::Point(261, 250);
			this->LoginBtn->Name = L"LoginBtn";
			this->LoginBtn->Size = System::Drawing::Size(75, 23);
			this->LoginBtn->TabIndex = 9;
			this->LoginBtn->Text = L"Register";
			this->LoginBtn->UseVisualStyleBackColor = true;
			this->LoginBtn->Click += gcnew System::EventHandler(this, &RegisterForm::LoginBtn_Click);
			// 
			// back
			// 
			this->back->Location = System::Drawing::Point(154, 250);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(75, 23);
			this->back->TabIndex = 10;
			this->back->Text = L"Back";
			this->back->UseMnemonic = false;
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &RegisterForm::back_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(472, 352);
			this->Controls->Add(this->back);
			this->Controls->Add(this->LoginBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cpword);
			this->Controls->Add(this->pword);
			this->Controls->Add(this->uname);
			this->Controls->Add(this->NewUser);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"RegisterForm";
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}



#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=hoteldb;uid=root;password=admin1234";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);
private: System::Void LoginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Username = uname->Text;;
		String^ Password = pword->Text;;

		bool isValid = true;

		if (uname->Text->Trim()->Length <= 3) {
			MessageBox::Show("Username must be more than 3 characters. Try again", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			isValid = false;
		}

		if (pword->Text->Trim()->Length <= 3) {
			MessageBox::Show("Username must be more than 3 characters. Try again", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			isValid = false;
		}

		else if (pword->Text->Trim()->Length > 1) {
			if (cpword->Text->Trim() != pword->Text) {
				MessageBox::Show("Password doesn't match. Try again", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				isValid = false;
			}
		}

		if (isValid) {
			conn->Open();

			String^ cmdString = "INSERT INTO acct (username,wordpass) VALUES (@username,@wordpass)";

			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

			cmd->Parameters->AddWithValue("@username", Username);
			cmd->Parameters->AddWithValue("@wordpass", Password);

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
	}
	
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void uname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cpword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
	
}
private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
	uname->Clear();
	pword->Clear();
	cpword->Clear();
}
};
}
