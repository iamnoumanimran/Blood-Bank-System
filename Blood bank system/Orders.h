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
	/// Summary for Orders
	/// </summary>
	public ref class Orders : public System::Windows::Forms::Form
	{
	public:
		Orders(void)
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
		~Orders()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Orders::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::OrangeRed;
			this->label1->Location = System::Drawing::Point(14, 117);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bank No";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::OrangeRed;
			this->label2->Location = System::Drawing::Point(14, 43);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"License Number";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(149, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(275, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(149, 118);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(275, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Orders::textBox2_TextChanged);
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::OrangeRed;
			this->button4->Location = System::Drawing::Point(480, 103);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 32);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Update";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Orders::button4_Click);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::OrangeRed;
			this->button1->Location = System::Drawing::Point(568, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Insert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Orders::button1_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::OrangeRed;
			this->button2->Location = System::Drawing::Point(648, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 32);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Orders::button2_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::OrangeRed;
			this->button3->Location = System::Drawing::Point(805, 103);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 32);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Go";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Orders::button3_Click);
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::Color::OrangeRed;
			this->button5->Location = System::Drawing::Point(732, 160);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 32);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Get All";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Orders::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 217);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(891, 193);
			this->dataGridView1->TabIndex = 17;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->ForeColor = System::Drawing::Color::OrangeRed;
			this->button6->Location = System::Drawing::Point(833, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 32);
			this->button6->TabIndex = 18;
			this->button6->Text = L"<-Back";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Orders::button6_Click);
			// 
			// Orders
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(920, 426);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::OrangeRed;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Orders";
			this->Text = L"<-Back";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Insert Onclick Handler 
			 //MessageBox::Show("Insert clicked!!!");
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int License_Number = Int32::Parse(textBox1->Text);
				 int Bank_No= Int32::Parse(textBox2->Text);

				 MySqlCommand^ cmd = gcnew  MySqlCommand("insert into Orders values(" + License_Number + "," +Bank_No +")", con);
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
		 //delete 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int License_Number = Int32::Parse(textBox1->Text);
				 MySqlCommand^ cmd = gcnew  MySqlCommand("delete from Orders where LNumber=" + License_Number + "", con);
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
		 //Update
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int License_Number = Int32::Parse(textBox1->Text);
				 int Bank_No = Int32::Parse(textBox2->Text);
				 MySqlCommand^ cmd = gcnew  MySqlCommand("Update  Orders set BNo=" + Bank_No + " where LNumber="+License_Number+"", con);
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
		 //go button
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int License_Number = Int32::Parse(textBox1->Text);
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 MySqlCommand^ cmd = gcnew  MySqlCommand("Select * from orders where LNumber=" + License_Number + "", con);
				 con->Open();
				 MySqlDataReader^ dr;
				 dr = cmd->ExecuteReader();
				 while (dr->Read()){
					 textBox2->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
}
		   //Fetch All
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from Orders", con);
				 DataTable^ dt = gcnew DataTable();
				 sda->Fill(dt);
				 bindingSource1->DataSource = dt;
				 dataGridView1->DataSource = bindingSource1;
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
}
};
}
