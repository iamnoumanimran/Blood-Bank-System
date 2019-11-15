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
	/// Summary for BloodbankManager
	/// </summary>
	public ref class BloodbankManager : public System::Windows::Forms::Form
	{
	public:
		BloodbankManager(void)
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
		~BloodbankManager()
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
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Button^  button7;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BloodbankManager::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MediumPurple;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(665, 139);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ph no";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::MediumPurple;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(665, 45);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Salary";
			this->label2->Click += gcnew System::EventHandler(this, &BloodbankManager::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::MediumPurple;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(343, 141);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Date joined";
			this->label3->Click += gcnew System::EventHandler(this, &BloodbankManager::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::MediumPurple;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(343, 48);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 18);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Working hrs";
			this->label4->Click += gcnew System::EventHandler(this, &BloodbankManager::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::MediumPurple;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(48, 139);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 18);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Bank No";
			this->label5->Click += gcnew System::EventHandler(this, &BloodbankManager::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::MediumPurple;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(48, 45);
			this->label6->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 18);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Eid";
			this->label6->Click += gcnew System::EventHandler(this, &BloodbankManager::label6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(129, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(167, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(129, 140);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(167, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(462, 48);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(167, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(462, 140);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(167, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(740, 43);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(167, 20);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(740, 137);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(167, 20);
			this->textBox6->TabIndex = 12;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MediumPurple;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(46, 211);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Update";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &BloodbankManager::button4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumPurple;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(46, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Insert";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BloodbankManager::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumPurple;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(46, 303);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BloodbankManager::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumPurple;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(46, 346);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Go";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BloodbankManager::button3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::MediumPurple;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(46, 387);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Fetch All";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &BloodbankManager::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(160, 211);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(654, 199);
			this->dataGridView1->TabIndex = 18;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Lavender;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::MediumBlue;
			this->button7->Location = System::Drawing::Point(832, 367);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 43);
			this->button7->TabIndex = 20;
			this->button7->Text = L"<-Back ";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &BloodbankManager::button7_Click);
			// 
			// BloodbankManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumPurple;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(919, 440);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"BloodbankManager";
			this->Text = L"BloodbankManager";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int Eid = Int32::Parse(textBox1->Text);
				 int Bankno = Int32::Parse(textBox2->Text);
				 String^ Workinghrs = textBox3->Text;
				 String^ Datejoined = textBox4->Text;
				 int Salary = Int32::Parse(textBox5->Text);
				 int Phno = Int32::Parse(textBox6->Text);

				 MySqlCommand^ cmd = gcnew  MySqlCommand("update BloodBankManager set Bankno='" + Bankno + "',Workinghrs='" + Workinghrs + "',Datejoined='" + Datejoined + "',Salary="+Salary+" where Eid=" + Eid + "", con);
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

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Insert Onclick Handler 
			 //MessageBox::Show("Insert clicked!!!");
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);


				 int Eid = Int32::Parse(textBox1->Text);
				 int Bankno = Int32::Parse(textBox2->Text);
				 String^ Workinghrs = textBox3->Text;
				 String^ Datejoined = textBox4->Text;
				 int Salary = Int32::Parse(textBox5->Text);
				 int Phno = Int32::Parse(textBox6->Text);

				 MySqlCommand^ cmd = gcnew  MySqlCommand("insert into BloodBankManager values(" + Eid + "," + Bankno + ",'" + Workinghrs + "','"+Datejoined+"',"+Salary+","+Phno+")", con);
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

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int Eid = Int32::Parse(textBox1->Text);

				 MySqlCommand^ cmd = gcnew  MySqlCommand("delete from BloodBankManager where Eid=" + Eid + "", con);
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
				 int Eid= Int32::Parse(textBox1->Text);
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 MySqlCommand^ cmd = gcnew  MySqlCommand("Select * from BloodBankManager where Eid=" + Eid + "", con);
				 con->Open();
				 MySqlDataReader^ dr;
				 dr = cmd->ExecuteReader();
				 while (dr->Read()){
					 textBox2->Text = dr->GetString(1);
					 textBox3->Text = dr->GetString(2);
					 textBox4->Text = dr->GetString(3);
					 textBox5->Text = dr->GetString(4);
					 textBox6->Text = dr->GetString(5);

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
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from BloodBankManager", con);
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
