#pragma once
#include"SVC_Gemploye.h"
namespace G7interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Composant;
	using namespace Service;

	/// <summary>
	/// Description résumée de FormePersonnel
	/// </summary>
	public ref class FormePersonnel : public System::Windows::Forms::Form
	{
	public:
		FormePersonnel(void)
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
		~FormePersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: SVC_Gemploye^ gestionpersonnel= gcnew SVC_Gemploye();
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_ID;
	private: System::Windows::Forms::TextBox^ textBox_nom;
	private: System::Windows::Forms::TextBox^ textBox_prenom;
	private: System::Windows::Forms::TextBox^ textBox_adresse;






	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox_ville;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ComboBox^ comboBox_sup;

	private: System::Windows::Forms::Label^ label8;



	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormePersonnel::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_ID = (gcnew System::Windows::Forms::TextBox());
			this->textBox_nom = (gcnew System::Windows::Forms::TextBox());
			this->textBox_prenom = (gcnew System::Windows::Forms::TextBox());
			this->textBox_adresse = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox_ville = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox_sup = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(10, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Afficher";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormePersonnel::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(350, 203);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Créer";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormePersonnel::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(10, 623);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 38);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormePersonnel::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Transparent;
			this->button4->Location = System::Drawing::Point(350, 623);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 38);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Supprimer";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FormePersonnel::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(109, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"ID :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(109, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Nom : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(109, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Prénom :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(529, 189);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(571, 312);
			this->dataGridView1->TabIndex = 8;
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(2, 1);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(54, 50);
			this->button6->TabIndex = 9;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &FormePersonnel::button6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(524, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 29);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Adresse :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(524, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 29);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Ville : ";
			// 
			// textBox_ID
			// 
			this->textBox_ID->Location = System::Drawing::Point(234, 12);
			this->textBox_ID->Name = L"textBox_ID";
			this->textBox_ID->Size = System::Drawing::Size(240, 26);
			this->textBox_ID->TabIndex = 12;
			// 
			// textBox_nom
			// 
			this->textBox_nom->Location = System::Drawing::Point(234, 50);
			this->textBox_nom->Name = L"textBox_nom";
			this->textBox_nom->Size = System::Drawing::Size(240, 26);
			this->textBox_nom->TabIndex = 13;
			// 
			// textBox_prenom
			// 
			this->textBox_prenom->Location = System::Drawing::Point(234, 88);
			this->textBox_prenom->Name = L"textBox_prenom";
			this->textBox_prenom->Size = System::Drawing::Size(240, 26);
			this->textBox_prenom->TabIndex = 14;
			// 
			// textBox_adresse
			// 
			this->textBox_adresse->Location = System::Drawing::Point(724, 15);
			this->textBox_adresse->Name = L"textBox_adresse";
			this->textBox_adresse->Size = System::Drawing::Size(376, 26);
			this->textBox_adresse->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(529, 516);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox5->Size = System::Drawing::Size(571, 147);
			this->textBox5->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(524, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(203, 29);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Date d\'embauche : ";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(724, 131);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(376, 26);
			this->dateTimePicker1->TabIndex = 20;
			// 
			// comboBox_ville
			// 
			this->comboBox_ville->FormattingEnabled = true;
			this->comboBox_ville->Location = System::Drawing::Point(724, 69);
			this->comboBox_ville->Name = L"comboBox_ville";
			this->comboBox_ville->Size = System::Drawing::Size(376, 28);
			this->comboBox_ville->TabIndex = 21;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(151, 405);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(187, 70);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Enregistrer";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FormePersonnel::button5_Click);
			// 
			// comboBox_sup
			// 
			this->comboBox_sup->FormattingEnabled = true;
			this->comboBox_sup->Location = System::Drawing::Point(234, 128);
			this->comboBox_sup->Name = L"comboBox_sup";
			this->comboBox_sup->Size = System::Drawing::Size(241, 28);
			this->comboBox_sup->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(109, 131);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 29);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Supérieur :";
			// 
			// FormePersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1112, 667);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox_sup);
			this->Controls->Add(this->comboBox_ville);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox_adresse);
			this->Controls->Add(this->textBox_prenom);
			this->Controls->Add(this->textBox_nom);
			this->Controls->Add(this->textBox_ID);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"FormePersonnel";
			this->Text = L"FormePersonnel";
			this->Load += gcnew System::EventHandler(this, &FormePersonnel::FormePersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Bouton Afficher
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		   //Bouton Créer
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		   //Bouton Modifier
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
		   //Bouton Supprimer
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
		   // DataGridView de personnel
	private: System::Void FormePersonnel_Load(System::Object^ sender, System::EventArgs^ e);
		   // Bouton RETOUR
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);  
	   //Bouton Enregistrer
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
};
} 

