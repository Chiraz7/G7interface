#pragma once
#include"Adresse.h"
#include"Ville.h"
namespace G7interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Description résumée de FicheAdresse
	/// </summary>
	public ref class FicheAdresse : public System::Windows::Forms::Form
	{
	public:
		FicheAdresse(void)
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
		~FicheAdresse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox_Ville;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_adresse;




	private: System::Windows::Forms::Button^ button1_Ajouter;
	private: System::Windows::Forms::Button^ button1_Modifier;
	private: System::Windows::Forms::Button^ button3_supprimer;
	private: System::Windows::Forms::Button^ button_valider;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id_Adresse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Adresse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ville;




    
	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
	public: List <int >^supprimeradresse=gcnew List <int>;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id_Adresse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Adresse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ville = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox_Ville = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_adresse = (gcnew System::Windows::Forms::TextBox());
			this->button1_Ajouter = (gcnew System::Windows::Forms::Button());
			this->button1_Modifier = (gcnew System::Windows::Forms::Button());
			this->button3_supprimer = (gcnew System::Windows::Forms::Button());
			this->button_valider = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Id_Adresse,
					this->Adresse, this->Ville
			});
			this->dataGridView1->Location = System::Drawing::Point(58, 128);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->ShowCellErrors = false;
			this->dataGridView1->Size = System::Drawing::Size(887, 228);
			this->dataGridView1->TabIndex = 0;
			// 
			// Id_Adresse
			// 
			this->Id_Adresse->HeaderText = L"Id_Adresse";
			this->Id_Adresse->MinimumWidth = 8;
			this->Id_Adresse->Name = L"Id_Adresse";
			this->Id_Adresse->ReadOnly = true;
			// 
			// Adresse
			// 
			this->Adresse->HeaderText = L"Adresse";
			this->Adresse->MinimumWidth = 8;
			this->Adresse->Name = L"Adresse";
			this->Adresse->ReadOnly = true;
			// 
			// Ville
			// 
			this->Ville->HeaderText = L"Ville";
			this->Ville->MinimumWidth = 8;
			this->Ville->Name = L"Ville";
			this->Ville->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(519, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ville";
			// 
			// comboBox_Ville
			// 
			this->comboBox_Ville->FormattingEnabled = true;
			this->comboBox_Ville->Location = System::Drawing::Point(633, 15);
			this->comboBox_Ville->Name = L"comboBox_Ville";
			this->comboBox_Ville->Size = System::Drawing::Size(184, 28);
			this->comboBox_Ville->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Adresse";
			// 
			// textBox_adresse
			// 
			this->textBox_adresse->Location = System::Drawing::Point(119, 20);
			this->textBox_adresse->Name = L"textBox_adresse";
			this->textBox_adresse->Size = System::Drawing::Size(221, 26);
			this->textBox_adresse->TabIndex = 4;
			this->textBox_adresse->TextChanged += gcnew System::EventHandler(this, &FicheAdresse::textBox_adresse_TextChanged);
			// 
			// button1_Ajouter
			// 
			this->button1_Ajouter->Location = System::Drawing::Point(58, 74);
			this->button1_Ajouter->Name = L"button1_Ajouter";
			this->button1_Ajouter->Size = System::Drawing::Size(160, 37);
			this->button1_Ajouter->TabIndex = 9;
			this->button1_Ajouter->Text = L"Ajouter Adresse";
			this->button1_Ajouter->UseVisualStyleBackColor = true;
			this->button1_Ajouter->Click += gcnew System::EventHandler(this, &FicheAdresse::button1_Ajouter_Click);
			// 
			// button1_Modifier
			// 
			this->button1_Modifier->Location = System::Drawing::Point(365, 74);
			this->button1_Modifier->Name = L"button1_Modifier";
			this->button1_Modifier->Size = System::Drawing::Size(168, 37);
			this->button1_Modifier->TabIndex = 10;
			this->button1_Modifier->Text = L"Modifier Adresse";
			this->button1_Modifier->UseVisualStyleBackColor = true;
			this->button1_Modifier->Click += gcnew System::EventHandler(this, &FicheAdresse::button1_Modifier_Click);
			// 
			// button3_supprimer
			// 
			this->button3_supprimer->Location = System::Drawing::Point(662, 74);
			this->button3_supprimer->Name = L"button3_supprimer";
			this->button3_supprimer->Size = System::Drawing::Size(164, 37);
			this->button3_supprimer->TabIndex = 11;
			this->button3_supprimer->Text = L"Supprimer Adresse";
			this->button3_supprimer->UseVisualStyleBackColor = true;
			this->button3_supprimer->Click += gcnew System::EventHandler(this, &FicheAdresse::button3_supprimer_Click);
			// 
			// button_valider
			// 
			this->button_valider->Location = System::Drawing::Point(814, 362);
			this->button_valider->Name = L"button_valider";
			this->button_valider->Size = System::Drawing::Size(105, 45);
			this->button_valider->TabIndex = 12;
			this->button_valider->Text = L"Valider";
			this->button_valider->UseVisualStyleBackColor = true;
			this->button_valider->Click += gcnew System::EventHandler(this, &FicheAdresse::button_valider_Click_1);
			// 
			// FicheAdresse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(974, 419);
			this->Controls->Add(this->button_valider);
			this->Controls->Add(this->button3_supprimer);
			this->Controls->Add(this->button1_Modifier);
			this->Controls->Add(this->button1_Ajouter);
			this->Controls->Add(this->textBox_adresse);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox_Ville);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"FicheAdresse";
			this->Text = L"FicheAdresse";
			this->Load += gcnew System::EventHandler(this, &FicheAdresse::FicheAdresse_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void FicheAdresse_Load(System::Object^ sender, System::EventArgs^ e);
public:
	
	DataTable^ getAdressedatagried();
	System::Void setadresses(List<Composant::Adresse^>^adresse);
	System::Void setcomboville(DataTable^);
private: System::Void button1_Ajouter_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Modifier_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_supprimer_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_valider_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox_adresse_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
