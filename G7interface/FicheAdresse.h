#pragma once

namespace G7interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button_valider;
	private: System::Windows::Forms::Button^ button_ajouter_adr;
	private: System::Windows::Forms::Button^ button_modifier_adr;
	private: System::Windows::Forms::Button^ button_supprimer_adr;




    
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox_Ville = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_adresse = (gcnew System::Windows::Forms::TextBox());
			this->button_valider = (gcnew System::Windows::Forms::Button());
			this->button_ajouter_adr = (gcnew System::Windows::Forms::Button());
			this->button_modifier_adr = (gcnew System::Windows::Forms::Button());
			this->button_supprimer_adr = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(32, 128);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(887, 228);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(400, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ville";
			// 
			// comboBox_Ville
			// 
			this->comboBox_Ville->FormattingEnabled = true;
			this->comboBox_Ville->Location = System::Drawing::Point(464, 15);
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
			// 
			// button_valider
			// 
			this->button_valider->Location = System::Drawing::Point(822, 362);
			this->button_valider->Name = L"button_valider";
			this->button_valider->Size = System::Drawing::Size(97, 41);
			this->button_valider->TabIndex = 5;
			this->button_valider->Text = L"Valider";
			this->button_valider->UseVisualStyleBackColor = true;
			this->button_valider->Click += gcnew System::EventHandler(this, &FicheAdresse::button_valider_Click);
			// 
			// button_ajouter_adr
			// 
			this->button_ajouter_adr->Location = System::Drawing::Point(80, 72);
			this->button_ajouter_adr->Name = L"button_ajouter_adr";
			this->button_ajouter_adr->Size = System::Drawing::Size(143, 39);
			this->button_ajouter_adr->TabIndex = 6;
			this->button_ajouter_adr->Text = L"Ajouter Adresse";
			this->button_ajouter_adr->UseVisualStyleBackColor = true;
			this->button_ajouter_adr->Click += gcnew System::EventHandler(this, &FicheAdresse::button1_Click);
			// 
			// button_modifier_adr
			// 
			this->button_modifier_adr->Location = System::Drawing::Point(341, 72);
			this->button_modifier_adr->Name = L"button_modifier_adr";
			this->button_modifier_adr->Size = System::Drawing::Size(162, 39);
			this->button_modifier_adr->TabIndex = 7;
			this->button_modifier_adr->Text = L"Modifier Adresse";
			this->button_modifier_adr->UseVisualStyleBackColor = true;
			this->button_modifier_adr->Click += gcnew System::EventHandler(this, &FicheAdresse::button2_Click);
			// 
			// button_supprimer_adr
			// 
			this->button_supprimer_adr->Location = System::Drawing::Point(596, 72);
			this->button_supprimer_adr->Name = L"button_supprimer_adr";
			this->button_supprimer_adr->Size = System::Drawing::Size(209, 39);
			this->button_supprimer_adr->TabIndex = 8;
			this->button_supprimer_adr->Text = L"Supprimer Adresse";
			this->button_supprimer_adr->UseVisualStyleBackColor = true;
			this->button_supprimer_adr->Click += gcnew System::EventHandler(this, &FicheAdresse::button3_Click);
			// 
			// FicheAdresse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(974, 419);
			this->Controls->Add(this->button_supprimer_adr);
			this->Controls->Add(this->button_modifier_adr);
			this->Controls->Add(this->button_ajouter_adr);
			this->Controls->Add(this->button_valider);
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

private: System::Void button_valider_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void FicheAdresse_Load(System::Object^ sender, System::EventArgs^ e);
public:
	String^ get_adresse();
	String^ get_ville();
	void set_combobox_ville(DataTable^);
	void set_ville(String^);
	void set_adresse(String^);
};
}
