#include "SVC_Gstatistique.h"
#include"Article.h"
Service::SVC_Gstatistique::SVC_Gstatistique()
{
    this->cad = gcnew Composant::CAD();
}

float Service::SVC_Gstatistique::calculerpaniermoyen()
{
    float chiffreaffaire;
    int nbcommande = this->cad->actionRowsID("SELECT count(id_commande) from commande");
    DataTable^ t = this->cad->getRows("SELECT SUM((prix_ht +(prix_ht*(tva-remise)/100))*quantite_article) FROM choisir");
    if (t->Rows[0]->ItemArray[0]->ToString() != "") {
        chiffreaffaire = float::Parse(t->Rows[0]->ItemArray[0]->ToString());
    }
    else {
        chiffreaffaire = 0.00;
    }
    return chiffreaffaire / nbcommande;
}

float Service::SVC_Gstatistique::calculerchiffreaffaire(DateTime^ debut, DateTime^ fin)
{
    DataTable^ d = this->cad->getRows("SELECT SUM((prix_ht +(prix_ht*(tva-remise)/100))*quantite_article) FROM " +
        "(SELECT remise,quantite_article,prix_ht,tva,date_emission FROM choisir LEFT JOIN [dbo].[Commande] ON commande.id_commande = choisir.id_commande WHERE date_emission > convert(date,'" +
        debut->Day + "/" + debut->Month + "/" + debut->Year + "',103) AND date_emission < convert(date,'" + fin->Day + "/" + fin->Month + "/" + fin->Year + "',103)) AS tbl");
    float chiffreafaire;
    if (d->Rows[0]->ItemArray[0]->ToString() != "") {
        chiffreafaire = float::Parse(d->Rows[0]->ItemArray[0]->ToString());
    }
    else {
        chiffreafaire = 0.00;
    }
    return chiffreafaire;

}

System::Data::DataTable^ Service::SVC_Gstatistique::produitseuil()
{
    return this->cad->getRows("SELECT reference_article, Designation FROM article WHERE Seuil_de_reapprovisionnement > quantite_en_stock");
}

float Service::SVC_Gstatistique::calculertotalachat(int id)
{
    DataTable^ d = this->cad->getRows("SELECT SUM((prix_ht +(prix_ht*(tva-remise)/100))*quantite_article) FROM choisir LEFT JOIN commande ON commande.id_commande = choisir.id_commande WHERE id_client = " + id);
    float montant;
    if (d->Rows[0]->ItemArray[0]->ToString() != "") {
        montant = float::Parse(d->Rows[0]->ItemArray[0]->ToString());
    }
    else {
        montant = 0.00;
    }
    return montant;
}

System::Data::DataTable^ Service::SVC_Gstatistique::Topvendu()
{
    DataTable^ t = this->cad->getRows("SELECT TOP 10 SUM(quantite_article) AS total,(select designation FROM article WHERE article.id_article = choisir.id_article) AS article from choisir GROUP BY id_article ORDER BY total DESC");

    return t;
}

System::Data::DataTable^ Service::SVC_Gstatistique::Flopvendu()
{
    DataTable^ t = this->cad->getRows("SELECT TOP 10 SUM(quantite_article) as total,(select designation from article where article.id_article = choisir.id_article) as article from choisir GROUP BY id_article ORDER BY total ASC");

    return t;
}

float Service::SVC_Gstatistique::valeurcommercialstock()
{
    return 0.0f;
}

float Service::SVC_Gstatistique::valeurachatstock()
{
    return 0.0f;
}

System::Data::DataTable^ Service::SVC_Gstatistique::clientliste()
{
    return this->cad->getRows("SELECT id_client, concat(nom_c,' ',prenom_c) AS client FROM client");
}