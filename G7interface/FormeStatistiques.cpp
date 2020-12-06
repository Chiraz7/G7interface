#include "FormeStatistiques.h"

System::Void G7interface::FormeStatistiques::FormeStatistiques_Load(System::Object^ sender, System::EventArgs^ e)
{
    chiffre_affaire->Text = this->gestionstats->calculerchiffreaffaire(debut->Value, fin->Value).ToString();
    dataGridView_seuil->DataSource = this->gestionstats->produitseuil();//Afficher le seuil 
    dataGridView_plusvendus->DataSource = this->gestionstats->Topvendu();//Les produits les plus vendus
    dataGridView_moins_vendus->DataSource = this->gestionstats->Flopvendu();//Les produits les moins vendus
    lstclient->DataSource = this->gestionstats->clientliste();
    lstclient->ValueMember = "id_client";
    lstclient->DisplayMember = "client";
    montant_client->Text = this->gestionstats->calculertotalachat(Convert::ToInt32(lstclient->SelectedValue)).ToString();
    panier_moyen->Text = "Panier Moyen : " + this->gestionstats->calculerpaniermoyen();
}
