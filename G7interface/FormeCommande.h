#pragma once

namespace G7interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de FormeCommande
	/// </summary>
	public ref class FormeCommande : public System::Windows::Forms::Form
	{
	public:
		FormeCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~FormeCommande()
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;








	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;











	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormeCommande::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(5, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Afficher";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormeCommande::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(281, 265);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cr�er";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormeCommande::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(5, 589);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 38);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormeCommande::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(281, 589);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 38);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Supprimer";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FormeCommande::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(81, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"ID : ";
			this->label1->Click += gcnew System::EventHandler(this, &FormeCommande::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(81, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(238, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"R�f�rence commande :";
			this->label2->Click += gcnew System::EventHandler(this, &FormeCommande::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(81, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(190, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Date de livraison :";
			this->label3->Click += gcnew System::EventHandler(this, &FormeCommande::label3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(553, 265);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(550, 255);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormeCommande::dataGridView1_CellContentClick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(139, 418);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 66);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Enregistrer";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FormeCommande::button5_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(5, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(51, 48);
			this->button6->TabIndex = 9;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &FormeCommande::button6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(81, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(181, 29);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Date d\'�mission :";
			this->label4->Click += gcnew System::EventHandler(this, &FormeCommande::label4_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(0, 173);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(316, 29);
			this->label13->TabIndex = 19;
			this->label13->Text = L" Date enregistrement du solde:";
			this->label13->Click += gcnew System::EventHandler(this, &FormeCommande::label13_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(553, 526);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(550, 101);
			this->textBox1->TabIndex = 20;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormeCommande::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(325, 17);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(182, 26);
			this->textBox2->TabIndex = 21;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &FormeCommande::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(325, 47);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(205, 26);
			this->textBox3->TabIndex = 22;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &FormeCommande::textBox3_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(325, 109);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(212, 26);
			this->dateTimePicker1->TabIndex = 34;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &FormeCommande::dateTimePicker1_ValueChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(325, 78);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(212, 26);
			this->dateTimePicker2->TabIndex = 35;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &FormeCommande::dateTimePicker2_ValueChanged);
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Location = System::Drawing::Point(325, 170);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(182, 26);
			this->dateTimePicker4->TabIndex = 37;
			this->dateTimePicker4->ValueChanged += gcnew System::EventHandler(this, &FormeCommande::dateTimePicker4_ValueChanged);
			// 
			// FormeCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1115, 639);
			this->Controls->Add(this->dateTimePicker4);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"FormeCommande";
			this->Text = L"FormeCommande";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//BOUTON AFFICHER
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   // BOUTON CREER
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //BOUTON MODIFIER
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //BOUTON SUPPRIMER
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //BOUTON RETOUR
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();//Bouton retour
}	   
	   // TEXTBOX ID 
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   // TEXTBOX REFERENCE COMMANDE
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	
	 
	  
	   // LISTBOX MOYEN DE PAIEMENT
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   
	   // LISTBOX REFERENCE ARTICLE
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   // LISTBOX NOM ARTICLE
private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   // TEXTBOX QUANTITE
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   // TEXTBOX MONTANT HT 
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   // TEXTBOX MONTANT TVA
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   //TEXTBOX MONTANT TTC
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   // DATAGRIDVIEW
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
	   //TEXTBOX MESSAGE
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   //BOUTON ENREGISTRER
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL ID 
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL REFERENCE COMMANDE
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL DATE DE LIVRAISON
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL DATE D'EMISSION
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL DATE DE PAIEMENT
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL MOYEN DE PAIEMENT
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL DATE D'ENREGISTREMENT DU SOLDE
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL REFERENCE ARTICLE
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL NOM ARTICLE
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL QUANTITE
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL MONTANT HT 
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL MONTANT TVA
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //LABEL MONTANT TTC
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //Date de livraison
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   //Date d'�mission
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   //Date de paiement
private: System::Void dateTimePicker3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   //Date d'enregistrement du solde
private: System::Void dateTimePicker4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
