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
	/// Summary for BookRoom
	/// </summary>
	public ref class BookRoom : public System::Windows::Forms::Form
	{
		Double SingleRoom = 2000;
		Double DoubleRoom = 4000;
		Double FamilyRoom = 5000;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

		   Double Totals;
	public:
		BookRoom(void)
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
		~BookRoom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ fname;
	private: System::Windows::Forms::TextBox^ lname;






	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::ComboBox^ cctype;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DateTimePicker^ datein;
	private: System::Windows::Forms::DateTimePicker^ dateout;
	private: System::Windows::Forms::TextBox^ expdate;


	private: System::Windows::Forms::Label^ rnum;
	private: System::Windows::Forms::TextBox^ roomnum;




	private: System::Windows::Forms::TextBox^ ccnum;
	private: System::Windows::Forms::TextBox^ ccode;
	private: System::Windows::Forms::TextBox^ mnum;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ rmstats;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ rmtyp;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ btotal;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookRoom::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->fname = (gcnew System::Windows::Forms::TextBox());
			this->lname = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cctype = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->datein = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateout = (gcnew System::Windows::Forms::DateTimePicker());
			this->expdate = (gcnew System::Windows::Forms::TextBox());
			this->rnum = (gcnew System::Windows::Forms::Label());
			this->roomnum = (gcnew System::Windows::Forms::TextBox());
			this->ccnum = (gcnew System::Windows::Forms::TextBox());
			this->ccode = (gcnew System::Windows::Forms::TextBox());
			this->mnum = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->rmstats = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->rmtyp = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btotal = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-255, -102);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1476, 704);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(433, 25);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(572, 453);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BookRoom::dataGridView1_CellClick);
			this->dataGridView1->Click += gcnew System::EventHandler(this, &BookRoom::dataGridView1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter Details:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 59);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"First Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 146);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Mobile Number:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 101);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Last Name:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 230);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 17);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Date In:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 272);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Date Out:";
			// 
			// fname
			// 
			this->fname->Location = System::Drawing::Point(151, 55);
			this->fname->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(207, 22);
			this->fname->TabIndex = 8;
			// 
			// lname
			// 
			this->lname->Location = System::Drawing::Point(151, 97);
			this->lname->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(207, 22);
			this->lname->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 313);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Credit Card Type:";
			// 
			// cctype
			// 
			this->cctype->FormattingEnabled = true;
			this->cctype->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Visa", L"Mastercard" });
			this->cctype->Location = System::Drawing::Point(151, 309);
			this->cctype->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cctype->Name = L"cctype";
			this->cctype->Size = System::Drawing::Size(207, 24);
			this->cctype->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 353);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 17);
			this->label8->TabIndex = 16;
			this->label8->Text = L"CC Number:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 389);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 17);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Expiry Date:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 436);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 17);
			this->label10->TabIndex = 20;
			this->label10->Text = L"CVC Code:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(259, 505);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Check In!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BookRoom::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 505);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BookRoom::button2_Click);
			// 
			// datein
			// 
			this->datein->Location = System::Drawing::Point(151, 226);
			this->datein->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->datein->Name = L"datein";
			this->datein->Size = System::Drawing::Size(207, 22);
			this->datein->TabIndex = 25;
			this->datein->ValueChanged += gcnew System::EventHandler(this, &BookRoom::dateTimePicker2_ValueChanged);
			// 
			// dateout
			// 
			this->dateout->Location = System::Drawing::Point(151, 267);
			this->dateout->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dateout->Name = L"dateout";
			this->dateout->Size = System::Drawing::Size(207, 22);
			this->dateout->TabIndex = 26;
			// 
			// expdate
			// 
			this->expdate->Location = System::Drawing::Point(151, 389);
			this->expdate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->expdate->Name = L"expdate";
			this->expdate->Size = System::Drawing::Size(207, 22);
			this->expdate->TabIndex = 27;
			// 
			// rnum
			// 
			this->rnum->AutoSize = true;
			this->rnum->Location = System::Drawing::Point(16, 186);
			this->rnum->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->rnum->Name = L"rnum";
			this->rnum->Size = System::Drawing::Size(103, 17);
			this->rnum->TabIndex = 30;
			this->rnum->Text = L"Room Number:";
			// 
			// roomnum
			// 
			this->roomnum->Location = System::Drawing::Point(151, 182);
			this->roomnum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->roomnum->Name = L"roomnum";
			this->roomnum->Size = System::Drawing::Size(207, 22);
			this->roomnum->TabIndex = 31;
			this->roomnum->TextChanged += gcnew System::EventHandler(this, &BookRoom::roomnum_TextChanged);
			// 
			// ccnum
			// 
			this->ccnum->Location = System::Drawing::Point(151, 350);
			this->ccnum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ccnum->Name = L"ccnum";
			this->ccnum->Size = System::Drawing::Size(207, 22);
			this->ccnum->TabIndex = 36;
			// 
			// ccode
			// 
			this->ccode->Location = System::Drawing::Point(151, 432);
			this->ccode->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ccode->Name = L"ccode";
			this->ccode->Size = System::Drawing::Size(207, 22);
			this->ccode->TabIndex = 37;
			// 
			// mnum
			// 
			this->mnum->Location = System::Drawing::Point(151, 140);
			this->mnum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->mnum->Name = L"mnum";
			this->mnum->Size = System::Drawing::Size(207, 22);
			this->mnum->TabIndex = 38;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(16, 476);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(93, 17);
			this->label11->TabIndex = 39;
			this->label11->Text = L"Room Status:";
			// 
			// rmstats
			// 
			this->rmstats->Location = System::Drawing::Point(151, 473);
			this->rmstats->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rmstats->Name = L"rmstats";
			this->rmstats->Size = System::Drawing::Size(207, 22);
			this->rmstats->TabIndex = 40;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(751, 501);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(85, 17);
			this->label12->TabIndex = 41;
			this->label12->Text = L"Room Type:";
			// 
			// rmtyp
			// 
			this->rmtyp->Location = System::Drawing::Point(845, 497);
			this->rmtyp->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rmtyp->Name = L"rmtyp";
			this->rmtyp->Size = System::Drawing::Size(159, 22);
			this->rmtyp->TabIndex = 42;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(429, 501);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(81, 17);
			this->label13->TabIndex = 43;
			this->label13->Text = L"Room Cost:";
			// 
			// btotal
			// 
			this->btotal->Location = System::Drawing::Point(536, 497);
			this->btotal->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btotal->Name = L"btotal";
			this->btotal->Size = System::Drawing::Size(159, 22);
			this->btotal->TabIndex = 44;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(497, 230);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(99, 42);
			this->dataGridView2->TabIndex = 45;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BookRoom::dataGridView2_CellContentClick);
			// 
			// BookRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1037, 542);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->btotal);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->rmtyp);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->rmstats);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->mnum);
			this->Controls->Add(this->ccode);
			this->Controls->Add(this->ccnum);
			this->Controls->Add(this->roomnum);
			this->Controls->Add(this->rnum);
			this->Controls->Add(this->expdate);
			this->Controls->Add(this->dateout);
			this->Controls->Add(this->datein);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->cctype);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lname);
			this->Controls->Add(this->fname);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"BookRoom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Book Room";
			this->Load += gcnew System::EventHandler(this, &BookRoom::BookRoom_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=hoteldb;uid=root;password=admin1234";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);
		void populateTable() {
			try {
				conn->Open();
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM rooms WHERE RoomStatus = 'Vacant' ", conn);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				dataGridView1->DataSource = dt;
				conn->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("Failed to read data.");
			}
		}
		private: System::Void datein_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			DateTime dbTime1 = Convert::ToDateTime(datein->Text); //DateIn
			DateTime dbTime2 = Convert::ToDateTime(dateout->Text);//DateOut
			

		}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   private: System::Void roomcost() {
		   if (rmtyp->Text == "Single")
		   {
			   Totals = SingleRoom;
			   btotal->Text = String::Format("{0:c2}", Totals);
		   }

		   if (rmtyp->Text == "Double")
		   {
			   Totals = DoubleRoom;
			   btotal->Text = String::Format("{0:c2}", Totals);
		   }

		   if (rmtyp->Text == "Family")
		   {
			   Totals = FamilyRoom;
			   btotal->Text = String::Format("{0:c2}", Totals);
		   }
	   }
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ currPID = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	try {
		conn->Open();
		roomnum->Text = "";
		rmstats->Text = "";
		btotal->Text = "";
		rmtyp->Text = "";
		btotal->Text = "";
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT RoomNumber, RoomStatus, RoomType FROM rooms WHERE PID = " + currPID, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		rmstats -> Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[3]->Value->ToString();
		roomnum->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
		rmtyp->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[4]->Value->ToString();
		roomcost();
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to read data.");
	}

}
private: System::Void BookRoom_Load(System::Object^ sender, System::EventArgs^ e) {
	try {
		conn->Open();
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM rooms WHERE RoomStatus = 'Vacant' ", conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to read data.");
	}
}
void datebook() {
	 DateTime dbTime1 = Convert::ToDateTime(datein->Text);
	DateTime dbTime2 = Convert::ToDateTime(dateout->Text);
		   try {
			   conn->Open();
			   MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM bookroom WHERE DateIn = DateOut = "+dbTime1 +dbTime2, conn);
			   DataTable^ dt = gcnew DataTable();
			   adapter->Fill(dt);
			   dataGridView2->DataSource = dt;
			   conn->Close();
		   }
		   catch (Exception^ e) {
			   MessageBox::Show("Failed to read data.");
		   }
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	datebook();
	String^ currPID = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	String^ roomnums= roomnum->Text;
	String^ fnames = fname -> Text;
	String^ lnames = lname->Text;
	String^ mnums = mnum->Text;
	String^ indate = datein->Text;
	String^ outdate = dateout->Text;
	String^ cctypes = cctype->Text;
	String^ ccnums = ccnum->Text;
	String^ expd = expdate->Text;
	String^ codec = ccode->Text;
	String^ rmstat = rmstats->Text;
	String^ rmtype = rmtyp->Text;
	DateTime dbTime1 = Convert::ToDateTime(datein->Text);
	DateTime dbTime2 = Convert::ToDateTime(dateout->Text);
	String^ timein = Convert::ToString(Convert::ToInt64(dbTime1));
	String^ timeout = Convert::ToString(Convert::ToInt64(dbTime2));

	bool isValid = true;
	conn->Open();
	if (rmstat == "Occupied") {
		MessageBox::Show("Room is already booked.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		isValid = false;
	}
	//if (timein == "SELECT * FROM bookroom WHERE DateIn = " + dbTime1 , conn) {
	//	MessageBox::Show("Room is already booked.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	//	isValid = false;
	//}
	//if (timeout == "SELECT * FROM bookroom WHERE DateOut = " + dbTime2, conn) {
	//	MessageBox::Show("Room is already booked.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	//	isValid = false;
	//}
	if (ccnums->Trim()->Length > 16) {
		MessageBox::Show("Credit Card number is invalid.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		isValid = false;
	}
	if (isValid == true) {
		String^ cmdString = "INSERT INTO bookroom (FirstName, LastName, MobileNumber, RoomNumber, DateIn, DateOut, CreditCardType, CreditCard, ExipryDate, CVCCode, RoomType) VALUES (@FirstName, @LastName, @MobileNumber, @RoomNumber, @DateIn, @DateOut, @CreditCardType, @CreditCard, @ExipryDate, @CVCCode, @RoomType)";

		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

		cmd->Parameters->AddWithValue("@FirstName", fnames);
		cmd->Parameters->AddWithValue("@LastName", lnames);
		cmd->Parameters->AddWithValue("@MobileNumber", mnums);
		cmd->Parameters->AddWithValue("@RoomNumber", roomnums);
		cmd->Parameters->AddWithValue("@DateIn", indate);
		cmd->Parameters->AddWithValue("@DateOut", outdate);
		cmd->Parameters->AddWithValue("@CreditCardType", cctypes);
		cmd->Parameters->AddWithValue("@CreditCard", ccnums);
		cmd->Parameters->AddWithValue("@ExipryDate", expd);
		cmd->Parameters->AddWithValue("@CVCCode", codec);
		cmd->Parameters->AddWithValue("@RoomType", rmtype);

		try
		{
			MySqlCommand^ cmd1 = gcnew MySqlCommand("UPDATE rooms SET RoomStatus= 'Occupied' WHERE PID = " + currPID, conn);
			cmd1->ExecuteNonQuery();
			cmd->ExecuteNonQuery();
			MessageBox::Show("Successfully Booked!", "Success!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			conn->Close();
			populateTable();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Faield to Book!");
		}

	}
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void roomnum_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
};

