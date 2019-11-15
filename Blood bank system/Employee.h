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
	/// Summary for Employee
	/// </summary>
	public ref class Employee : public System::Windows::Forms::Form
	{
	public:
		Employee(void)
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
		~Employee()
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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Employee::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->BackColor = System::Drawing::Color::SpringGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(86, 57);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Eid";
			this->label1->Click += gcnew System::EventHandler(this, &Employee::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::SpringGreen;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(86, 133);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"SSN";
			this->label2->Click += gcnew System::EventHandler(this, &Employee::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::SpringGreen;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(84, 210);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Name";
			this->label3->Click += gcnew System::EventHandler(this, &Employee::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::SpringGreen;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(86, 284);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Email";
			this->label4->Click += gcnew System::EventHandler(this, &Employee::label4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(192, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(167, 24);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Employee::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(192, 133);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(167, 24);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(192, 207);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(167, 24);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(192, 281);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(167, 24);
			this->textBox4->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SpringGreen;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(61, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 38);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Employee::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SpringGreen;
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(192, 390);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 38);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Insert";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Employee::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SpringGreen;
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(315, 390);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 38);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Employee::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SpringGreen;
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(476, 58);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 32);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Go";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Employee::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SpringGreen;
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(601, 58);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 32);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Select All";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Employee::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(476, 133);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(440, 280);
			this->dataGridView1->TabIndex = 13;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::SpringGreen;
			this->button6->Location = System::Drawing::Point(841, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 43);
			this->button6->TabIndex = 16;
			this->button6->Text = L"<-Back ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Employee::button6_Click);
			// 
			// Employee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SpringGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(937, 450);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"Employee";
			this->Text = L"Employee";
			this->Load += gcnew System::EventHandler(this, &Employee::Employee_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Employee_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
		 //Update button
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int Eid = Int32::Parse(textBox1->Text);
				 int SSN = Int32::Parse(textBox2->Text);
				 String^ Name = textBox4->Text;
				 String^ Email= textBox3->Text;
				 

				 MySqlCommand^ cmd = gcnew  MySqlCommand("Update  Employee set Name='" + Name + "',Email='"+Email+"' where Eid=" + Eid + " and SSN=" + SSN + "", con);
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
		 //Insert button
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Insert Onclick Handler 
			 //MessageBox::Show("Insert clicked!!!");
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int Eid = Int32::Parse(textBox1->Text);
				 int SSN = Int32::Parse(textBox2->Text);
				 String^ Name = textBox4->Text;
				 String^ Email = textBox3->Text;

				 MySqlCommand^ cmd = gcnew  MySqlCommand("insert into Employee values(" + Eid + "," + SSN + ",'" + Name + "','" + Email + "')", con);
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
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 int Eid = Int32::Parse(textBox1->Text);
				 int SSN = Int32::Parse(textBox2->Text);
				 MySqlCommand^ cmd = gcnew  MySqlCommand("delete from Employee where Eid=" + Eid + " AND SSN=" + SSN + "", con);
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
				 int SSN = Int32::Parse(textBox2->Text);
				 String^ info = "Server=127.0.0.1;Uid=root;Pwd=;Database=blood bank management system";
				 MySqlConnection^ con = gcnew MySqlConnection(info);

				 MySqlCommand^ cmd = gcnew  MySqlCommand("Select * from Employee where Eid=" + Eid + " and SSN="+SSN+"", con);
				 con->Open();
				 MySqlDataReader^ dr;
				 dr = cmd->ExecuteReader();
				 while (dr->Read()){
					 textBox3->Text = dr->GetString(2);
					 textBox4->Text = dr->GetString(3);
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
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from Employee", con);
				 DataTable^ dt = gcnew DataTable();
				 sda->Fill(dt);
				 bindingSource1->DataSource = dt;
				 dataGridView1->DataSource = bindingSource1;
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Close();
}
};
}
