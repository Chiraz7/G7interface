#pragma once
#include"SVC_Gcommande.h"

namespace G7interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox_montantHT;
	private: System::Windows::Forms::TextBox^ textBox_montantTVA;
	private: System::Windows::Forms::TextBox^ textBox_montantTTC;




	private: System::Windows::Forms::ListBox^ listBox_nom;

	private: System::Windows::Forms::ListBox^ listBox_ref;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_quantite;
	protected:


	private: 

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox_montantHT = (gcnew System::Windows::Forms::TextBox());
			this->textBox_montantTVA = (gcnew System::Windows::Forms::TextBox());
			this->textBox_montantTTC = (gcnew System::Windows::Forms::TextBox());
			this->listBox_nom = (gcnew System::Windows::Forms::ListBox());
			this->listBox_ref = (gcnew System::Windows::Forms::ListBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_quantite = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_quantite))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(17, 224);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(998, 323);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dataGridView1_CellContentClick);
			// 
			// textBox_montantHT
			// 
			this->textBox_montantHT->Location = System::Drawing::Point(705, 60);
			this->textBox_montantHT->Name = L"textBox_montantHT";
			this->textBox_montantHT->Size = System::Drawing::Size(343, 26);
			this->textBox_montantHT->TabIndex = 44;
			// 
			// textBox_montantTVA
			// 
			this->textBox_montantTVA->Location = System::Drawing::Point(705, 114);
			this->textBox_montantTVA->Name = L"textBox_montantTVA";
			this->textBox_montantTVA->Size = System::Drawing::Size(343, 26);
			this->textBox_montantTVA->TabIndex = 43;
			// 
			// textBox_montantTTC
			// 
			this->textBox_montantTTC->Location = System::Drawing::Point(705, 171);
			this->textBox_montantTTC->Name = L"textBox_montantTTC";
			this->textBox_montantTTC->Size = System::Drawing::Size(343, 26);
			this->textBox_montantTTC->TabIndex = 42;
			// 
			// listBox_nom
			// 
			this->listBox_nom->FormattingEnabled = true;
			this->listBox_nom->ItemHeight = 20;
			this->listBox_nom->Location = System::Drawing::Point(192, 111);
			this->listBox_nom->Name = L"listBox_nom";
			this->listBox_nom->Size = System::Drawing::Size(343, 44);
			this->listBox_nom->TabIndex = 41;
			// 
			// listBox_ref
			// 
			this->listBox_ref->FormattingEnabled = true;
			this->listBox_ref->ItemHeight = 20;
			this->listBox_ref->Location = System::Drawing::Point(192, 41);
			this->listBox_ref->Name = L"listBox_ref";
			this->listBox_ref->Size = System::Drawing::Size(343, 44);
			this->listBox_ref->TabIndex = 40;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Transparent;
			this->label12->Location = System::Drawing::Point(12, 41);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(188, 29);
			this->label12->TabIndex = 39;
			this->label12->Text = L"Référence article :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Transparent;
			this->label11->Location = System::Drawing::Point(12, 111);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(133, 29);
			this->label11->TabIndex = 38;
			this->label11->Text = L"Nom article:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(12, 171);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(111, 29);
			this->label10->TabIndex = 37;
			this->label10->Text = L"Quantité :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(553, 59);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(144, 29);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Montant HT :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(553, 115);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(156, 29);
			this->label8->TabIndex = 35;
			this->label8->Text = L"Montant TVA :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(553, 168);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(154, 29);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Montant TTC :";
			// 
			// numericUpDown_quantite
			// 
			this->numericUpDown_quantite->Location = System::Drawing::Point(192, 174);
			this->numericUpDown_quantite->Name = L"numericUpDown_quantite";
			this->numericUpDown_quantite->Size = System::Drawing::Size(343, 26);
			this->numericUpDown_quantite->TabIndex = 45;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1063, 559);
			this->Controls->Add(this->numericUpDown_quantite);
			this->Controls->Add(this->textBox_montantHT);
			this->Controls->Add(this->textBox_montantTVA);
			this->Controls->Add(this->textBox_montantTTC);
			this->Controls->Add(this->listBox_nom);
			this->Controls->Add(this->listBox_ref);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_quantite))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
