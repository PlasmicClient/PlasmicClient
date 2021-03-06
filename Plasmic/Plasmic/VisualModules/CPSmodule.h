#pragma once
#include "../Module.h"

class CPSmodule : public VisualModule {

public:
	bool showRightclick = false;
	bool cpsAfter = false;

	float reducedWidth = 0.f;
	float scale = 1.f;
	ClickguiColor textColor = ClickguiColor(1.f, 1.f, 1.f, 1.f, true);
	ClickguiColor backgroundColor = ClickguiColor(0.156862f, 0.156862f, 0.156862f, 0.4f, true);

	CPSmodule() : VisualModule("CPS", Vec2(10.f, 69.f), Vec2(50.f,15.f), mltext("Display the CPS you are doing.", "Affiche le nombre de CPS que vous faites.")) {
		addBoolSetting(mltext("Show right click CPS", "Afficher les CPS pour le click droit"), "RightClicks", showRightclick, &showRightclick, true);
		addBoolSetting(mltext("CPS after number of cps", "CPS text after the number of cps"), "cpsAfter", cpsAfter, &cpsAfter, true);

		addFloatSetting(mltext("Reduced Width", "Reduction de Largeur"), "reducedWidth", reducedWidth, &reducedWidth, 0.0f, 25.0f);
		addFloatSetting(mltext("Scale", "Multiplicateur de taille"), "scale", scale, &scale, 0.5f, 1.5f);
		addColorSetting(mltext("Text Color", "Couleur du Texte"), "textColor", textColor, &textColor);
		addColorSetting(mltext("Background Color", "Couleur du Fond"), "backColor", backgroundColor, &backgroundColor);
	}

	virtual void onTick(Gamemode* gm) override;
	virtual void onRender() override;

};

