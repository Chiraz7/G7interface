#include "FormeStock.h"
//Afficher
System::Void G7interface::FormeStock::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->gestionstock->afficher(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	this->setarticle(this->gestionstock->get_article());
	FormeStock_Load(sender,e);
}
//Créer
System::Void G7interface::FormeStock::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->gestionstock->ajouter(textBox_ref->Text, textBox_nom->Text, Convert::ToDouble(textBox_prixHT->Text), Convert::ToDouble(textBox_PrixTVA->Text), Convert::ToInt32(numericUpDown1_quantite->Value), Convert::ToInt32(numericUpDown2_seuil->Value), textBox_couleur->Text);
	this->setarticle(this->gestionstock->get_article());
	FormeStock_Load(sender, e);return System::Void();
}
//Modifier
System::Void G7interface::FormeStock::button3_Click(System::Object^ sender, System::EventArgs^ e)
{

	this->gestionstock->modifier(Convert::ToInt32(textBox_ID->Text),textBox_ref->Text,textBox_nom->Text,Convert::ToDouble(textBox_prixHT->Text),Convert::ToDouble(textBox_PrixTVA->Text),Convert::ToInt32(numericUpDown1_quantite->Value), Convert::ToInt32(numericUpDown2_seuil->Value),textBox_couleur->Text);
	this->setarticle(this->gestionstock->get_article());
	FormeStock_Load(sender, e);return System::Void();
}
//Supprimer
System::Void G7interface::FormeStock::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->gestionstock->supprimer(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
    FormeStock_Load(sender, e);return System::Void();
}
//Load
System::Void G7interface::FormeStock::FormeStock_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->dataGridView1->DataSource = this->gestionstock->listestock();
}
//Bouton retour
System::Void G7interface::FormeStock::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
//Bouton enregistrer
System::Void G7interface::FormeStock::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
void G7interface::FormeStock::calculTTC(System::Object^ Sender, System::EventArgs^ e)
{
	if (!(textBox_prixHT->Text == "" || textBox_PrixTVA->Text=="")) {
		float HT = Convert::ToDouble(textBox_prixHT->Text->Replace(",", "."));
		float TVA = Convert::ToDouble(textBox_PrixTVA->Text->Replace(",", "."));
		float TTC = HT + (HT * TVA / 100);
		this->textBox_prixTTC->Text = TTC.ToString();
	}
}
//SetArticle
void G7interface::FormeStock::setarticle(Composant::Article^ article)
{
	this->textBox_ID->Text = Convert::ToString(article->getID_article());
	this->textBox_ref->Text = article->getReference_article();
	this->textBox_nom->Text = article->getDesignation();
	this->textBox_couleur->Text = article->getCouleur();
	this->numericUpDown1_quantite->Value = article->getQuantite_en_Stock();
	this->numericUpDown2_seuil->Value = article->getSeuil_de_reapprovisionnement();
	this->textBox_prixHT->Text =article->getPrix_HT().ToString();
	this->textBox_PrixTVA->Text = article->getTaux_TVA().ToString();

}
//Getarticle
Composant::Article^ G7interface::FormeStock::getarticle()
{
	return this->article;
}
