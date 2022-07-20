#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgv;





	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(440, 110);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"應檢人資料";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(326, 69);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 25);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"2022/05/23";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(223, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 15);
			this->label4->TabIndex = 0;
			this->label4->Text = L"考  試  日  期";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(326, 24);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 25);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = L"106010203";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(223, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 15);
			this->label3->TabIndex = 0;
			this->label3->Text = L"術科測驗編號";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(66, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 25);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"17";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 0;
			this->label2->Text = L"座號";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(66, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"OOO";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"姓名";
			// 
			// dgv
			// 
			this->dgv->AllowUserToDeleteRows = false;
			this->dgv->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Location = System::Drawing::Point(13, 130);
			this->dgv->Name = L"dgv";
			this->dgv->ReadOnly = true;
			this->dgv->RowHeadersVisible = false;
			this->dgv->RowHeadersWidth = 51;
			this->dgv->RowTemplate->Height = 27;
			this->dgv->Size = System::Drawing::Size(440, 400);
			this->dgv->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(462, 533);
			this->Controls->Add(this->dgv);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"撲克牌比大小";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//***************************
	//*11900-1060307 Program Start*
	//***************************
		ArrayList^ card = gcnew ArrayList;
		ArrayList^ pn = gcnew ArrayList;
		ArrayList^ pn1 = gcnew ArrayList;
		ArrayList^ bn = gcnew ArrayList;
		ArrayList^ bn1 = gcnew ArrayList;
		ArrayList^ pf = gcnew ArrayList;
		ArrayList^ bf = gcnew ArrayList;
		dgv->RowHeadersVisible = false;
		dgv->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		dgv->Columns->Add("序號", "序號");
		dgv->Columns->Add("玩家", "玩家");
		dgv->Columns->Add("莊家", "莊家");
		dgv->Columns->Add("結果", "結果");
		ArrayList^ suit = gcnew ArrayList;
		suit->Add(L"\u2660");
		suit->Add(L"\u2665");
		suit->Add(L"\u2666");
		suit->Add(L"\u2663");
		StreamReader^ din = File::OpenText("C:\\test\\1060307.T03");
		String^ line;
		int gno = Convert::ToInt32(din->ReadLine());
		while ((line = din->ReadLine())) {
			Single t1 = Convert::ToSingle(line);
			int t = Convert::ToInt32(Math::Floor(t1 * 52));
			if (card->IndexOf(t) == -1) {
				card->Add(t);
			}
		}
		for (int i = 0; i <= gno * 2 - 1; i++) {
			int f = Convert::ToInt32(card[i]) / 13;
			int n = Convert::ToInt32(card[i]) % 13 + 1;
			char disp[][3] = { "*","A","2","3","4","5","6","7","8","9","10","J","Q","K" };
			String^ n1 = gcnew String(disp[n]);
			if (n == 1) { n = n + 13; }
			if (i % 2 == 0) {
				pn->Add(n);
				pn1->Add(n1);
				pf->Add(f);
			}
			else {
				bn->Add(n);
				bn1->Add(n1);
				bf->Add(f);
			}
		}
		for (int i = 0; i < gno; i++) {
			String^ msg = "";
			if (Convert::ToInt32(pn[i]) > Convert::ToInt32(bn[i])) msg = "玩家贏";
			if (Convert::ToInt32(pn[i]) < Convert::ToInt32(bn[i])) msg = "莊家贏";
			if (Convert::ToInt32(pn[i]) == Convert::ToInt32(bn[i])) msg = "平手";
			String^ pDataString = suit[Convert::ToInt32(pf[i])]->ToString() + pn1[i];
			String^ bDataString = suit[Convert::ToInt32(bf[i])]->ToString() + bn1[i];
			array<String^>^ tRecord = { (i + 1).ToString(),pDataString,bDataString,msg };
			dgv->Rows->Add(tRecord);
		}
		for (int i = 0; i < 3; i++) dgv->Rows->Add("");
	}
};
}
