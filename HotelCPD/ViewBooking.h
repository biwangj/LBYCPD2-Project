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
	/// Summary for ViewBooking
	/// </summary>
	public ref class ViewBooking : public System::Windows::Forms::Form
	{
	public:
		ViewBooking(void)
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
		~ViewBooking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ backbuton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewBooking::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->backbuton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(754, 384);
			this->dataGridView1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-179, -67);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1107, 572);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// backbuton
			// 
			this->backbuton->Location = System::Drawing::Point(13, 405);
			this->backbuton->Name = L"backbuton";
			this->backbuton->Size = System::Drawing::Size(70, 26);
			this->backbuton->TabIndex = 4;
			this->backbuton->Text = L"Back";
			this->backbuton->UseVisualStyleBackColor = true;
			this->backbuton->Click += gcnew System::EventHandler(this, &ViewBooking::backbuton_Click);
			// 
			// ViewBooking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(778, 440);
			this->Controls->Add(this->backbuton);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ViewBooking";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ViewBooking";
			this->Load += gcnew System::EventHandler(this, &ViewBooking::ViewBooking_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=hoteldb;uid=root;password=amen";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);
	private: System::Void ViewBooking_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM bookroom", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			dataGridView1->DataSource = dt;
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to read data.");
		}
	}
	private: System::Void backbuton_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
