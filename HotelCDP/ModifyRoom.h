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
	/// Summary for ModifyRoom
	/// </summary>
	public ref class ModifyRoom : public System::Windows::Forms::Form
	{
	public:
		ModifyRoom(void)
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
		~ModifyRoom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ rmstats;
	private: System::Windows::Forms::Label^ rmstatus;
	private: System::Windows::Forms::Label^ add3;


	private: System::Windows::Forms::Label^ add2;
	private: System::Windows::Forms::TextBox^ roomnum;
	private: System::Windows::Forms::Label^ roomlabel;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::RichTextBox^ descri;
	private: System::Windows::Forms::NumericUpDown^ quanti;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ roomtyp;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModifyRoom::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rmstats = (gcnew System::Windows::Forms::TextBox());
			this->rmstatus = (gcnew System::Windows::Forms::Label());
			this->add3 = (gcnew System::Windows::Forms::Label());
			this->add2 = (gcnew System::Windows::Forms::Label());
			this->roomnum = (gcnew System::Windows::Forms::TextBox());
			this->roomlabel = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->descri = (gcnew System::Windows::Forms::RichTextBox());
			this->quanti = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->roomtyp = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quanti))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(535, 15);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(605, 446);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ModifyRoom::dataGridView1_CellClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 15);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Update Room:";
			this->label1->Click += gcnew System::EventHandler(this, &ModifyRoom::label1_Click);
			// 
			// rmstats
			// 
			this->rmstats->Location = System::Drawing::Point(216, 167);
			this->rmstats->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rmstats->Name = L"rmstats";
			this->rmstats->Size = System::Drawing::Size(257, 22);
			this->rmstats->TabIndex = 19;
			// 
			// rmstatus
			// 
			this->rmstatus->AutoSize = true;
			this->rmstatus->Location = System::Drawing::Point(64, 171);
			this->rmstatus->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->rmstatus->Name = L"rmstatus";
			this->rmstatus->Size = System::Drawing::Size(105, 17);
			this->rmstatus->TabIndex = 18;
			this->rmstatus->Text = L"Occupied (Y/N)";
			// 
			// add3
			// 
			this->add3->AutoSize = true;
			this->add3->Location = System::Drawing::Point(63, 234);
			this->add3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add3->Name = L"add3";
			this->add3->Size = System::Drawing::Size(120, 17);
			this->add3->TabIndex = 17;
			this->add3->Text = L"Room Description";
			// 
			// add2
			// 
			this->add2->AutoSize = true;
			this->add2->Location = System::Drawing::Point(64, 128);
			this->add2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add2->Name = L"add2";
			this->add2->Size = System::Drawing::Size(103, 17);
			this->add2->TabIndex = 14;
			this->add2->Text = L"Guest Quantity";
			// 
			// roomnum
			// 
			this->roomnum->Location = System::Drawing::Point(216, 46);
			this->roomnum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->roomnum->Name = L"roomnum";
			this->roomnum->Size = System::Drawing::Size(257, 22);
			this->roomnum->TabIndex = 13;
			// 
			// roomlabel
			// 
			this->roomlabel->AutoSize = true;
			this->roomlabel->Location = System::Drawing::Point(64, 49);
			this->roomlabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->roomlabel->Name = L"roomlabel";
			this->roomlabel->Size = System::Drawing::Size(99, 17);
			this->roomlabel->TabIndex = 12;
			this->roomlabel->Text = L"Room Number";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(43, 406);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModifyRoom::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(375, 406);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModifyRoom::button1_Click);
			// 
			// descri
			// 
			this->descri->Location = System::Drawing::Point(215, 234);
			this->descri->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->descri->Name = L"descri";
			this->descri->Size = System::Drawing::Size(257, 117);
			this->descri->TabIndex = 25;
			this->descri->Text = L"";
			// 
			// quanti
			// 
			this->quanti->Location = System::Drawing::Point(216, 127);
			this->quanti->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->quanti->Name = L"quanti";
			this->quanti->Size = System::Drawing::Size(259, 22);
			this->quanti->TabIndex = 24;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(216, 406);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ModifyRoom::button3_Click);
			// 
			// roomtyp
			// 
			this->roomtyp->Location = System::Drawing::Point(215, 87);
			this->roomtyp->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->roomtyp->Name = L"roomtyp";
			this->roomtyp->Size = System::Drawing::Size(257, 22);
			this->roomtyp->TabIndex = 28;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 91);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 17);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Room Type:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1173, 660);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// ModifyRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1156, 475);
			this->Controls->Add(this->roomtyp);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->descri);
			this->Controls->Add(this->quanti);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->rmstats);
			this->Controls->Add(this->rmstatus);
			this->Controls->Add(this->add3);
			this->Controls->Add(this->add2);
			this->Controls->Add(this->roomnum);
			this->Controls->Add(this->roomlabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ModifyRoom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Modify Room";
			this->Load += gcnew System::EventHandler(this, &ModifyRoom::ModifyRoom_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quanti))->EndInit();
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
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM rooms", conn);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				dataGridView1->DataSource = dt;
				conn->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("Failed to read data.");
			}
	}

	private: System::Void ModifyRoom_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM rooms", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dataGridView1->DataSource = dt;
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to read data.");
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ currPID = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0] -> Value->ToString();
	try {
		conn->Open();
		roomnum->Text = "";
		quanti->Value = 0;
		rmstats->Text = "";
		descri->Text = "";
		roomtyp->Text = "";

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT RoomNumber, RoomQuantity, RoomStatus, RoomType, RoomDescription FROM rooms WHERE PID = " + currPID, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		String^ roomNumber = dt->Rows[0]->ItemArray[0]->ToString();
		String^ roomQuantity = dt->Rows[0]->ItemArray[1]->ToString();
		String^ roomStatus = dt->Rows[0]->ItemArray[2]->ToString();
		String^ roomDescription = dt->Rows[0]->ItemArray[3]->ToString();
		roomnum->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
		rmstats->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[3]->Value->ToString();
		descri->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[5]->Value->ToString();
		roomtyp->Text = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[4]->Value->ToString();	
		quanti->Value = Convert::ToInt32(dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value);

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to read data.");
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void quanti_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rmbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currPID = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ rnum = roomnum->Text;;
	int rquan = Convert::ToInt32(quanti->Value);
	String^ rdesc = descri->Text;;
	String^ rmstat = rmstats->Text;
	String^ roomtype = roomtyp->Text;


	

	try {
		conn->Open();

		MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE rooms SET RoomNumber=@rnum,RoomQuantity= @rquan,RoomDescription= @rdesc,RoomStatus= @rmstat, RoomType =@roomtype WHERE PID = " + currPID, conn);

		cmd->Parameters->AddWithValue("@rnum", rnum);
		cmd->Parameters->AddWithValue("@rquan", rquan);
		cmd->Parameters->AddWithValue("@rdesc", rdesc);
		cmd->Parameters->AddWithValue("@rmstat", rmstat);
		cmd->Parameters->AddWithValue("@roomtype", roomtype);
	

		cmd->ExecuteNonQuery();
		MessageBox::Show("Room " + rnum + " Successfully Updated!");
		conn->Close();
		populateTable();
	}
	catch (Exception^ e) {
		MessageBox::Show("Room " + rnum + " Error Updating. Try Again.");
	}
	

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currPID = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	
	try {
		conn->Open();

		MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM rooms WHERE PID= " + currPID, conn);
		cmd->ExecuteNonQuery();
		conn->Close();
		MessageBox::Show("Room Successfully Deleted.");
		populateTable();
	}
	catch (Exception^ e) {
		MessageBox::Show("Error Deleting");
	}
}
private: System::Void rmbox_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
