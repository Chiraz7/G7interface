#pragma once
#include "CAD.h"
#include"Article.h"
namespace Service {
	using namespace System;
	using namespace System::Data;
	ref class SVC_Gstatistique
	{
	private:
		Composant::CAD^ cad;
		Composant::Article^ article;
		DataTable^ dt;
	public:
		SVC_Gstatistique();
		float calculerpaniermoyen();
		float calculerchiffreaffaire(DateTime^, DateTime^);
		DataTable^ produitseuil();
		float calculertotalachat(int id);
		DataTable^ Topvendu();
		DataTable^ Flopvendu();
		float valeurcommercialstock();
		float valeurachatstock();
		DataTable^ clientliste();
	};
}
