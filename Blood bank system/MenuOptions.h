#pragma once


#include"Person.h";

#include"Hospital.h";

#include"Blood.h";

#include"Bloodbank.h";

#include"BloodbankManager.h";

#include"Donation.h";

#include"Employee.h";

#include"form1.h";

#include"Orders.h";

#include"Receptionist.h";

#include"Orders.h";


namespace Bloodbanksystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuOptions
	/// </summary>
	public ref class MenuOptions : public System::Windows::Forms::Form
	{
	public:
		MenuOptions(void)
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
		~MenuOptions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button4;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;

	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuOptions::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Orchid;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(25, 30);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 32);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Person";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MenuOptions::button4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orchid;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(167, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Donor";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MenuOptions::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Orchid;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(167, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 32);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Blood";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MenuOptions::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Orchid;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(25, 185);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 32);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Employee";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MenuOptions::button3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Orchid;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(25, 327);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 32);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Blood Bank";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MenuOptions::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Orchid;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Location = System::Drawing::Point(167, 327);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 32);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Hospital";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MenuOptions::button6_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Orchid;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Location = System::Drawing::Point(658, 176);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 32);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Receptionist";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MenuOptions::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Orchid;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Location = System::Drawing::Point(658, 327);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 32);
			this->button9->TabIndex = 20;
			this->button9->Text = L"Donations";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MenuOptions::button9_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Orchid;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Location = System::Drawing::Point(658, 25);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 42);
			this->button11->TabIndex = 22;
			this->button11->Text = L"Blood Bank Manager";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MenuOptions::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Yellow;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->button12->Location = System::Drawing::Point(815, 30);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 32);
			this->button12->TabIndex = 23;
			this->button12->Text = L"Close App";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MenuOptions::button12_Click);
			// 
			// MenuOptions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepPink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(914, 391);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::LavenderBlush;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MenuOptions";
			this->Text = L"MenuOptions";
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Person^ obj = gcnew Person();
			 obj->ShowDialog();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 Hospital^ obj = gcnew Hospital();
			 obj->ShowDialog();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 form1^ obj = gcnew form1();
			 obj->ShowDialog();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Employee^ obj = gcnew Employee();
			 obj->ShowDialog();
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Blood^ obj = gcnew Blood();
			 obj->ShowDialog();
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Bloodbank^ obj = gcnew Bloodbank();
			 obj->ShowDialog(this);
}

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 Receptionist^ obj = gcnew Receptionist();
			 obj->ShowDialog();
}

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 BloodbankManager^ obj = gcnew BloodbankManager();
			 obj->ShowDialog();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 Donation^ obj = gcnew Donation();
			 obj->ShowDialog();
}

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 Orders^ obj = gcnew Orders();
			 obj->ShowDialog();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}
private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 
			 
}
};
}
