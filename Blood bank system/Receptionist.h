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
	/// Summary for Receptionist
	/// </summary>
	public ref class Receptionist : public System::Windows::Forms::Form
	{
	public:
		Receptionist(void)
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
		~Receptionist()
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
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Receptionist::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
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
			this->label1->BackColor = System::Drawing::Color::Yellow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 26);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Eid";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Yellow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 119);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ph no";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Yellow;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 71);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Address";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Yellow;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(30, 166);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 18);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Working Hours";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Yellow;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(27, 265);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 18);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Date joined";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Yellow;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(27, 219);
			this->label6->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 18);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Salary";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Yellow;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(30, 316);
			this->label7->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 18);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Bank no";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Yellow;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(29, 362);
			this->label8->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 18);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Donor Id";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(160, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(309, 20);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(160, 72);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(309, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(160, 120);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(309, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(160, 167);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(309, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(160, 217);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(309, 20);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(160, 265);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(309, 20);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(160, 317);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(309, 20);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(160, 363);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(309, 20);
			this->textBox8->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(508, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Receptionist::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->Location = System::Drawing::Point(608, 36);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Insert";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Receptionist::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Yellow;
			this->button3->Location = System::Drawing::Point(707, 36);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Receptionist::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Yellow;
			this->button4->Location = System::Drawing::Point(562, 83);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"GO";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Receptionist::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Yellow;
			this->button5->Location = System::Drawing::Point(669, 83);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Fetch all";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Receptionist::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(508, 159);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(411, 221);
			this->dataGridView1->TabIndex = 22;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Yellow;
			this->button6->Location = System::Drawing::Point(844, 36);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 23;
			this->button6->Text = L"<-Back";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Receptionist::button6_Click);
			// 
			// Receptionist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(934, 405);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Receptionist";
			this->Text = L"Receptionist";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Insert Onclick Handler 
			 //MessageBox::Show("Insert clicked!!!");
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int Eid = Int32::Parse(textBox1->Text);
				 String^ Address = textBox2->Text;
				 int Phno = Int32::Parse(textBox3->Text);
				 String^ Workinghrs = textBox4->Text;
				 int Salary = Int32::Parse(textBox5->Text);
				 String^ Datejoined = textBox6->Text;
				 int Bankno = Int32::Parse(textBox7->Text);
				 int Did = Int32::Parse(textBox8->Text);

				 MySqlCommand^ cmd = gcnew  MySqlCommand("insert into receptionist values(" + Eid + ",'" + Address + "'," + Phno + ",'" + Workinghrs + "'," + Salary + ",'"+Datejoined+"',"+Bankno+","+Did+")", con);
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

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int Eid = Int32::Parse(textBox1->Text);
				 String^ Address = textBox2->Text;
				 int Phno = Int32::Parse(textBox3->Text);
				 String^ Workinghrs = textBox4->Text;
				 int Salary = Int32::Parse(textBox5->Text);
				 String^ Datejoined = textBox6->Text;
				 int Bankno = Int32::Parse(textBox7->Text);
				 int Did = Int32::Parse(textBox8->Text);

				 MySqlCommand^ cmd = gcnew  MySqlCommand("Update  receptionist set Address='" + Address + "',Phno=" + Phno + ",Workinghours='" + Workinghrs + "' ,Salary="+Salary+",Datejoined='"+Datejoined+"',Bankno="+Bankno+",Did="+Did+" where Eid=" + Eid + "", con);
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

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int Eid = Int32::Parse(textBox1->Text);
				 MySqlCommand^ cmd = gcnew  MySqlCommand("delete from receptionist where Eid=" + Eid + "", con);
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
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int Eid = Int32::Parse(textBox1->Text);
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 MySqlCommand^ cmd = gcnew  MySqlCommand("Select * from receptionist where Eid=" + Eid + "", con);
				 con->Open();
				 MySqlDataReader^ dr;
				 dr = cmd->ExecuteReader();
				 while (dr->Read()){
					 textBox2->Text = dr->GetString(1);
					 textBox3->Text = dr->GetString(2);
					 textBox4->Text = dr->GetString(3);
					 textBox5->Text = dr->GetString(4);
					 textBox6->Text = dr->GetString(5);
					 textBox7->Text = dr->GetString(6);
					 textBox8->Text = dr->GetString(7);

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
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from Receptionist", con);
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
