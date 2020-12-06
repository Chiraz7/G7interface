#pragma once
#include "SVC_GStatistique.h"

namespace G7interface {
	using namespace Service;
	using namespace Composant;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormeStatistiques
	/// </summary>
	public ref class FormeStatistiques : public System::Windows::Forms::Form
	{
	public:
		FormeStatistiques(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private:Service::SVC_Gstatistique^ gestionstats = gcnew Service::SVC_Gstatistique();

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormeStatistiques()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ actualiser;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView_plusvendus;
	private: System::Windows::Forms::DataGridView^ dataGridView_moins_vendus;
	private: System::Windows::Forms::DataGridView^ dataGridView_seuil;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ debut;
	private: System::Windows::Forms::DateTimePicker^ fin;
	private: System::Windows::Forms::ComboBox^ lstclient;
	private: System::Windows::Forms::Label^ montant_client;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ chiffre_affaire;
	private: System::Windows::Forms::Label^ valeur_stock;
	private: System::Windows::Forms::Label^ panier_moyen;
	private: System::Windows::Forms::Label^ label8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormeStatistiques::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->actualiser = (gcnew System::Windows::Forms::Button());
			this->dataGridView_plusvendus = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView_moins_vendus = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView_seuil = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->debut = (gcnew System::Windows::Forms::DateTimePicker());
			this->fin = (gcnew System::Windows::Forms::DateTimePicker());
			this->lstclient = (gcnew System::Windows::Forms::ComboBox());
			this->montant_client = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chiffre_affaire = (gcnew System::Windows::Forms::Label());
			this->valeur_stock = (gcnew System::Windows::Forms::Label());
			this->panier_moyen = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_plusvendus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_moins_vendus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_seuil))->BeginInit();
			this->SuspendLayout();
			// 
			// actualiser
			// 
			this->actualiser->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->actualiser->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->actualiser->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"actualiser.Image")));
			this->actualiser->Location = System::Drawing::Point(184, 521);
			this->actualiser->Name = L"actualiser";
			this->actualiser->Size = System::Drawing::Size(157, 47);
			this->actualiser->TabIndex = 0;
			this->actualiser->Text = L"Actualiser";
			this->actualiser->UseVisualStyleBackColor = true;
			// 
			// dataGridView_plusvendus
			// 
			this->dataGridView_plusvendus->AllowUserToAddRows = false;
			this->dataGridView_plusvendus->AllowUserToDeleteRows = false;
			this->dataGridView_plusvendus->AllowUserToResizeColumns = false;
			this->dataGridView_plusvendus->AllowUserToResizeRows = false;
			this->dataGridView_plusvendus->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_plusvendus->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView_plusvendus->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_plusvendus->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView_plusvendus->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_plusvendus->Location = System::Drawing::Point(503, 127);
			this->dataGridView_plusvendus->Name = L"dataGridView_plusvendus";
			this->dataGridView_plusvendus->RowHeadersVisible = false;
			this->dataGridView_plusvendus->RowHeadersWidth = 62;
			this->dataGridView_plusvendus->RowTemplate->Height = 28;
			this->dataGridView_plusvendus->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_plusvendus->Size = System::Drawing::Size(271, 487);
			this->dataGridView_plusvendus->TabIndex = 1;
			// 
			// dataGridView_moins_vendus
			// 
			this->dataGridView_moins_vendus->AllowUserToAddRows = false;
			this->dataGridView_moins_vendus->AllowUserToDeleteRows = false;
			this->dataGridView_moins_vendus->AllowUserToResizeColumns = false;
			this->dataGridView_moins_vendus->AllowUserToResizeRows = false;
			this->dataGridView_moins_vendus->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_moins_vendus->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView_moins_vendus->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_moins_vendus->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView_moins_vendus->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_moins_vendus->Location = System::Drawing::Point(789, 127);
			this->dataGridView_moins_vendus->Name = L"dataGridView_moins_vendus";
			this->dataGridView_moins_vendus->RowHeadersVisible = false;
			this->dataGridView_moins_vendus->RowHeadersWidth = 62;
			this->dataGridView_moins_vendus->RowTemplate->Height = 28;
			this->dataGridView_moins_vendus->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_moins_vendus->Size = System::Drawing::Size(262, 487);
			this->dataGridView_moins_vendus->TabIndex = 2;
			// 
			// dataGridView_seuil
			// 
			this->dataGridView_seuil->AllowUserToAddRows = false;
			this->dataGridView_seuil->AllowUserToDeleteRows = false;
			this->dataGridView_seuil->AllowUserToResizeColumns = false;
			this->dataGridView_seuil->AllowUserToResizeRows = false;
			this->dataGridView_seuil->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_seuil->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView_seuil->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_seuil->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView_seuil->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_seuil->Location = System::Drawing::Point(1066, 127);
			this->dataGridView_seuil->Name = L"dataGridView_seuil";
			this->dataGridView_seuil->RowHeadersVisible = false;
			this->dataGridView_seuil->RowHeadersWidth = 62;
			this->dataGridView_seuil->RowTemplate->Height = 28;
			this->dataGridView_seuil->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_seuil->Size = System::Drawing::Size(262, 487);
			this->dataGridView_seuil->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(837, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Articles moins vendus";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(585, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Articles plus vendus";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(1114, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Articles sous seuil";
			// 
			// debut
			// 
			this->debut->Location = System::Drawing::Point(12, 127);
			this->debut->Name = L"debut";
			this->debut->Size = System::Drawing::Size(200, 26);
			this->debut->TabIndex = 7;
			// 
			// fin
			// 
			this->fin->Location = System::Drawing::Point(275, 127);
			this->fin->Name = L"fin";
			this->fin->Size = System::Drawing::Size(200, 26);
			this->fin->TabIndex = 8;
			// 
			// lstclient
			// 
			this->lstclient->FormattingEnabled = true;
			this->lstclient->Location = System::Drawing::Point(126, 274);
			this->lstclient->Name = L"lstclient";
			this->lstclient->Size = System::Drawing::Size(242, 28);
			this->lstclient->TabIndex = 9;
			// 
			// montant_client
			// 
			this->montant_client->AutoSize = true;
			this->montant_client->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->montant_client->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->montant_client->ForeColor = System::Drawing::Color::Transparent;
			this->montant_client->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"montant_client.Image")));
			this->montant_client->Location = System::Drawing::Point(385, 274);
			this->montant_client->Name = L"montant_client";
			this->montant_client->Size = System::Drawing::Size(112, 24);
			this->montant_client->TabIndex = 10;
			this->montant_client->Text = L"Achat Client";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(164, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 24);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Chiffre d\'affaire";
			// 
			// chiffre_affaire
			// 
			this->chiffre_affaire->AutoSize = true;
			this->chiffre_affaire->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->chiffre_affaire->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chiffre_affaire->ForeColor = System::Drawing::Color::Transparent;
			this->chiffre_affaire->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chiffre_affaire.Image")));
			this->chiffre_affaire->Location = System::Drawing::Point(164, 212);
			this->chiffre_affaire->Name = L"chiffre_affaire";
			this->chiffre_affaire->Size = System::Drawing::Size(141, 24);
			this->chiffre_affaire->TabIndex = 12;
			this->chiffre_affaire->Text = L"Chiffre d\'affaire";
			// 
			// valeur_stock
			// 
			this->valeur_stock->AutoSize = true;
			this->valeur_stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->valeur_stock->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->valeur_stock->ForeColor = System::Drawing::Color::Transparent;
			this->valeur_stock->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"valeur_stock.Image")));
			this->valeur_stock->Location = System::Drawing::Point(15, 449);
			this->valeur_stock->Name = L"valeur_stock";
			this->valeur_stock->Size = System::Drawing::Size(141, 24);
			this->valeur_stock->TabIndex = 13;
			this->valeur_stock->Text = L"Valeur du Stock";
			// 
			// panier_moyen
			// 
			this->panier_moyen->AutoSize = true;
			this->panier_moyen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->panier_moyen->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panier_moyen->ForeColor = System::Drawing::Color::Transparent;
			this->panier_moyen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panier_moyen.Image")));
			this->panier_moyen->Location = System::Drawing::Point(15, 363);
			this->panier_moyen->Name = L"panier_moyen";
			this->panier_moyen->Size = System::Drawing::Size(127, 24);
			this->panier_moyen->TabIndex = 14;
			this->panier_moyen->Text = L"Panier Moyen";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Transparent;
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(8, 278);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 24);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Achat Client";
			// 
			// FormeStatistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1474, 626);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panier_moyen);
			this->Controls->Add(this->valeur_stock);
			this->Controls->Add(this->chiffre_affaire);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->montant_client);
			this->Controls->Add(this->lstclient);
			this->Controls->Add(this->fin);
			this->Controls->Add(this->debut);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView_seuil);
			this->Controls->Add(this->dataGridView_moins_vendus);
			this->Controls->Add(this->dataGridView_plusvendus);
			this->Controls->Add(this->actualiser);
			this->DoubleBuffered = true;
			this->Name = L"FormeStatistiques";
			this->Text = L"FormeStatistiques";
			this->Load += gcnew System::EventHandler(this, &FormeStatistiques::FormeStatistiques_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_plusvendus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_moins_vendus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_seuil))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void FormeStatistiques_Load(System::Object^ sender, System::EventArgs^ e);
};
}
