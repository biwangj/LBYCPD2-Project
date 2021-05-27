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
	/// Summary for AddRoom
	/// </summary>
	public ref class AddRoom : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		AddRoom(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		AddRoom(Form^ obj1)
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
		~AddRoom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ roomlabel;
	private: System::Windows::Forms::TextBox^ roomnum;

	private: System::Windows::Forms::Label^ add2;




	private: System::Windows::Forms::Label^ add3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ rmstatus;
	private: System::Windows::Forms::TextBox^ rmstats;


	private: System::Windows::Forms::NumericUpDown^ quanti;
	private: System::Windows::Forms::RichTextBox^ descri;
	private: System::Windows::Forms::TextBox^ roomtyp;

	private: System::Windows::Forms::Label^ roomtypeee;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddRoom::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->roomlabel = (gcnew System::Windows::Forms::Label());
			this->roomnum = (gcnew System::Windows::Forms::TextBox());
			this->add2 = (gcnew System::Windows::Forms::Label());
			this->add3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rmstatus = (gcnew System::Windows::Forms::Label());
			this->rmstats = (gcnew System::Windows::Forms::TextBox());
			this->quanti = (gcnew System::Windows::Forms::NumericUpDown());
			this->descri = (gcnew System::Windows::Forms::RichTextBox());
			this->roomtyp = (gcnew System::Windows::Forms::TextBox());
			this->roomtypeee = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quanti))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-57, -15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(521, 379);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AddRoom::pictureBox1_Click);
			// 
			// roomlabel
			// 
			this->roomlabel->AutoSize = true;
			this->roomlabel->Location = System::Drawing::Point(69, 44);
			this->roomlabel->Name = L"roomlabel";
			this->roomlabel->Size = System::Drawing::Size(75, 13);
			this->roomlabel->TabIndex = 1;
			this->roomlabel->Text = L"Room Number";
			// 
			// roomnum
			// 
			this->roomnum->Location = System::Drawing::Point(181, 41);
			this->roomnum->Name = L"roomnum";
			this->roomnum->Size = System::Drawing::Size(194, 20);
			this->roomnum->TabIndex = 2;
			this->roomnum->TextChanged += gcnew System::EventHandler(this, &AddRoom::textBox1_TextChanged);
			// 
			// add2
			// 
			this->add2->AutoSize = true;
			this->add2->Location = System::Drawing::Point(69, 109);
			this->add2->Name = L"add2";
			this->add2->Size = System::Drawing::Size(77, 13);
			this->add2->TabIndex = 3;
			this->add2->Text = L"Guest Quantity";
			// 
			// add3
			// 
			this->add3->AutoSize = true;
			this->add3->Location = System::Drawing::Point(68, 195);
			this->add3->Name = L"add3";
			this->add3->Size = System::Drawing::Size(91, 13);
			this->add3->TabIndex = 6;
			this->add3->Text = L"Room Description";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(300, 319);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddRoom::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(181, 319);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddRoom::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(34, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Add Room:";
			// 
			// rmstatus
			// 
			this->rmstatus->AutoSize = true;
			this->rmstatus->Location = System::Drawing::Point(69, 147);
			this->rmstatus->Name = L"rmstatus";
			this->rmstatus->Size = System::Drawing::Size(82, 13);
			this->rmstatus->TabIndex = 10;
			this->rmstatus->Text = L"Occupied/Vacant";
			this->rmstatus->Click += gcnew System::EventHandler(this, &AddRoom::label2_Click);
			// 
			// rmstats
			// 
			this->rmstats->Location = System::Drawing::Point(181, 144);
			this->rmstats->Name = L"rmstats";
			this->rmstats->Size = System::Drawing::Size(194, 20);
			this->rmstats->TabIndex = 11;
			// 
			// quanti
			// 
			this->quanti->Location = System::Drawing::Point(181, 107);
			this->quanti->Name = L"quanti";
			this->quanti->Size = System::Drawing::Size(194, 20);
			this->quanti->TabIndex = 14;
			// 
			// descri
			// 
			this->descri->Location = System::Drawing::Point(181, 195);
			this->descri->Name = L"descri";
			this->descri->Size = System::Drawing::Size(194, 96);
			this->descri->TabIndex = 15;
			this->descri->Text = L"";
			// 
			// roomtyp
			// 
			this->roomtyp->Location = System::Drawing::Point(180, 75);
			this->roomtyp->Name = L"roomtyp";
			this->roomtyp->Size = System::Drawing::Size(194, 20);
			this->roomtyp->TabIndex = 17;
			// 
			// roomtypeee
			// 
			this->roomtypeee->AutoSize = true;
			this->roomtypeee->Location = System::Drawing::Point(68, 78);
			this->roomtypeee->Name = L"roomtypeee";
			this->roomtypeee->Size = System::Drawing::Size(65, 13);
			this->roomtypeee->TabIndex = 16;
			this->roomtypeee->Text = L"Room Type:";
			// 
			// AddRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(456, 354);
			this->Controls->Add(this->roomtyp);
			this->Controls->Add(this->roomtypeee);
			this->Controls->Add(this->descri);
			this->Controls->Add(this->quanti);
			this->Controls->Add(this->rmstats);
			this->Controls->Add(this->rmstatus);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->add3);
			this->Controls->Add(this->add2);
			this->Controls->Add(this->roomnum);
			this->Controls->Add(this->roomlabel);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AddRoom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddRoom";
			this->Load += gcnew System::EventHandler(this, &AddRoom::AddRoom_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quanti))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=hoteldb;uid=root;password=amen";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ rnum = roomnum->Text;;
		int rquan =Convert::ToInt32(quanti->Value);
		String^ rdesc = descri->Text;;
		String^ rmstat = rmstats->Text;
		String^ rmtype = roomtyp->Text;
		

		bool isValid = true;

		if (rnum->Trim()->Length >= 4) {
			MessageBox::Show("Room Number must be no more than 3 digits.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			isValid = false;
		}

		if (rquan>4) {
			MessageBox::Show("Room quantity must be no more than 4 people", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			isValid = false;
		}
		if (rmstat->Trim()->Length > 10) {
			MessageBox::Show("Room status can only be Vacant or Occupied.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			isValid = false;
		}


		if (isValid) {
			conn->Open();

			String^ cmdString = "INSERT INTO rooms (RoomNumber,RoomQuantity,RoomStatus,RoomType,RoomDescription) VALUES (@RoomNumber,@RoomQuantity,@RoomStatus,@RoomType,@RoomDescription)";

			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

			cmd->Parameters->AddWithValue("@RoomNumber", rnum);
			cmd->Parameters->AddWithValue("@RoomQuantity", rquan);
			cmd->Parameters->AddWithValue("@RoomDescription", rdesc);
			cmd->Parameters->AddWithValue("@RoomStatus", rmstat);
			cmd->Parameters->AddWithValue("@RoomType", rmtype);

			try
			{
				cmd->ExecuteNonQuery();
				MessageBox::Show("Room Successfully Added!", "Success!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				conn->Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Room was not added!");
			}
		}
	};
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddRoom_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}