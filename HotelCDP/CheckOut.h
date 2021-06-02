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
	/// Summary for CheckOut
	/// </summary>
	public ref class CheckOut : public System::Windows::Forms::Form
	{
		Double SingleRoom = 2000;
		Double DoubleRoom = 4000;
		Double FamilyRoom = 5000;
		Double Totals;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ btotal;

	private: System::Windows::Forms::TextBox^ roomtype;

		   
	public:
		CheckOut(void)
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
		~CheckOut()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ mnum;
	protected:
	private: System::Windows::Forms::TextBox^ ccode;
	private: System::Windows::Forms::TextBox^ ccnum;




	private: System::Windows::Forms::TextBox^ expdate;
	private: System::Windows::Forms::DateTimePicker^ dateout;
	private: System::Windows::Forms::DateTimePicker^ datein;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ cctype;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ lname;
	private: System::Windows::Forms::TextBox^ fname;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;



	private: System::Windows::Forms::TextBox^ cvcode;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ text;


	private: System::Windows::Forms::Label^ label11;


	private: System::Windows::Forms::TextBox^ txtNoOFdays;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CheckOut::typeid));
			this->mnum = (gcnew System::Windows::Forms::TextBox());
			this->ccode = (gcnew System::Windows::Forms::TextBox());
			this->ccnum = (gcnew System::Windows::Forms::TextBox());
			this->expdate = (gcnew System::Windows::Forms::TextBox());
			this->dateout = (gcnew System::Windows::Forms::DateTimePicker());
			this->datein = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cctype = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lname = (gcnew System::Windows::Forms::TextBox());
			this->fname = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->cvcode = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->text = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtNoOFdays = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->roomtype = (gcnew System::Windows::Forms::TextBox());
			this->btotal = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// mnum
			// 
			this->mnum->Location = System::Drawing::Point(167, 148);
			this->mnum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->mnum->Name = L"mnum";
			this->mnum->Size = System::Drawing::Size(207, 22);
			this->mnum->TabIndex = 65;
			this->mnum->TextChanged += gcnew System::EventHandler(this, &CheckOut::mnum_TextChanged);
			// 
			// ccode
			// 
			this->ccode->Location = System::Drawing::Point(167, 439);
			this->ccode->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ccode->Name = L"ccode";
			this->ccode->Size = System::Drawing::Size(207, 22);
			this->ccode->TabIndex = 64;
			this->ccode->TextChanged += gcnew System::EventHandler(this, &CheckOut::ccode_TextChanged);
			// 
			// ccnum
			// 
			this->ccnum->Location = System::Drawing::Point(167, 357);
			this->ccnum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ccnum->Name = L"ccnum";
			this->ccnum->Size = System::Drawing::Size(207, 22);
			this->ccnum->TabIndex = 63;
			this->ccnum->TextChanged += gcnew System::EventHandler(this, &CheckOut::ccnum_TextChanged);
			// 
			// expdate
			// 
			this->expdate->Location = System::Drawing::Point(167, 396);
			this->expdate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->expdate->Name = L"expdate";
			this->expdate->Size = System::Drawing::Size(207, 22);
			this->expdate->TabIndex = 58;
			this->expdate->TextChanged += gcnew System::EventHandler(this, &CheckOut::expdate_TextChanged);
			// 
			// dateout
			// 
			this->dateout->Location = System::Drawing::Point(167, 235);
			this->dateout->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dateout->Name = L"dateout";
			this->dateout->Size = System::Drawing::Size(207, 22);
			this->dateout->TabIndex = 57;
			this->dateout->ValueChanged += gcnew System::EventHandler(this, &CheckOut::dateout_ValueChanged);
			// 
			// datein
			// 
			this->datein->Location = System::Drawing::Point(167, 194);
			this->datein->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->datein->Name = L"datein";
			this->datein->Size = System::Drawing::Size(207, 22);
			this->datein->TabIndex = 56;
			this->datein->ValueChanged += gcnew System::EventHandler(this, &CheckOut::datein_ValueChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(36, 480);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 55;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CheckOut::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(275, 480);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 54;
			this->button1->Text = L"Check In!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CheckOut::button1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(32, 443);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 17);
			this->label10->TabIndex = 53;
			this->label10->Text = L"CVC Code:";
			this->label10->Click += gcnew System::EventHandler(this, &CheckOut::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(32, 396);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 17);
			this->label9->TabIndex = 52;
			this->label9->Text = L"Expiry Date:";
			this->label9->Click += gcnew System::EventHandler(this, &CheckOut::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(32, 361);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 17);
			this->label8->TabIndex = 51;
			this->label8->Text = L"CC Number:";
			this->label8->Click += gcnew System::EventHandler(this, &CheckOut::label8_Click);
			// 
			// cctype
			// 
			this->cctype->FormattingEnabled = true;
			this->cctype->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Visa", L"Mastercard" });
			this->cctype->Location = System::Drawing::Point(167, 316);
			this->cctype->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cctype->Name = L"cctype";
			this->cctype->Size = System::Drawing::Size(207, 24);
			this->cctype->TabIndex = 50;
			this->cctype->SelectedIndexChanged += gcnew System::EventHandler(this, &CheckOut::cctype_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(32, 320);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 17);
			this->label7->TabIndex = 49;
			this->label7->Text = L"Credit Card Type:";
			this->label7->Click += gcnew System::EventHandler(this, &CheckOut::label7_Click);
			// 
			// lname
			// 
			this->lname->Location = System::Drawing::Point(167, 105);
			this->lname->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(207, 22);
			this->lname->TabIndex = 48;
			this->lname->TextChanged += gcnew System::EventHandler(this, &CheckOut::lname_TextChanged);
			// 
			// fname
			// 
			this->fname->Location = System::Drawing::Point(167, 63);
			this->fname->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(207, 22);
			this->fname->TabIndex = 47;
			this->fname->TextChanged += gcnew System::EventHandler(this, &CheckOut::fname_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 240);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 17);
			this->label6->TabIndex = 46;
			this->label6->Text = L"Date Out:";
			this->label6->Click += gcnew System::EventHandler(this, &CheckOut::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 198);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 17);
			this->label5->TabIndex = 45;
			this->label5->Text = L"Date In:";
			this->label5->Click += gcnew System::EventHandler(this, &CheckOut::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 108);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 17);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Last Name:";
			this->label4->Click += gcnew System::EventHandler(this, &CheckOut::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 154);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 17);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Mobile Number:";
			this->label3->Click += gcnew System::EventHandler(this, &CheckOut::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 66);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 17);
			this->label2->TabIndex = 42;
			this->label2->Text = L"First Name:";
			this->label2->Click += gcnew System::EventHandler(this, &CheckOut::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 32);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 17);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Enter Details:";
			this->label1->Click += gcnew System::EventHandler(this, &CheckOut::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(435, 32);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(587, 453);
			this->dataGridView1->TabIndex = 40;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CheckOut::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CheckOut::dataGridView1_CellContentClick_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-239, -95);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1476, 704);
			this->pictureBox1->TabIndex = 39;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &CheckOut::pictureBox1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(275, 480);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 54;
			this->button3->Text = L"Check Out!";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CheckOut::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(36, 480);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 55;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CheckOut::button2_Click);
			// 
			// cvcode
			// 
			this->cvcode->Location = System::Drawing::Point(167, 439);
			this->cvcode->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cvcode->Name = L"cvcode";
			this->cvcode->Size = System::Drawing::Size(207, 22);
			this->cvcode->TabIndex = 64;
			this->cvcode->TextChanged += gcnew System::EventHandler(this, &CheckOut::ccode_TextChanged);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(899, 498);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(123, 28);
			this->button5->TabIndex = 66;
			this->button5->Text = L"Modify Booking";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &CheckOut::button5_Click);
			// 
			// text
			// 
			this->text->AutoSize = true;
			this->text->Location = System::Drawing::Point(445, 501);
			this->text->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->text->Name = L"text";
			this->text->Size = System::Drawing::Size(44, 17);
			this->text->TabIndex = 67;
			this->text->Text = L"Total:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(32, 282);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(114, 17);
			this->label11->TabIndex = 69;
			this->label11->Text = L"Number of Days:";
			// 
			// txtNoOFdays
			// 
			this->txtNoOFdays->Location = System::Drawing::Point(167, 276);
			this->txtNoOFdays->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtNoOFdays->Name = L"txtNoOFdays";
			this->txtNoOFdays->Size = System::Drawing::Size(207, 22);
			this->txtNoOFdays->TabIndex = 63;
			this->txtNoOFdays->TextChanged += gcnew System::EventHandler(this, &CheckOut::ccnum_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(640, 501);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(85, 17);
			this->label12->TabIndex = 71;
			this->label12->Text = L"Room Type:";
			// 
			// roomtype
			// 
			this->roomtype->Location = System::Drawing::Point(735, 497);
			this->roomtype->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->roomtype->Name = L"roomtype";
			this->roomtype->Size = System::Drawing::Size(103, 22);
			this->roomtype->TabIndex = 72;
			this->roomtype->TextChanged += gcnew System::EventHandler(this, &CheckOut::textBox1_TextChanged_2);
			// 
			// btotal
			// 
			this->btotal->Location = System::Drawing::Point(499, 496);
			this->btotal->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btotal->Name = L"btotal";
			this->btotal->Size = System::Drawing::Size(103, 22);
			this->btotal->TabIndex = 73;
			this->btotal->TextChanged += gcnew System::EventHandler(this, &CheckOut::btotal_TextChanged);
			// 
			// CheckOut
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1037, 542);
			this->Controls->Add(this->btotal);
			this->Controls->Add(this->roomtype);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->text);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->mnum);
			this->Controls->Add(this->cvcode);
			this->Controls->Add(this->txtNoOFdays);
			this->Controls->Add(this->ccode);
			this->Controls->Add(this->ccnum);
			this->Controls->Add(this->expdate);
			this->Controls->Add(this->dateout);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->datein);
			this->Controls->Add(this->button3);
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
			this->Name = L"CheckOut";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Check Out";
			this->Load += gcnew System::EventHandler(this, &CheckOut::CheckOut_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=hoteldb;uid=root;password=admin1234";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);
		
		void populateTable() {
			
			try {
				conn->Open();
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM bookroom ",conn);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				dataGridView1->DataSource = dt;
				conn->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("Failed to read data.");
			}
		}

		
		void NumofDays() {
			
		}
		private: System::Void totalcost() {
			int NoOFDays = Int64::Parse(txtNoOFdays->Text->ToString());

			if (roomtype->Text == "Single")
			{
				Totals = SingleRoom * NoOFDays;
				btotal->Text = String::Format("{0:c2}", Totals);
			}

			if (roomtype->Text == "Double")
			{
				Totals = DoubleRoom * NoOFDays;
				btotal->Text = String::Format("{0:c2}", Totals);
			}

			if (roomtype->Text == "Family")
			{
				Totals = FamilyRoom * NoOFDays;
				btotal->Text = String::Format("{0:c2}", Totals);
			}



		}

		
	
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void Total_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ccnum_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ccode_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void roomnum_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void rnum_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btotal_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void expdate_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dateout_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	DateTime dbTime1 = Convert::ToDateTime(datein->Text); //DateIn
	DateTime dbTime2 = Convert::ToDateTime(dateout->Text);//DateOut
	TimeSpan diff = dbTime2.Subtract(dbTime1);
	txtNoOFdays->Text = Convert::ToString(Convert::ToInt64(diff.Days));
	}
private: System::Void datein_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	DateTime dbTime1 = Convert::ToDateTime(datein->Text); //DateIn
	DateTime dbTime2 = Convert::ToDateTime(dateout->Text);//DateOut
	TimeSpan diff = dbTime2.Subtract(dbTime1);
	txtNoOFdays->Text = Convert::ToString(Convert::ToInt64(diff.Days));

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currPIDrm = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[4]->Value->ToString();
	String^ currPID = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	try {
		conn->Open();
		MySqlCommand^ cmd1 = gcnew MySqlCommand("UPDATE rooms SET RoomStatus= 'Vacant' WHERE RoomNumber = " + currPIDrm, conn);
		cmd1->ExecuteNonQuery();
		MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM bookroom WHERE PID= " + currPID, conn);
		cmd->ExecuteNonQuery();
		conn->Close();
		MessageBox::Show("Room Successfully Checked Out!");
		populateTable();
	}
	catch (Exception^ e) {
		MessageBox::Show("Error Checking Out!");
	}
	}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cctype_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void fname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void mnum_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ currPID = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	
	try {
		conn->Open();
		fname->Text = "";
		lname->Text = "";
		mnum->Text = "";
		datein->Text = "";
		dateout->Text = "";
		cctype->Text = "";
		ccnum->Text = "";
		expdate->Text = "";
		cvcode->Text = "";
		txtNoOFdays->Text = "";
		roomtype->Text = "";
	
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT FirstName, LastName, MobileNumber, RoomNumber, DateIn, DateOut, CreditCardType, CreditCard, ExipryDate, CVCCode, RoomType  FROM bookroom WHERE PID = " + currPID, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		String^ firstName = dt->Rows[0]->ItemArray[0]->ToString();
		String^ lastName = dt->Rows[0]->ItemArray[1]->ToString();
		String^ mobileNumber = dt->Rows[0]->ItemArray[2]->ToString();
		String^ roomNumber = dt->Rows[0]->ItemArray[3]->ToString();
		String^ dateIn = dt->Rows[0]->ItemArray[4]->ToString();
		String^ dateOut = dt->Rows[0]->ItemArray[5]->ToString();
		String^ creditCardtype = dt->Rows[0]->ItemArray[6]->ToString();
		String^ creditCard = dt->Rows[0]->ItemArray[7]->ToString();
		String^ expiryDate = dt->Rows[0]->ItemArray[8]->ToString();
		String^ cvccode = dt->Rows[0]->ItemArray[9]->ToString();
		
		fname->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
		lname->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString();
		mnum->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[3]->Value->ToString();
		datein->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[5]->Value->ToString();
		dateout->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[6]->Value->ToString();
		cctype->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[7]->Value->ToString();
		ccnum->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[8]->Value->ToString();
		expdate->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[9]->Value->ToString();
		cvcode->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[10]->Value->ToString();
		roomtype->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[11]->Value->ToString();
		totalcost();
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to read data.");
	}
}
private: System::Void CheckOut_Load(System::Object^ sender, System::EventArgs^ e) {
	populateTable();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currPID = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ fnames = fname->Text;
	String^ lnames = lname->Text;
	String^ mnums = mnum->Text;
	String^ indate = datein->Text;
	String^ outdate = dateout->Text;
	String^ cctypes = cctype->Text;
	String^ ccnums = ccnum->Text;
	String^ expd = expdate->Text;
	String^ codec = ccode->Text;

	try {
		conn->Open();

		MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE bookroom SET FirstName = @fnames, LastName=@lnames, MobileNumber=@mnums,  DateIn=@indate, DateOut=@outdate, CreditCardType = @cctypes, CreditCard=@ccnums, ExipryDate=@expd, CVCCode=@codec WHERE PID = " + currPID, conn);

		cmd->Parameters->AddWithValue("@fnames", fnames);
		cmd->Parameters->AddWithValue("@lnames", lnames);
		cmd->Parameters->AddWithValue("@mnums", mnums);
		cmd->Parameters->AddWithValue("@indate", indate);
		cmd->Parameters->AddWithValue("@outdate", outdate);
		cmd->Parameters->AddWithValue("@cctypes", cctypes);
		cmd->Parameters->AddWithValue("@ccnums", ccnums);
		cmd->Parameters->AddWithValue("@expd", expd);
		cmd->Parameters->AddWithValue("@codec", codec);

		cmd->ExecuteNonQuery();
		MessageBox::Show("Details Successfully Updated!");
		conn->Close();
		populateTable();
	}
	catch (Exception^ e) {
		MessageBox::Show("Error Updating. Try Again.");
	}
}
private: System::Void btotal_ValueChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btotal_ValueChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btotal_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
