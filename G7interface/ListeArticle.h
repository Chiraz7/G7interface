#pragma once

namespace G7interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Listearticle
	/// </summary>
	public ref class Listearticle : public System::Windows::Forms::Form
	{
	public:
		DataTable^ dt;
	private: System::Windows::Forms::Button^ button1;
	public:
		bool valider = false;
		String^ ref;
		Listearticle(void)
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
		~Listearticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ addbtn;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Reference;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Designation;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Couleur;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EnStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Prix_HT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Prix_TTC;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Listearticle::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Reference = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Designation = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Couleur = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EnStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prix_HT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prix_TTC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->addbtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Reference,
					this->Designation, this->Couleur, this->EnStock, this->Prix_HT, this->Prix_TTC
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 118);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(786, 345);
			this->dataGridView1->TabIndex = 0;
			// 
			// Reference
			// 
			this->Reference->HeaderText = L"Reference";
			this->Reference->MinimumWidth = 8;
			this->Reference->Name = L"Reference";
			this->Reference->ReadOnly = true;
			// 
			// Designation
			// 
			this->Designation->HeaderText = L"Designation";
			this->Designation->MinimumWidth = 8;
			this->Designation->Name = L"Designation";
			this->Designation->ReadOnly = true;
			// 
			// Couleur
			// 
			this->Couleur->HeaderText = L"Couleur";
			this->Couleur->MinimumWidth = 8;
			this->Couleur->Name = L"Couleur";
			this->Couleur->ReadOnly = true;
			// 
			// EnStock
			// 
			this->EnStock->HeaderText = L"EnStock";
			this->EnStock->MinimumWidth = 8;
			this->EnStock->Name = L"EnStock";
			this->EnStock->ReadOnly = true;
			// 
			// Prix_HT
			// 
			this->Prix_HT->HeaderText = L"Prix_HT";
			this->Prix_HT->MinimumWidth = 8;
			this->Prix_HT->Name = L"Prix_HT";
			this->Prix_HT->ReadOnly = true;
			// 
			// Prix_TTC
			// 
			this->Prix_TTC->HeaderText = L"Prix_TTC";
			this->Prix_TTC->MinimumWidth = 8;
			this->Prix_TTC->Name = L"Prix_TTC";
			this->Prix_TTC->ReadOnly = true;
			// 
			// addbtn
			// 
			this->addbtn->BackColor = System::Drawing::Color::Transparent;
			this->addbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->addbtn->FlatAppearance->BorderSize = 0;
			this->addbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addbtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->addbtn->Location = System::Drawing::Point(538, 47);
			this->addbtn->Name = L"addbtn";
			this->addbtn->Size = System::Drawing::Size(108, 42);
			this->addbtn->TabIndex = 1;
			this->addbtn->Text = L"Ajouter";
			this->addbtn->UseVisualStyleBackColor = false;
			this->addbtn->Click += gcnew System::EventHandler(this, &Listearticle::addbtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(32, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Reference Article";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(232, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(300, 37);
			this->textBox1->TabIndex = 3;
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Listearticle::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(626, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(34, 40);
			this->button1->TabIndex = 4;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Listearticle::button1_Click);
			// 
			// Listearticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(825, 488);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->addbtn);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(825, 488);
			this->MinimumSize = System::Drawing::Size(825, 488);
			this->Name = L"Listearticle";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Listearticle";
			this->Load += gcnew System::EventHandler(this, &Listearticle::Listearticle_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Listearticle_Load(System::Object^ sender, System::EventArgs^ e) {

		for (int i = 0; i < dt->Rows->Count; i++) {
			dataGridView1->Rows->Add(dt->Rows[i]->ItemArray[1]->ToString(),
				dt->Rows[i]->ItemArray[2]->ToString(),
				dt->Rows[i]->ItemArray[7]->ToString(),
				dt->Rows[i]->ItemArray[5]->ToString(),
				dt->Rows[i]->ItemArray[3]->ToString(),
				dt->Rows[i]->ItemArray[8]->ToString());

			//ref,des,couleur,enstock,prixht,prixttc
		}
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		for (size_t i = 0; i < dataGridView1->Rows->Count; i++)
		{
			dataGridView1->Rows->RemoveAt(i);
			i--;
		}
		Listearticle_Load(sender, e);
		if (textBox1->Text != "") {
			for (int i = 0; i < dataGridView1->Rows->Count; i++)
			{
				if (!dataGridView1->Rows[i]->Cells[0]->Value->ToString()->StartsWith(textBox1->Text)) {
					dataGridView1->Rows->RemoveAt(i);
					i--;
				}
			}
		}
	}
	private: System::Void addbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ref = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		this->valider = true;
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}