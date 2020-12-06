#include "FormeCommande.h"
//Afficher
System::Void G7interface::FormeCommande::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    FicheCommande^ fc = gcnew FicheCommande();
    fc->listearticle = this->gestioncommande->get_listearticle();
    this->gestioncommande->afficher(Convert::ToInt32(this->dataGridView1->SelectedRows[0]->Cells[0]->Value));
    fc->set_adresse_list(this->gestioncommande->get_adressesclient());
    fc->set_client(this->gestioncommande->get_nomprenom());
    fc->set_commande(this->gestioncommande->get_commande());
    fc->set_choix(this->gestioncommande->get_choix());
    fc->ShowDialog();
}
//Créer
System::Void G7interface::FormeCommande::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
        FicheCommande^ fc = gcnew FicheCommande();
        MyForm1^ lstcl = gcnew MyForm1();
        lstcl->set_cl_lst(this->gestioncommande->listeclient());
        lstcl->ShowDialog();
        if (lstcl->selected) {
            this->gestioncommande->set_idclient(lstcl->get_cl_sl());
            fc->set_adresse_list(this->gestioncommande->get_adressesclient());
            fc->set_client(lstcl->get_client());
            fc->listearticle = this->gestioncommande->get_listearticle();
            fc->ShowDialog();
            if (fc->valider) {
                this->gestioncommande->set_commande(fc->get_commande());
                this->gestioncommande->set_choix(fc->get_choix());
                this->gestioncommande->ajouter();
            }
        }
}
//Modifier
System::Void G7interface::FormeCommande::button3_Click(System::Object^ sender, System::EventArgs^ e)
{

    System::Windows::Forms::MessageBox::Show("Il est malheuresement impossible de modifier votre commande :(", "Erreur", MessageBoxButtons::OK);
}
//Supprimer
System::Void G7interface::FormeCommande::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->gestioncommande->supprimer(int::Parse(this->dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString()));
    FormeCommande_Load(sender, e);
}

System::Void G7interface::FormeCommande::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
   this->Close();//Bouton retour	
}

System::Void G7interface::FormeCommande::FormeCommande_Load(System::Object^ sender, System::EventArgs^ e)
{
    System::Data::DataTable^ ds = this->gestioncommande->listecommande();
    this->dataGridView1->DataSource = ds;
}
