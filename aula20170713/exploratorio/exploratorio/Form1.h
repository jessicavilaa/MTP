#pragma once

namespace exploratorio {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btOn;
	protected: 

	protected: 

	private: System::Windows::Forms::CheckBox^  checkVarinha;
	protected: 

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  cmbCasa;
	private: System::Windows::Forms::RadioButton^  rdbAluno;
	private: System::Windows::Forms::PictureBox^  pctImagem;




	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  rdbVisitante;

	private: System::Windows::Forms::TextBox^  textBox2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btOn = (gcnew System::Windows::Forms::Button());
			this->checkVarinha = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmbCasa = (gcnew System::Windows::Forms::ComboBox());
			this->rdbAluno = (gcnew System::Windows::Forms::RadioButton());
			this->pctImagem = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rdbVisitante = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pctImagem))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btOn
			// 
			this->btOn->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btOn->Location = System::Drawing::Point(126, 170);
			this->btOn->Name = L"btOn";
			this->btOn->Size = System::Drawing::Size(75, 23);
			this->btOn->TabIndex = 0;
			this->btOn->Text = L"Criar conta";
			this->btOn->UseVisualStyleBackColor = true;
			this->btOn->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// checkVarinha
			// 
			this->checkVarinha->AutoSize = true;
			this->checkVarinha->BackColor = System::Drawing::Color::Transparent;
			this->checkVarinha->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkVarinha->ForeColor = System::Drawing::Color::Sienna;
			this->checkVarinha->Location = System::Drawing::Point(124, 298);
			this->checkVarinha->Name = L"checkVarinha";
			this->checkVarinha->Size = System::Drawing::Size(152, 22);
			this->checkVarinha->TabIndex = 1;
			this->checkVarinha->Text = L"Fazer login com varinha";
			this->checkVarinha->UseVisualStyleBackColor = false;
			this->checkVarinha->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Sienna;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Goldenrod;
			this->textBox1->Location = System::Drawing::Point(126, 118);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(316, 32);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Acabou de receber sua carta\? Faça sua conta.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Sienna;
			this->label1->Location = System::Drawing::Point(130, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(805, 60);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Hogwarts School of Witchcraft and Wizardry";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// cmbCasa
			// 
			this->cmbCasa->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cmbCasa->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->cmbCasa->FormattingEnabled = true;
			this->cmbCasa->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Grifinória", L"Sonserina", L"Lufa-Lufa", L"Corvinal"});
			this->cmbCasa->Location = System::Drawing::Point(126, 266);
			this->cmbCasa->Name = L"cmbCasa";
			this->cmbCasa->Size = System::Drawing::Size(121, 26);
			this->cmbCasa->TabIndex = 4;
			this->cmbCasa->Text = L"Escolha sua casa";
			this->cmbCasa->UseWaitCursor = true;
			this->cmbCasa->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cmbCasa_SelectedIndexChanged);
			// 
			// rdbAluno
			// 
			this->rdbAluno->AutoSize = true;
			this->rdbAluno->Checked = true;
			this->rdbAluno->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rdbAluno->ForeColor = System::Drawing::Color::Sienna;
			this->rdbAluno->Location = System::Drawing::Point(0, 24);
			this->rdbAluno->Name = L"rdbAluno";
			this->rdbAluno->Size = System::Drawing::Size(59, 22);
			this->rdbAluno->TabIndex = 6;
			this->rdbAluno->TabStop = true;
			this->rdbAluno->Text = L"Aluno";
			this->rdbAluno->UseVisualStyleBackColor = true;
			this->rdbAluno->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// pctImagem
			// 
			this->pctImagem->BackColor = System::Drawing::Color::Transparent;
			this->pctImagem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pctImagem.Image")));
			this->pctImagem->Location = System::Drawing::Point(554, 170);
			this->pctImagem->Name = L"pctImagem";
			this->pctImagem->Size = System::Drawing::Size(409, 363);
			this->pctImagem->TabIndex = 7;
			this->pctImagem->TabStop = false;
			this->pctImagem->Click += gcnew System::EventHandler(this, &Form1::pctImagem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->rdbVisitante);
			this->groupBox1->Controls->Add(this->rdbAluno);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Sienna;
			this->groupBox1->Location = System::Drawing::Point(124, 434);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(154, 99);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Passagem para Hogwarts";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// rdbVisitante
			// 
			this->rdbVisitante->AutoSize = true;
			this->rdbVisitante->Location = System::Drawing::Point(0, 76);
			this->rdbVisitante->Name = L"rdbVisitante";
			this->rdbVisitante->Size = System::Drawing::Size(74, 22);
			this->rdbVisitante->TabIndex = 0;
			this->rdbVisitante->Text = L"Visitante";
			this->rdbVisitante->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Sienna;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Goldenrod;
			this->textBox2->Location = System::Drawing::Point(128, 222);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(127, 28);
			this->textBox2->TabIndex = 9;
			this->textBox2->Text = L"Já tem uma conta\?";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Sienna;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1053, 636);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pctImagem);
			this->Controls->Add(this->cmbCasa);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkVarinha);
			this->Controls->Add(this->btOn);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pctImagem))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 if(rdbAluno->Checked == true)
				 pctImagem->Load ("C:\\Users\\FEELT\\Documents\\aula20170713\\exploratorio\\exploratorio\\myimage.jpg");
			 else pctImagem->Load ("C:\\Users\\FEELT\\Documents\\aula20170713\\exploratorio\\exploratorio\\myimagem.jpg");
		 }
private: System::Void cmbCasa_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^ msg = "Bom dia, ";
			 msg += cmbCasa->SelectedItem + ", ";
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  if(checkVarinha->Checked == true)
				 pctImagem->Load ("C:\\Users\\FEELT\\Documents\\aula20170713\\exploratorio\\exploratorio\\gif.gif");
			 else pctImagem->Load ("C:\\Users\\FEELT\\Documents\\aula20170713\\exploratorio\\exploratorio\\myimagem.jpg");
		 }
private: System::Void pctImagem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

