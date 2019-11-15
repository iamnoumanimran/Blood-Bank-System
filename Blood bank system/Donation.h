#pragma once

namespace Bloodbanksystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Donation
	/// </summary>
	public ref class Donation : public System::Windows::Forms::Form
	{
	public:
		Donation(void)
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
		~Donation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Button^  button6;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Donation::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->label1->Location = System::Drawing::Point(631, 64);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L" Date of Donation";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->label2->Location = System::Drawing::Point(73, 61);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Did";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->label3->Location = System::Drawing::Point(275, 104);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Blood group donated";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(146, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(835, 62);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(222, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(481, 104);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(247, 20);
			this->textBox3->TabIndex = 7;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::OrangeRed;
			this->button4->Location = System::Drawing::Point(243, 160);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 32);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Insert";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Donation::button4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::OrangeRed;
			this->button1->Location = System::Drawing::Point(77, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 32);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Donation::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::OrangeRed;
			this->button2->Location = System::Drawing::Point(77, 248);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 32);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Donation::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::OrangeRed;
			this->button3->Location = System::Drawing::Point(243, 248);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 32);
			this->button3->TabIndex = 15;
			this->button3->Text = L"GO ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Donation::button3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::OrangeRed;
			this->button5->Location = System::Drawing::Point(161, 210);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(87, 32);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Get ALL";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Donation::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(14, 305);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(577, 130);
			this->dataGridView1->TabIndex = 18;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LavenderBlush;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->Location = System::Drawing::Point(982, 392);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 43);
			this->button6->TabIndex = 19;
			this->button6->Text = L"<-Back ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Donation::button6_Click);
			// 
			// Donation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1072, 464);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Donation";
			this->Text = L"Donation";
			this->Load += gcnew System::EventHandler(this, &Donation::Donation_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
			 //Insert values
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Insert Onclick Handler 
			 //MessageBox::Show("Insert clicked!!!");
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int Did = Int32::Parse(textBox1->Text);
				 String^ DateofDonation = textBox2->Text;
				 String^ Bloodgroup = textBox3->Text;

				 MySqlCommand^ cmd = gcnew  MySqlCommand("insert into Donation values(" + Did + ",'" + DateofDonation + "','" + Bloodgroup + "')", con);
				 con->Open();
				 MySqlDataReader^ dr;
				 dr = cmd->ExecuteReader();
				 MessageBox::Show("User info saved!!!!");
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
}
		 //Update button
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int Did = Int32::Parse(textBox1->Text);
				 String^ DateofDonation = textBox2->Text;
				 String^ Bloodgroup = textBox3->Text;

				 MySqlCommand^ cmd = gcnew  MySqlCommand("Update  Donation set DateDonation='" + DateofDonation + "',BloodGroup='" + Bloodgroup + "' where Did=" + Did + "", con);
				 con->Open();
				 MySqlDataReader^ dr;
				 dr = cmd->ExecuteReader();
				 MessageBox::Show("User info updated!!!!");
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }

}
		 //delete data
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int Did = Int32::Parse(textBox1->Text);
				 MySqlCommand^ cmd = gcnew  MySqlCommand("delete from donation where Did=" + Did + "", con);
				 con->Open();
				 MySqlDataReader^ dr;
				 dr = cmd->ExecuteReader();
				 MessageBox::Show("User info deleted!!!!");
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int Did = Int32::Parse(textBox1->Text);
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 MySqlCommand^ cmd = gcnew  MySqlCommand("Select * from donation where Did=" + Did + "", con);
				 con->Open();
				 MySqlDataReader^ dr;
				 dr = cmd->ExecuteReader();
				 while (dr->Read()){
					 textBox2->Text = dr->GetString(1);
					 textBox3->Text = dr->GetString(2);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from donation", con);
				 DataTable^ dt = gcnew DataTable();
				 sda->Fill(dt);
				 bindingSource1->DataSource = dt;
				 dataGridView1->DataSource = bindingSource1;
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void Donation_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
