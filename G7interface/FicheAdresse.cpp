#include "FicheAdresse.h"
using namespace System;

System::Void G7interface::FicheAdresse::button_valider_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void G7interface::FicheAdresse::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void G7interface::FicheAdresse::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void G7interface::FicheAdresse::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void G7interface::FicheAdresse::FicheAdresse_Load(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

String^ G7interface::FicheAdresse::get_adresse()
{
    return this->textBox_adresse->Text;
}

String^ G7interface::FicheAdresse::get_ville()
{
    return this->comboBox_Ville->Text;
}

void G7interface::FicheAdresse::set_combobox_ville(DataTable^ tableVille)
{
    this->comboBox_Ville->DataSource = tableVille;
    this->comboBox_Ville->ValueMember = "id_ville";
    this->comboBox_Ville->DisplayMember = "nom_ville";
}

void G7interface::FicheAdresse::set_ville(String^ ville)
{
    this->comboBox_Ville->SelectedIndex = comboBox_Ville->FindString(ville);
}

void G7interface::FicheAdresse::set_adresse(String^ adresse)
{
    this->textBox_adresse->Text = adresse;
}
