#include "FormePersonnel.h"

System::Void G7interface::FormePersonnel::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->gestionpersonnel->afficher(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	this->textBox_ID->Text = Convert::ToString(gestionpersonnel->personnel->get_id());
	this->textBox_nom->Text = gestionpersonnel->personnel->get_nom();
	this->textBox_prenom->Text = gestionpersonnel->personnel->get_prenom();
	DateTime^ date = gestionpersonnel->personnel->get_date_embauche();
	this->dateTimePicker1->Value = DateTime(date->Year, date->Month, date->Day);
	this->textBox_adresse->Text = this->gestionpersonnel->adresse->getAdresse();
	this->comboBox_ville->SelectedValue = gestionpersonnel->ville->getIdVille();
}

System::Void G7interface::FormePersonnel::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox1->Checked) {
		this->gestionpersonnel->ajouter(textBox_nom->Text, textBox_prenom->Text, dateTimePicker1->Value, textBox_adresse->Text, comboBox_ville->Text);
	}
	else
	{
		this->gestionpersonnel->ajouter(textBox_nom->Text, textBox_prenom->Text, dateTimePicker1->Value, textBox_adresse->Text, comboBox_ville->Text,checkBox1->Checked);
	}
	FormePersonnel_Load(sender, e);
}

System::Void G7interface::FormePersonnel::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	this->gestionpersonnel->modifier(Convert::ToInt32(textBox_ID->Text),textBox_nom->Text, textBox_prenom->Text, dateTimePicker1->Value, textBox_adresse->Text, comboBox_ville->Text);
	FormePersonnel_Load(sender, e);
}

System::Void G7interface::FormePersonnel::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->gestionpersonnel->supprimer(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	FormePersonnel_Load(sender, e);
}

System::Void G7interface::FormePersonnel::FormePersonnel_Load(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->DataSource = this->gestionpersonnel->listeemploye();
	comboBox_ville->DataSource = this->gestionpersonnel->liste_ville();
	comboBox_ville->DisplayMember = "Nom_Ville";
	comboBox_ville->ValueMember = "Id_Ville";
	this->comboBox_sup->DataSource = this->gestionpersonnel->cad->getRows("SELECT Id_personnel, CONCAT(nom_P,' ',prenom_P) as employe from personnel");
	this->comboBox_sup->ValueMember = "Id_personnel";
	this->comboBox_sup->DisplayMember = "Employe";
}

System::Void G7interface::FormePersonnel::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Void G7interface::FormePersonnel::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

