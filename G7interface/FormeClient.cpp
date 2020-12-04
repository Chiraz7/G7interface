#include "FormeClient.h"

System::Void G7interface::FormeClient::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->gestionclient->afficher(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	this->set_client(this->gestionclient->get_client());
	FormeClient_Load(sender,e);

}

System::Void G7interface::FormeClient::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void G7interface::FormeClient::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void G7interface::FormeClient::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void G7interface::FormeClient::FormeClient_Load(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->DataSource = this->gestionclient->listeclients();
}

System::Void G7interface::FormeClient::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Void G7interface::FormeClient::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void G7interface::FormeClient::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheAdresse^ Forme = gcnew FicheAdresse();
	this->Hide();
	Forme->ShowDialog();
	this->Show();
}

void G7interface::FormeClient::set_client(Composant::Client^ c)
{
	this->client = c;
	this->textBox_id->Text = Convert::ToString(client->get_id());
	this->textBox_nom->Text = client->get_nom();
	this->textBox_prenom->Text = client->get_prenom();
	this->dateTimePicker2_achat->Value = DateTime(client->GetDate_pr_achat()->Year, client->GetDate_pr_achat()->Month, client->GetDate_pr_achat()->Day);
	this->dateTimePicker1->Value = DateTime(client->GetDate_naiss()->Year, client->GetDate_naiss()->Month, client->GetDate_naiss()->Day);
}
