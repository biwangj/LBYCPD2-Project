#pragma once


namespace HotelCDP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
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
			this->SuspendLayout();
			// 
			// BackBtn
			// 
			this->BackBtn->ForeColor = System::Drawing::Color::Black;
			this->BackBtn->Location = System::Drawing::Point(98, 361);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(75, 23);
			this->BackBtn->TabIndex = 6;
			this->BackBtn->Text = L"Back";
			this->BackBtn->UseVisualStyleBackColor = true;
			this->BackBtn->Click += gcnew System::EventHandler(this, &MenuForm::BackBtn_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(778, 440);
			this->Controls->Add(this->BackBtn);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->Name = L"MenuForm";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->ShowDialog();

	}
	};
}