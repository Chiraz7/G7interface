#pragma once

namespace G7interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Client
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{
	public:
		Client(void)
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
		~Client()
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Client::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->button1->Location = System::Drawing::Point(7, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Afficher";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Client::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(330, 161);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 45);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Créer";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Client::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(6, 591);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Client::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(330, 591);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 40);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Supprimer";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Client::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(521, 176);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(531, 238);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Client::dataGridView1_CellContentClick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(521, 550);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(531, 81);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Enregistrer";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Client::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(87, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 29);
			this->label1->TabIndex = 6;
			this->label1->Text = L"ID :";
			this->label1->Click += gcnew System::EventHandler(this, &Client::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(87, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 29);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Nom : ";
			this->label2->Click += gcnew System::EventHandler(this, &Client::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(87, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 29);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Prénom : ";
			this->label3->Click += gcnew System::EventHandler(this, &Client::label3_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(6, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(56, 50);
			this->button6->TabIndex = 9;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Client::button6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(516, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(202, 29);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Date de naissance :";
			this->label4->Click += gcnew System::EventHandler(this, &Client::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(516, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(199, 29);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Date du 1er achat :";
			this->label5->Click += gcnew System::EventHandler(this, &Client::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(516, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(250, 29);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Adresse de facturation : ";
			this->label6->Click += gcnew System::EventHandler(this, &Client::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(516, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(220, 29);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Adresse de livraison :";
			this->label7->Click += gcnew System::EventHandler(this, &Client::label7_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(195, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(260, 26);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Client::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(195, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(260, 26);
			this->textBox2->TabIndex = 15;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Client::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(195, 74);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(260, 26);
			this->textBox3->TabIndex = 16;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Client::textBox3_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(764, 92);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox5->Size = System::Drawing::Size(288, 26);
			this->textBox5->TabIndex = 18;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Client::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(764, 133);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox6->Size = System::Drawing::Size(288, 26);
			this->textBox6->TabIndex = 19;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Client::textBox6_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(521, 420);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox8->Size = System::Drawing::Size(531, 124);
			this->textBox8->TabIndex = 21;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Client::textBox8_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(764, 15);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(288, 26);
			this->dateTimePicker1->TabIndex = 24;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Client::dateTimePicker1_ValueChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(764, 52);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(288, 26);
			this->dateTimePicker2->TabIndex = 25;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &Client::dateTimePicker2_ValueChanged);
			// 
			// Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1064, 644);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"Client";
			this->Text = L"Client";
			this->Load += gcnew System::EventHandler(this, &Client::Client_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// BOUTON AFFICHER
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   // BOUTON CREER
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   // BOUTON MODIFIER
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // BOUTON SUPPRIMER
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Client_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   // BOUTON RETOUR 
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   // LABEL ID
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // TEXTBOX ID
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL NOM
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // TEXTBOX NOM
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL PRENOM
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // TEXTBOX PRENOM
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL DATE DE NAISSANCE
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
	  
	   // LABEL DATE DU PREMIER ACHAT
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
	 
	   // LABEL ADRESSE DE LIVRAISON
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // TEXTBOX ADRESSE DE LIVRAISON
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   // LABEL ADRESSE DE FACTURATION
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // TEXTBOX ADRESSE DE FACTURATION 
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   // DATEGRIDVIEW
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
	   // TEXTBOX MESSAGE
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   //BOUTON ENREGISTRER
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // Date de naissance
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   //Date du premier achat
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
