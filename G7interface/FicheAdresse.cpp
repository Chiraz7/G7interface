#include "FicheAdresse.h"
using namespace System;


System::Void G7interface::FicheAdresse::button_valider_Click_1(System::Object^ sender, System::EventArgs^ e)
{
    
    this->Close();
}



System::Void G7interface::FicheAdresse::FicheAdresse_Load(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}


System::Data::DataTable^ G7interface::FicheAdresse::getAdressedatagried()
{
    DataTable^ dadresse = gcnew DataTable();
    dadresse->Columns->Add("Id");
    dadresse->Columns->Add("Adresse");
    dadresse->Columns->Add("Ville");
    for (int i = 0; i < dataGridView1->Rows->Count - 1; i++) {
        dadresse->Rows->Add(Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value), Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value), Convert::ToString(dataGridView1->Rows[i]->Cells[2]->Value));
    }
    return dadresse;
}

System::Void G7interface::FicheAdresse::setadresses(List<Composant::Adresse^>^ adresse)
{   
    for (int i = 0; i < adresse->Count; i++) {
        comboBox_Ville->SelectedValue = adresse[i]->getIdVille();
        this->dataGridView1->Rows->Add(adresse[i]->getIdAdresse(), adresse[i]->getAdresse(), comboBox_Ville->GetItemText(comboBox_Ville->SelectedItem));
    }
    comboBox_Ville->SelectedIndex = 0;
}


System::Void G7interface::FicheAdresse::setcomboville(DataTable^ ville)
{
   
    this->comboBox_Ville->DataSource= ville;
    this->comboBox_Ville->ValueMember = "Id_Ville";
    this->comboBox_Ville->DisplayMember = "Nom_Ville";
}
   

System::Void G7interface::FicheAdresse::button1_Ajouter_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->dataGridView1->Rows->Add(0, this->textBox_adresse->Text, this->comboBox_Ville->Text);
}

System::Void G7interface::FicheAdresse::button1_Modifier_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->dataGridView1->SelectedRows[0]->Cells[1]->Value = textBox_adresse->Text;
    this->dataGridView1->SelectedRows[0]->Cells[2]->Value = comboBox_Ville->Text;
}

System::Void G7interface::FicheAdresse::button3_supprimer_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->supprimeradresse->Add(Convert::ToInt32(this->dataGridView1->SelectedRows[0]->Cells[0]->Value));
    this->dataGridView1->Rows->Remove(dataGridView1->SelectedRows[0]);
}

