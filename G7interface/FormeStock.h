#pragma once
#include"SVC_Gstock.h"
#include"Article.h"
using namespace Composant;
using namespace Service;
namespace G7interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormeStock
	/// </summary>
	public ref class FormeStock : public System::Windows::Forms::Form
	{
	public:
		FormeStock(void)
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
		~FormeStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_ID;




	private: System::Windows::Forms::TextBox^ textBox_nom;



	private: System::Windows::Forms::TextBox^ textBox_couleur;

	private: System::Windows::Forms::TextBox^ textBox_ref;
	private: System::Windows::Forms::TextBox^ textBox_prixTTC;


	private: System::Windows::Forms::TextBox^ textBox_PrixTVA;

	private: System::Windows::Forms::TextBox^ textBox_prixHT;

	private: System::Windows::Forms::TextBox^ textBox10;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown1_quantite;

	private: System::Windows::Forms::Label^ label10;


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
	private: SVC_Gstock^ gestionstock = gcnew SVC_Gstock();
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2_seuil;

	private: Article^ article = gcnew Article();
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormeStock::typeid));
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->textBox_ID = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_nom = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_couleur = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_ref = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_prixTTC = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_PrixTVA = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_prixHT = (gcnew System::Windows::Forms::TextBox());
			   this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			   this->numericUpDown1_quantite = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->numericUpDown2_seuil = (gcnew System::Windows::Forms::NumericUpDown());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1_quantite))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2_seuil))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Transparent;
			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->ForeColor = System::Drawing::Color::White;
			   this->button1->Location = System::Drawing::Point(5, 183);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(166, 42);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Afficher";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &FormeStock::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::Transparent;
			   this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->ForeColor = System::Drawing::Color::White;
			   this->button2->Location = System::Drawing::Point(326, 183);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(166, 41);
			   this->button2->TabIndex = 1;
			   this->button2->Text = L"Créer";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &FormeStock::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::Transparent;
			   this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button3->ForeColor = System::Drawing::Color::White;
			   this->button3->Location = System::Drawing::Point(5, 616);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(166, 36);
			   this->button3->TabIndex = 2;
			   this->button3->Text = L"Modifier";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &FormeStock::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::Color::Transparent;
			   this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button4->ForeColor = System::Drawing::Color::White;
			   this->button4->Location = System::Drawing::Point(326, 611);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(166, 41);
			   this->button4->TabIndex = 3;
			   this->button4->Text = L"Supprimer";
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &FormeStock::button4_Click);
			   // 
			   // button5
			   // 
			   this->button5->BackColor = System::Drawing::Color::White;
			   this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button5->Location = System::Drawing::Point(554, 589);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(559, 81);
			   this->button5->TabIndex = 4;
			   this->button5->Text = L"Enregistrer";
			   this->button5->UseVisualStyleBackColor = false;
			   this->button5->Click += gcnew System::EventHandler(this, &FormeStock::button5_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::White;
			   this->label1->Location = System::Drawing::Point(96, 18);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(50, 29);
			   this->label1->TabIndex = 5;
			   this->label1->Text = L"ID : ";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Transparent;
			   this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::White;
			   this->label2->Location = System::Drawing::Point(97, 54);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(77, 29);
			   this->label2->TabIndex = 6;
			   this->label2->Text = L"Nom : ";
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(554, 139);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersWidth = 62;
			   this->dataGridView1->RowTemplate->Height = 28;
			   this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			   this->dataGridView1->Size = System::Drawing::Size(559, 321);
			   this->dataGridView1->TabIndex = 8;
			   // 
			   // button6
			   // 
			   this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			   this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->button6->Location = System::Drawing::Point(5, 4);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(56, 50);
			   this->button6->TabIndex = 9;
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &FormeStock::button6_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->BackColor = System::Drawing::Color::Transparent;
			   this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->ForeColor = System::Drawing::Color::White;
			   this->label4->Location = System::Drawing::Point(409, 87);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(116, 29);
			   this->label4->TabIndex = 10;
			   this->label4->Text = L"Quantité : ";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->BackColor = System::Drawing::Color::Transparent;
			   this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->ForeColor = System::Drawing::Color::White;
			   this->label5->Location = System::Drawing::Point(409, 54);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(112, 29);
			   this->label5->TabIndex = 11;
			   this->label5->Text = L"Couleur  : ";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->BackColor = System::Drawing::Color::Transparent;
			   this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->ForeColor = System::Drawing::Color::White;
			   this->label6->Location = System::Drawing::Point(409, 18);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(127, 29);
			   this->label6->TabIndex = 12;
			   this->label6->Text = L"Référence : ";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->BackColor = System::Drawing::Color::Transparent;
			   this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->ForeColor = System::Drawing::Color::White;
			   this->label7->Location = System::Drawing::Point(798, 87);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(107, 29);
			   this->label7->TabIndex = 13;
			   this->label7->Text = L"Prix TTC : ";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->BackColor = System::Drawing::Color::Transparent;
			   this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label8->ForeColor = System::Drawing::Color::White;
			   this->label8->Location = System::Drawing::Point(808, 51);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(68, 29);
			   this->label8->TabIndex = 14;
			   this->label8->Text = L"TVA : ";
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->BackColor = System::Drawing::Color::Transparent;
			   this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label9->ForeColor = System::Drawing::Color::White;
			   this->label9->Location = System::Drawing::Point(798, 18);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(97, 29);
			   this->label9->TabIndex = 15;
			   this->label9->Text = L"Prix HT : ";
			   // 
			   // textBox_ID
			   // 
			   this->textBox_ID->Location = System::Drawing::Point(207, 22);
			   this->textBox_ID->Name = L"textBox_ID";
			   this->textBox_ID->Size = System::Drawing::Size(150, 26);
			   this->textBox_ID->TabIndex = 16;
			   // 
			   // textBox_nom
			   // 
			   this->textBox_nom->Location = System::Drawing::Point(207, 57);
			   this->textBox_nom->Name = L"textBox_nom";
			   this->textBox_nom->Size = System::Drawing::Size(150, 26);
			   this->textBox_nom->TabIndex = 18;
			   // 
			   // textBox_couleur
			   // 
			   this->textBox_couleur->Location = System::Drawing::Point(554, 54);
			   this->textBox_couleur->Name = L"textBox_couleur";
			   this->textBox_couleur->Size = System::Drawing::Size(175, 26);
			   this->textBox_couleur->TabIndex = 20;
			   // 
			   // textBox_ref
			   // 
			   this->textBox_ref->Location = System::Drawing::Point(554, 22);
			   this->textBox_ref->Name = L"textBox_ref";
			   this->textBox_ref->Size = System::Drawing::Size(175, 26);
			   this->textBox_ref->TabIndex = 21;
			   // 
			   // textBox_prixTTC
			   // 
			   this->textBox_prixTTC->Location = System::Drawing::Point(901, 87);
			   this->textBox_prixTTC->Name = L"textBox_prixTTC";
			   this->textBox_prixTTC->Size = System::Drawing::Size(212, 26);
			   this->textBox_prixTTC->TabIndex = 22;
			   // 
			   // textBox_PrixTVA
			   // 
			   this->textBox_PrixTVA->Location = System::Drawing::Point(901, 54);
			   this->textBox_PrixTVA->Name = L"textBox_PrixTVA";
			   this->textBox_PrixTVA->Size = System::Drawing::Size(212, 26);
			   this->textBox_PrixTVA->TabIndex = 23;
			   this->textBox_PrixTVA->TextChanged += gcnew System::EventHandler(this, &FormeStock::calculTTC);
			   // 
			   // textBox_prixHT
			   // 
			   this->textBox_prixHT->Location = System::Drawing::Point(901, 21);
			   this->textBox_prixHT->Name = L"textBox_prixHT";
			   this->textBox_prixHT->Size = System::Drawing::Size(212, 26);
			   this->textBox_prixHT->TabIndex = 24;
			   this->textBox_prixHT->TextChanged += gcnew System::EventHandler(this, &FormeStock::calculTTC);
			   // 
			   // textBox10
			   // 
			   this->textBox10->Location = System::Drawing::Point(554, 466);
			   this->textBox10->Multiline = true;
			   this->textBox10->Name = L"textBox10";
			   this->textBox10->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			   this->textBox10->Size = System::Drawing::Size(559, 117);
			   this->textBox10->TabIndex = 25;
			   // 
			   // numericUpDown1_quantite
			   // 
			   this->numericUpDown1_quantite->Location = System::Drawing::Point(554, 90);
			   this->numericUpDown1_quantite->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			   this->numericUpDown1_quantite->Name = L"numericUpDown1_quantite";
			   this->numericUpDown1_quantite->Size = System::Drawing::Size(175, 26);
			   this->numericUpDown1_quantite->TabIndex = 26;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->BackColor = System::Drawing::Color::Transparent;
			   this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label10->ForeColor = System::Drawing::Color::White;
			   this->label10->Location = System::Drawing::Point(94, 106);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(77, 29);
			   this->label10->TabIndex = 27;
			   this->label10->Text = L"Seuil : ";
			   // 
			   // numericUpDown2_seuil
			   // 
			   this->numericUpDown2_seuil->Location = System::Drawing::Point(207, 106);
			   this->numericUpDown2_seuil->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			   this->numericUpDown2_seuil->Name = L"numericUpDown2_seuil";
			   this->numericUpDown2_seuil->Size = System::Drawing::Size(150, 26);
			   this->numericUpDown2_seuil->TabIndex = 28;
			   // 
			   // FormeStock
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->ClientSize = System::Drawing::Size(1142, 682);
			   this->Controls->Add(this->numericUpDown2_seuil);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->numericUpDown1_quantite);
			   this->Controls->Add(this->textBox10);
			   this->Controls->Add(this->textBox_prixHT);
			   this->Controls->Add(this->textBox_PrixTVA);
			   this->Controls->Add(this->textBox_prixTTC);
			   this->Controls->Add(this->textBox_ref);
			   this->Controls->Add(this->textBox_couleur);
			   this->Controls->Add(this->textBox_nom);
			   this->Controls->Add(this->textBox_ID);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->button6);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->DoubleBuffered = true;
			   this->Name = L"FormeStock";
			   this->Text = L"FormeStock";
			   this->Load += gcnew System::EventHandler(this, &FormeStock::FormeStock_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1_quantite))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2_seuil))->EndInit();
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

	private: System::Void FormeStock_Load(System::Object^ sender, System::EventArgs^ e);
		   //Bouton RETOUR
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);

		   //Bouton Enregistrer
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
     
	private: void calculTTC(System::Object^ Sender, System::EventArgs^ e);
	public:void setarticle(Composant::Article^ article);
	public:Composant::Article^ getarticle(void);
};
}
